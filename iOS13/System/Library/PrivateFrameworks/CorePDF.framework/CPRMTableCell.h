/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
*/


#import <CorePDF/CorePDF-Structs.h>
@class NSString, CPRMTable;

@interface CPRMTableCell : NSObject {

	NSString* _contents;
	CPRMTableCell* _nextCellInColumn;
	CPRMTableCell* _nextCellInRow;
	CPRMTable* _table;
	CGPDFNodeRef _tableCellNode;

}

@property (readonly) CGPDFPageRef page; 
@property (retain) CPRMTableCell * nextCellInColumn;              //@synthesize nextCellInColumn=_nextCellInColumn - In the implementation block
@property (retain) CPRMTableCell * nextCellInRow;                 //@synthesize nextCellInRow=_nextCellInRow - In the implementation block
@property (assign) CPRMTable * table;                             //@synthesize table=_table - In the implementation block
@property (assign) CGPDFNodeRef tableCellNode;                    //@synthesize tableCellNode=_tableCellNode - In the implementation block
-(void)dealloc;
-(id)contents;
-(CGRect)bounds;
-(CPRMTable *)table;
-(CGColorRef)backgroundColor;
-(unsigned long long)row;
-(void)setTable:(CPRMTable *)arg1 ;
-(CGPDFPageRef)page;
-(void)setTableCellNode:(CGPDFNodeRef)arg1 ;
-(void)setNextCellInRow:(CPRMTableCell *)arg1 ;
-(void)setNextCellInColumn:(CPRMTableCell *)arg1 ;
-(CGPDFNodeRef)tableCellNode;
-(CPRMTableCell *)nextCellInRow;
-(CPRMTableCell *)nextCellInColumn;
-(unsigned long long)column;
@end

