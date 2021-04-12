/*
* Generated on Thursday, January 14, 2021 at 2:20:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class _UIDataSourceSnapshotter, NSArray, _UIDataSourceBatchUpdateMapHelper;

@interface _UIDataSourceUpdateMap : NSObject {

	_UIDataSourceSnapshotter* _initialSnapshot;
	_UIDataSourceSnapshotter* _finalSnapshot;
	NSArray* _originalUpdateItems;
	NSArray* _updateItems;
	NSArray* _reverseUpdateItems;
	_UIDataSourceBatchUpdateMapHelper* _batchUpdateMapHelper;

}

@property (nonatomic,retain) _UIDataSourceSnapshotter * initialSnapshot;                            //@synthesize initialSnapshot=_initialSnapshot - In the implementation block
@property (nonatomic,copy) NSArray * originalUpdateItems;                                           //@synthesize originalUpdateItems=_originalUpdateItems - In the implementation block
@property (nonatomic,retain) NSArray * updateItems;                                                 //@synthesize updateItems=_updateItems - In the implementation block
@property (nonatomic,retain) NSArray * reverseUpdateItems;                                          //@synthesize reverseUpdateItems=_reverseUpdateItems - In the implementation block
@property (nonatomic,retain) _UIDataSourceSnapshotter * finalSnapshot;                              //@synthesize finalSnapshot=_finalSnapshot - In the implementation block
@property (nonatomic,retain) _UIDataSourceBatchUpdateMapHelper * batchUpdateMapHelper;              //@synthesize batchUpdateMapHelper=_batchUpdateMapHelper - In the implementation block
@property (nonatomic,readonly) BOOL isBatchUpdateMap; 
+(id)mapForInitialSnapshot:(id)arg1 orderedUpdateItems:(id)arg2 ;
+(id)mapForInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 batchUpdateItems:(id)arg3 ;
-(id)initialIndexPathForFinalIndexPath:(id)arg1 ;
-(NSArray *)updateItems;
-(id)updates;
-(void)setInitialSnapshot:(_UIDataSourceSnapshotter *)arg1 ;
-(_UIDataSourceSnapshotter *)initialSnapshot;
-(id)finalIndexPathForIndexPath:(id)arg1 startingAtUpdateWithIdentifier:(id)arg2 ;
-(id)initialUpdateForUpdateIdentifier:(id)arg1 ;
-(id)initialUpdateForFinalUpdate:(id)arg1 ;
-(NSArray *)reverseUpdateItems;
-(void)_updateSnapshot:(id)arg1 forUpdateItem:(id)arg2 ;
-(void)setFinalSnapshot:(_UIDataSourceSnapshotter *)arg1 ;
-(id)_rebasedUpdatesForUpdate:(id)arg1 ;
-(id)finalIndexPathForInitialIndexPath:(id)arg1 ;
-(BOOL)isBatchUpdateMap;
-(long long)finalSectionIndexForInitialSectionIndex:(long long)arg1 ;
-(id)initialIndexPathForIndexPath:(id)arg1 beforeUpdateWithIdentifier:(id)arg2 ;
-(id)_transformIndexPath:(id)arg1 applyingUpdateItem:(id)arg2 withSnapshot:(id)arg3 ;
-(void)setOriginalUpdateItems:(NSArray *)arg1 ;
-(id)finalUpdateForInitialUpdate:(id)arg1 ;
-(id)description;
-(void)setUpdateItems:(NSArray *)arg1 ;
-(id)updateMapByRevertingUpdateWithIdentifier:(id)arg1 ;
-(id)submapBeforeUpdate:(id)arg1 ;
-(BOOL)_isSectionOnlyIndexPath:(id)arg1 ;
-(void)_performAppendingInsertsFixups;
-(void)_computeFinalSnapshotAndReverseUpdateItemsForCollectionViewUpdateItems:(id)arg1 ;
-(void)setReverseUpdateItems:(NSArray *)arg1 ;
-(NSArray *)originalUpdateItems;
-(id)rebasedMapFromNewBaseMap:(id)arg1 ;
-(long long)initialSectionIndexForFinalSectionIndex:(long long)arg1 ;
-(_UIDataSourceBatchUpdateMapHelper *)batchUpdateMapHelper;
-(id)_mapUpdateForCollectionUpdateItem:(id)arg1 snapshot:(id)arg2 ;
-(long long)_transformSectionIndex:(long long)arg1 applyingUpdateItem:(id)arg2 withSnapshot:(id)arg3 ;
-(id)_updateMapByRevertingAllUpdatesExceptUpdateWithIdentifier:(id)arg1 ;
-(id)_findUpdateForIdentifier:(id)arg1 ;
-(id)initWithInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 updateItems:(id)arg3 ;
-(BOOL)_mapIsSimpleInsertMoveSequence;
-(_UIDataSourceSnapshotter *)finalSnapshot;
-(id)submapAfterUpdate:(id)arg1 ;
-(id)_sectionIndexPathForSection:(long long)arg1 ;
-(void)setBatchUpdateMapHelper:(_UIDataSourceBatchUpdateMapHelper *)arg1 ;
@end

