<img src="doc/owl.jpg" height=160></img>
[![Build Status](https://travis-ci.org/rinfo16/DBMS18.svg?branch=master)](https://travis-ci.org/rinfo16/DBMS18)

# Welcome to DBMS18

A database POC
 
### __Roadmap__
##### __Common__  
- [ ] Common Utils/ADTs
- [ ] Memory Manager

##### __RRPortal__  
- [x] Start Up Initial
- [x] Session Manager
- [x] C&S Protocol, support PostgreSQL protocol

##### __Parser__  
- [x] Lex && Yacc
- [x] AST


##### __Realizer__  
- [ ] Semantic Check
- [ ] Optimizer RBO/CBO
- [x] Build Execution Tree


##### __Executor__  
- [x] Scan
- [x] Select
- [x] Porject
- [x] Nest Loop Join
- [ ] Hash Join
- [ ] Merge Join
- [ ] Sort
- [ ] Hash
- [ ] Aggregate
- [ ] Union
- [ ] Union All
- [ ] Intersect
- [ ] Except
- [ ] Sub Query 
- [ ] Expression Calculate

##### __Storage__  
- [x] Space Manager
- [x] Buffer Manager
- [x] Meta Data Manager
- [ ] Lock Manager
- [ ] Index Access
    - [ ] B+ Tree
    - [ ] Linear Hash
    - [ ] Bitmap
- [ ] Transaction
	- [ ] WAL


##### __Client__  
- [ ] UI
- [ ] Tools

### Start Up  
#### Support SQL: 
> CREATE TABLE table_name ( column_define_list );  
> SELECT column_name_list FROM table_name;  
> COPY table_name ( column_name_list) FROM ‘csv_file_path’;  

#### Support data type: 
> INTEGER, VARCHAR，FLOAT

#### Example:
Backend start 
> owl --port=8432

Connect to the backend use psql 
> psql -h localhost -p 8432 -d postgres

Creat table 
> psql -h localhost -p 8432 -d postgres -f create_table.sql  

	cat create_table.sql 
	create table user ( 
		id INTEGER,  
		firstname VARCHAR(256),  
		lastname VARCHAR(256) ,  
		email VARCHAR(256),  
		gender INTEGER,  
		ipaddress VARCHAR(256) 
	); 
	
Load from CSV file  
> psql -h localhost -p 8432 -d postgres -f copy_from_std.sql 

	cat copy_from_std.sql 
	\copy user from 'data/testdata.csv' delimiter as ',';  
	
SELECT query 
> psql -h localhost -p 8432 -d postgres -f select.sql

	cat select.sql  
	select ipaddress, firstname, lastname, gender from user;  
	
