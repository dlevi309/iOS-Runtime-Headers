/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBAlertItemPresenter <NSObject>
@required
-(void)dismissAlertItem:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(BOOL)canPresentMultipleAlertItemsSimultaneously;
-(void)presentAlertItem:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(BOOL)presentsAlertItemsModally;

@end

