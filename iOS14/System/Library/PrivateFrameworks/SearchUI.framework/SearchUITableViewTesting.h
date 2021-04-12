/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/


@protocol SearchUITableViewTesting <NSObject>
@property (nonatomic,copy) id cellWillDisplayHandler; 
@property (nonatomic,copy) id tableViewWillUpdateHandler; 
@property (nonatomic,copy) id tableViewDidUpdateHandler; 
@required
-(id)tableViewWillUpdateHandler;
-(id)tableViewDidUpdateHandler;
-(id)cellWillDisplayHandler;
-(void)toggleShowMoreForSection:(unsigned long long)arg1;
-(void)performScrollTestWithHandlerForFirstScrollCompletion:(/*^block*/id)arg1 completion:(/*^block*/id)arg2;
-(void)performScrollTestWithCompletion:(/*^block*/id)arg1;
-(id)currentTableModel;
-(CGRect*)scrollToIndexPath:(id)arg1;
-(void)tapAtIndexPath:(id)arg1;
-(void)setCellWillDisplayHandler:(/*^block*/id)arg1;
-(void)setTableViewWillUpdateHandler:(/*^block*/id)arg1;
-(void)setTableViewDidUpdateHandler:(/*^block*/id)arg1;
-(id)navigationController;

@end

