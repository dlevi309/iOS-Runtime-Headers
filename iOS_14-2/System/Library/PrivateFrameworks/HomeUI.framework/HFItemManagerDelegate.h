/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@protocol HFItemManagerDelegate <NSObject>
@optional
-(void)itemManager:(id)arg1 didUpdateResultsForSourceItem:(id)arg2;
-(void)itemManager:(id)arg1 didUpdateResultsForItem:(id)arg2 atIndexPath:(id)arg3;
-(void)itemManager:(id)arg1 didChangeOverallLoadingState:(unsigned long long)arg2;
-(id)itemManager:(id)arg1 futureToUpdateItems:(id)arg2 itemUpdateOptions:(id)arg3;
-(void)itemManagerDidFinishUpdate:(id)arg1;
-(void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
-(void)itemManager:(id)arg1 didChangeHome:(id)arg2;
-(void)itemManager:(id)arg1 didChangeSourceItem:(id)arg2;
-(void)itemManager:(id)arg1 didUpdateItemModules:(id)arg2;
-(void)itemManager:(id)arg1 didRemoveSections:(id)arg2;
-(void)itemManager:(id)arg1 didInsertSections:(id)arg2;
-(void)itemManager:(id)arg1 didMoveSection:(long long)arg2 toSection:(long long)arg3;
-(void)itemManager:(id)arg1 didRemoveItem:(id)arg2 atIndexPath:(id)arg3;
-(void)itemManager:(id)arg1 didInsertItem:(id)arg2 atIndexPath:(id)arg3;
-(void)itemManager:(id)arg1 didMoveItem:(id)arg2 fromIndexPath:(id)arg3 toIndexPath:(id)arg4;

@end

