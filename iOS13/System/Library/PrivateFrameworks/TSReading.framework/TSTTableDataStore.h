/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSPContainedObject.h>

@class TSTTileIDKeyDict, TSTTableHeaderStorage, TSPLazyReference, TSTCustomFormatList, TSTMergeRegionMap;

@interface TSTTableDataStore : TSPContainedObject {

	TSTTableRBTreeNode_s* mColumnTileIndex;
	TSTTableRBTreeNode_s* mRowTileIndex;
	TSTTileIDKeyDict* mTileStorage;
	TSTTableHeaderStorage* mRowHeaderStorage;
	TSPLazyReference* mColumnHeaderStorageReference;
	TSPLazyReference* mConditionalStyleSetTableReference;
	TSPLazyReference* mStringTableReference;
	TSPLazyReference* mStyleTableReference;
	TSPLazyReference* mFormulaTableReference;
	TSPLazyReference* mFormulaErrorTableReference;
	TSPLazyReference* mRichTextPayloadTableReference;
	TSPLazyReference* mFormatTableReference;
	TSPLazyReference* mMultipleChoiceListFormatTableReference;
	TSPLazyReference* mCommentStorageTableReference;
	TSTCustomFormatList* mPasteboardCustomFormatList;
	unsigned short mNextRowStripID;
	unsigned short mNextColumnStripID;
	TSTMergeRegionMap* mMergedCellRanges;
	unsigned mCellCount;
	BOOL mCellCountValid;
	BOOL mDrawableIsBeingCopied;
	unsigned mStorageVersion;

}
-(void)dealloc;
-(void)debugDump;
-(id)initWithOwner:(id)arg1 ;
-(void)validate;
-(void)setDrawableIsBeingCopied:(BOOL)arg1 ;
-(void)setStorageParentToInfo:(id)arg1 ;
-(void)p_updateTileStorageToCurrentVersion;
-(BOOL)needToUpgradeCellStorage;
-(void)upgradeDataStoreCellStorage;
@end

