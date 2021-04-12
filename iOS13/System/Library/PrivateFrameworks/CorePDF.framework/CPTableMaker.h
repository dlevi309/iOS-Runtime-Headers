/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
*/


#import <CorePDF/CorePDF-Structs.h>
@class CPZone, CPTable;

@interface CPTableMaker : NSObject {

	CPZone* tableZone;
	CPTable* table;
	unsigned cellIndex;
	CGPoint* rowYIntervals;
	CGPoint* columnXIntervals;

}
+(void)makeTablesInPage:(id)arg1 ;
+(void)makeTablesInZone:(id)arg1 ;
+(BOOL)isTable:(id)arg1 ;
+(void)makeTableFrom:(id)arg1 ;
-(void)dealloc;
-(id)newBackgroundGraphicArrayFromRectangularZone:(id)arg1 ;
-(id)newTableCellFromZone:(id)arg1 ;
-(void)determineRowsAndColumns:(BOOL)arg1 ;
-(id)initWithZone:(id)arg1 ;
-(void)makeTable;
@end

