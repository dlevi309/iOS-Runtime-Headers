/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/


@protocol GKCollectionViewDataSourceDelegate <NSObject>
@optional
-(void)dataSource:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2;
-(void)dataSource:(id)arg1 didRemoveItemsAtIndexPaths:(id)arg2;
-(void)dataSource:(id)arg1 didRefreshItemsAtIndexPaths:(id)arg2;
-(void)dataSource:(id)arg1 didMoveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
-(void)dataSource:(id)arg1 didInsertSections:(id)arg2;
-(void)dataSource:(id)arg1 didRemoveSections:(id)arg2;
-(void)dataSource:(id)arg1 didRefreshSections:(id)arg2;
-(void)dataSource:(id)arg1 didMoveSection:(long long)arg2 toSection:(long long)arg3;
-(void)dataSourceDidReloadData:(id)arg1;
-(void)dataSource:(id)arg1 performBatchUpdate:(/*^block*/id)arg2 complete:(/*^block*/id)arg3;
-(void)dataSource:(id)arg1 didUpdatePlaceholderVisibility:(BOOL)arg2;
-(void)dataSourceDidMoveSectionsWithItems:(id)arg1;

@end

