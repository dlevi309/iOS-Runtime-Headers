/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@protocol PKPerformActionViewDelegate <NSObject>
@optional
-(void)performActionView:(id)arg1 requestsPresentViewController:(id)arg2;
-(void)performActionViewRequestsPerformNextStepForAction:(id)arg1 completion:(/*^block*/id)arg2;
-(void)performActionViewDidPerformAction:(id)arg1;

@required
-(void)shakeCard;
-(void)setRightBarButtonEnabled:(BOOL)arg1;

@end

