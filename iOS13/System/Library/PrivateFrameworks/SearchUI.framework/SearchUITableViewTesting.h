/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/


@protocol SearchUITableViewTesting <NSObject>
@property (nonatomic,copy) id cellWillDisplayHandler; 
@property (nonatomic,copy) id tableViewWillUpdateHandler; 
@property (nonatomic,copy) id tableViewDidUpdateHandler; 
@required
-(id)navigationController;
-(id)tableViewWillUpdateHandler;
-(id)tableViewDidUpdateHandler;
-(id)cellWillDisplayHandler;
-(void)performScrollTestWithHandlerForFirstScrollCompletion:(/*^block*/id)arg1 completion:(/*^block*/id)arg2;
-(void)performScrollTestWithCompletion:(/*^block*/id)arg1;
-(id)currentTableModel;
-(void)toggleShowMoreForSection:(unsigned long long)arg1;
-(CGRect*)scrollToIndexPath:(id)arg1;
-(void)tapAtIndexPath:(id)arg1;
-(void)setCellWillDisplayHandler:(/*^block*/id)arg1;
-(void)setTableViewWillUpdateHandler:(/*^block*/id)arg1;
-(void)setTableViewDidUpdateHandler:(/*^block*/id)arg1;

@end

