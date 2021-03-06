#ifndef BOOLEAN_EXPR_INTERFACE_H__
#define BOOLEAN_EXPR_INTERFACE_H__

#include "common/tuple_row.h"
#include "executor/datum_interface.h"
namespace executor {

class BooleanExprInterface : public DatumInterface {
 public:
  virtual ~BooleanExprInterface() {
  }
  ;
  virtual bool GetValue(TupleRow *row) const = 0;
  virtual bool GetValue(TupleRow *row1, TupleRow *row2) const = 0;
};
}
#endif // BOOLEAN_EXPR_INTERFACE_H__
