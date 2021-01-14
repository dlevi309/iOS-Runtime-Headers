/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/EDSheet.h>

@class EDRowBlocks, EDColumnInfoCollection, EDCollection, EDMergedCellCollection, EDPane, EDWarnings, EDReference, NSMutableDictionary;

@interface EDWorksheet : EDSheet {

	EDRowBlocks* mRowBlocks;
	EDColumnInfoCollection* mColumnInfos;
	EDCollection* mConditionalFormattings;
	EDCollection* mHyperlinks;
	EDCollection* mTables;
	EDCollection* mPivotTables;
	EDMergedCellCollection* mMergedCells;
	EDPane* mPane;
	EDWarnings* mWorksheetWarnings;
	double mDefaultColumnWidth;
	unsigned short mDefaultRowHeight;
	unsigned long long mMaxRowOutlineLevel;
	unsigned long long mMaxColumnOutlineLevel;
	BOOL mFitToPage;
	EDReference* mMaxCellReferencedInFormulas;
	NSMutableDictionary* mMergedRows;
	NSMutableDictionary* mMergedCols;
	EDReference* mImplicitCellArea;

}
-(id)pane;
-(void)setup;
-(id)tables;
-(unsigned short)defaultRowHeight;
-(void)setPane:(id)arg1 ;
-(id)description;
-(void)teardown;
-(id)mergedCells;
-(id)rowBlocks;
-(double)defaultColumnWidth;
-(id)columnInfos;
-(id)maxCellReferencedInFormulas;
-(id)hyperlinks;
-(id)conditionalFormattings;
-(void)setDefaultColumnWidth:(double)arg1 ;
-(void)setDefaultRowHeight:(unsigned short)arg1 ;
-(void)setFitToPage:(BOOL)arg1 ;
-(void)setMaxRowOutlineLevel:(unsigned long long)arg1 ;
-(void)setMaxColumnOutlineLevel:(unsigned long long)arg1 ;
-(void)updateMaxColumnOutlineLevelIfNeeded:(unsigned long long)arg1 ;
-(void)reduceMemoryIfPossible;
-(BOOL)fitToPage;
-(id)pivotTables;
-(id)worksheetWarnings;
-(BOOL)hasMergedCells;
-(unsigned long long)maxRowOutlineLevel;
-(void)updateMaxRowOutlineLevelIfNeeded:(unsigned long long)arg1 ;
-(unsigned long long)maxColumnOutlineLevel;
-(void)setMergedRowsRef:(id)arg1 from:(unsigned)arg2 to:(unsigned)arg3 ;
-(void)setMergedColsRef:(id)arg1 from:(unsigned)arg2 to:(unsigned)arg3 ;
-(BOOL)hasMergedRow;
-(BOOL)isRowMerged:(unsigned)arg1 ;
-(id)mergedRowRef:(unsigned)arg1 ;
-(BOOL)hasMergedCol;
-(BOOL)isColMerged:(unsigned)arg1 ;
-(id)mergedColRef:(unsigned)arg1 ;
-(id)implicitCellArea;
-(void)setImplicitCellArea:(id)arg1 ;
@end

