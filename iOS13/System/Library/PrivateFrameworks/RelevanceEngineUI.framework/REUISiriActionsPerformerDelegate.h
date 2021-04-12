/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
*/


@protocol REUISiriActionsPerformerDelegate <NSObject>
@required
-(id)siriActionsPerformerWantsAlertBackgroundImage:(id)arg1;
-(id)siriActionsPerformerWantsBackgroundViewToBlur:(id)arg1;
-(BOOL)siriActionsPerformer:(id)arg1 wantsToPresentViewController:(id)arg2;
-(void)siriActionsPerformerWantsToSuppressDismissal:(id)arg1;
-(BOOL)siriActionsPerformer:(id)arg1 wantsToDismissViewController:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4;
-(void)siriActionsPerformerDidSucceed:(id)arg1;
-(void)siriActionsPerformer:(id)arg1 didFailWithError:(id)arg2;

@end

