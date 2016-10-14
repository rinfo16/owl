#ifndef PAGE_OPERATION_H_
#define PAGE_OPERATION_H_
#include "page_layout.h"

namespace storage {

DataHeader *ToDataHeader(Page *page);
SegmentHeader *ToSegmentHeader(Page *page);
SegFileHeader *ToSegFileHeader(Page *page);
DataFileHeader *ToDataFileHeader(Page *page);
ExtentHeader *ToExtentHeader(Page *page);
Slot *ToFirstSlot(DataHeader *header);

void InitPage(Page *page, PageID id, PageType page_type);
void InitExtentHeader(ExtentHeader *header, uint32_t extent_count_per_page);
void InitDataHeader(DataHeader *header, uint32_t page_size);

bool PutTuple(Page *data_page, void *tuple, uint32_t length,
              slotno_t *no = NULL);
void *GetTuple(Page *data_page, slotno_t no, uint16_t *length = NULL);

void LinkPage(Page *left, Page *right);

}  // end namespace storage

#endif // PAGE_OPERATION_H_
