/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@protocol TSTCellRegionIterating;
#import <TSReading/TSReading-Structs.h>
@class TSTTableModel, TSTCellRegion, NSObject, TSTTableDataStore, TSTTableTileRowInfo, TSTTableTile, TSTCell;

@interface TSTCellIterator : NSObject {

	TSTTableModel* mTableModel;
	TSTCellRegion* mModelRegion;
	NSObject*<TSTCellRegionIterating> mModelRegionIterator;
	TSTTableDataStore* mTableDataStore;
	SCD_Struct_TS140 mPreviousCellID;
	TSTTableTileRowInfo* mCurRow;
	TSTTableTile* mCurTile;
	unsigned short mCurRowID;
	NSRange mCurTileRange;
	TSTCell* mCell;
	BOOL mSkipStyleOnlyCells;
	BOOL mSkipCommentStorageOnlyCells;
	BOOL mDontExpandCellRefs;
	int mRowWalkDirection;
	BOOL mDontCheckSize;
	BOOL mDontReturnMergeRegions;
	BOOL mReturnHiddenCells;
	BOOL mDontInflateFormulas;
	BOOL mReturnEmptyCells;

}

@property (readonly) BOOL dontExpandCellRefs; 
@property (readonly) int rowWalkDirection; 
-(void)dealloc;
-(void)terminate;
-(id)initWithTableModel:(id)arg1 region:(id)arg2 flags:(unsigned long long)arg3 ;
-(BOOL)getNext:(SCD_Struct_TS174*)arg1 ;
-(id)initWithTableModel:(id)arg1 ;
-(id)initWithTableModel:(id)arg1 range:(SCD_Struct_TS142)arg2 ;
-(id)initWithTableModel:(id)arg1 flags:(unsigned long long)arg2 ;
-(id)initWithTableModel:(id)arg1 range:(SCD_Struct_TS142)arg2 flags:(unsigned long long)arg3 ;
-(void)p_resetIterData:(SCD_Struct_TS174*)arg1 ;
-(BOOL)p_getData:(SCD_Struct_TS174*)arg1 forCellID:(SCD_Struct_TS140)arg2 ;
-(id)initWithTableModel:(id)arg1 region:(id)arg2 ;
-(BOOL)dontExpandCellRefs;
-(int)rowWalkDirection;
@end

