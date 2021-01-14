/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setReference:(id)arg1 ;
-(BOOL)nextRow;
-(void)dealloc;
-(void)setCurrentSheet:(id)arg1 ;
-(EDCellHeader*)nextCell;
-(unsigned)currentCellIndex;
-(id)initWithReferenceArray:(id)arg1 reference:(id)arg2 workbook:(id)arg3 ;
-(id)initWithReference:(id)arg1 workbook:(id)arg2 ;
-(id)initWithReferenceArray:(id)arg1 workbook:(id)arg2 ;
-(BOOL)nextReference;
@end

