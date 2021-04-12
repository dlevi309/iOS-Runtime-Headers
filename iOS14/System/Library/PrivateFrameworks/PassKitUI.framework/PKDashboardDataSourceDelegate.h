/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@protocol PKDashboardDataSourceDelegate <NSObject>
@required
-(void)updateContent;
-(void)insertSections:(id)arg1;
-(void)reloadSections:(id)arg1;
-(void)deleteSections:(id)arg1;
-(void)performBatchUpdates:(/*^block*/id)arg1 completion:(/*^block*/id)arg2;
-(void)contentIsLoaded;
-(void)itemChanged:(id)arg1 atIndexPath:(id)arg2;

@end

