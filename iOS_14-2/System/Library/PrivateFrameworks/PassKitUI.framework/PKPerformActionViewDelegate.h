/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@protocol PKPerformActionViewDelegate <NSObject>
@optional
-(void)performActionView:(id)arg1 requestsPresentViewController:(id)arg2;
-(void)performActionViewRequestsPerformNextStepForAction:(id)arg1 completion:(/*^block*/id)arg2;
-(void)performActionViewDidPerformAction:(id)arg1;

@required
-(void)setRightBarButtonEnabled:(BOOL)arg1;
-(void)shakeCard;

@end

