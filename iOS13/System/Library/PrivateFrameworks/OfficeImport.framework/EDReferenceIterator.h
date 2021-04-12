/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class EDWorkbook, EDWorksheet, EDCollection, EDReference, EDRowBlocks, EDRowBlock;

@interface EDReferenceIterator : NSObject {

	EDWorkbook* mWorkbook;
	EDWorksheet* mCurrentSheet;
	EDCollection* mReferences;
	EDReference* mReference;
	EDRowBlocks* mRowBlocks;
	EDRowBlock* mRowBlock;
	unsigned long long mRowBlockIndex;
	EDRowInfo* mRowInfo;
	unsigned mRowInfoIndex;
	unsigned mCellIndex;
	unsigned mNextArrayIndex;
	int mCurrentCellIndex;
	unsigned mPreviousColumnNumber;

}
+(id)referenceIteratorWithReferenceArray:(id)arg1 workbook:(id)arg2 ;
+(id)referenceIteratorWithReference:(id)arg1 workbook:(id)arg2 ;
-(void)dealloc;
-(void)setReference:(id)arg1 ;
-(void)setCurrentSheet:(id)arg1 ;
-(EDCellHeader*)nextCell;
-(unsigned)currentCellIndex;
-(id)initWithReferenceArray:(id)arg1 reference:(id)arg2 workbook:(id)arg3 ;
-(id)initWithReference:(id)arg1 workbook:(id)arg2 ;
-(id)initWithReferenceArray:(id)arg1 workbook:(id)arg2 ;
-(BOOL)nextRow;
-(BOOL)nextReference;
@end

