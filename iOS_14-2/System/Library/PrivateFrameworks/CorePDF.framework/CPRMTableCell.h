/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)contents;
-(CGRect)bounds;
-(CPRMTable *)table;
-(CGPDFPageRef)page;
-(unsigned long long)row;
-(unsigned long long)column;
-(void)setTable:(CPRMTable *)arg1 ;
-(CGColorRef)backgroundColor;
-(void)dealloc;
-(void)setTableCellNode:(CGPDFNodeRef)arg1 ;
-(void)setNextCellInRow:(CPRMTableCell *)arg1 ;
-(void)setNextCellInColumn:(CPRMTableCell *)arg1 ;
-(CGPDFNodeRef)tableCellNode;
-(CPRMTableCell *)nextCellInRow;
-(CPRMTableCell *)nextCellInColumn;
@end

