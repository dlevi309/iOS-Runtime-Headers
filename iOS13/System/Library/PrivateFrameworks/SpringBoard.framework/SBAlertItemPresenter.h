/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBAlertItemPresenter <NSObject>
@required
-(BOOL)canPresentMultipleAlertItemsSimultaneously;
-(void)presentAlertItem:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(BOOL)presentsAlertItemsModally;
-(void)dismissAlertItem:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;

@end

