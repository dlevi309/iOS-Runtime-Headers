/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSTLayoutDynamicResizeInfoProtocol.h>

@class TSTCellRegion, NSString;

@interface TSTLayoutDynamicResizeInfo : NSObject <TSTLayoutDynamicResizeInfoProtocol> {

	BOOL mValid;
	int mTableRowsBehavior;
	TSTCellRegion* mRowRegion;
	unsigned short mStartRowIndex;
	unsigned short mNumberOfRows;
	unsigned short mNumberOfResizableRows;
	double* mCapturedRowHeights;
	double* mCurrentRowHeights;
	double* mMinimumRowHeights;
	double mCapturedRowHeightTotal;
	TSTCellRegion* mColumnRegion;
	unsigned char mStartColumnIndex;
	unsigned short mNumberOfColumns;
	unsigned short mNumberOfResizableColumns;
	double* mCapturedColumnWidths;
	double* mCurrentColumnWidths;
	double* mMinimumColumnWidths;
	double mCapturedColumnWidthTotal;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(BOOL)valid;
-(id)columnWidths;
-(void)p_captureRowColumnInformation:(id)arg1 columnRegion:(id)arg2 rowRegion:(id)arg3 ;
-(BOOL)hasHeightForRow:(unsigned short)arg1 ;
-(BOOL)hasWidthForColumn:(unsigned char)arg1 ;
-(double)applyResizeHeightFactor:(double)arg1 ;
-(double)applyResizeWidthFactor:(double)arg1 ;
-(double)getColumnWidth:(unsigned char)arg1 ;
-(double)getRowHeight:(unsigned short)arg1 ;
-(void)enumerateRowHeightsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateColumnWidthsUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithMasterLayout:(id)arg1 ;
-(id)initWithMasterLayout:(id)arg1 columnRegion:(id)arg2 ;
-(id)initWithMasterLayout:(id)arg1 rowRegion:(id)arg2 ;
-(id)initWithDynamicResizeInfo:(id)arg1 ;
-(double)getRowInitialHeight:(unsigned short)arg1 ;
-(double)getColumnInitialWidth:(unsigned char)arg1 ;
-(double)getRowHeightResize:(unsigned short)arg1 ;
-(double)getColumnWidthResize:(unsigned char)arg1 ;
-(void)captureNewMinimumRowHeights:(id)arg1 ;
-(double)applyRowTotalHeight:(double)arg1 ;
-(double)applyColumnTotalWidth:(double)arg1 ;
-(CGSize)capturedTableSize;
-(id)rowHeights;
@end

