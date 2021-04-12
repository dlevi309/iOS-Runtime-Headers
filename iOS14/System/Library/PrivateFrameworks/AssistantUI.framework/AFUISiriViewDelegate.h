/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
*/


@protocol AFUISiriViewDelegate <NSObject>
@optional
-(void)collapseAndTriggerDismissalFromSiriView:(id)arg1;

@required
-(void)siriViewDidReceiveAudioRouteAction:(id)arg1;
-(void)siriViewDidReceiveReportBugAction:(id)arg1;
-(void)siriViewDidReceiveBugButtonLongPress:(id)arg1;
-(void)siriViewDidReceiveHelpAction:(id)arg1;
-(float)audioRecordingPowerLevelForSiriView:(id)arg1;
-(void)siriViewDidRecieveStatusViewTappedAction:(id)arg1;
-(void)siriViewDidRecieveStatusViewHoldDidBeginAction:(id)arg1;
-(void)siriViewDidRecieveStatusViewHoldDidEndAction:(id)arg1;
-(BOOL)siriViewShouldSupportTextInput:(id)arg1;
-(void)siriView:(id)arg1 didReceiveSiriActivationMessageWithSource:(long long)arg2;
-(BOOL)siriView:(id)arg1 attemptUnlockWithPassword:(id)arg2;

@end

