/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
*/


@protocol AFUISiriViewDelegate <NSObject>
@required
-(void)siriViewDidReceiveAudioRouteAction:(id)arg1;
-(void)siriViewDidReceiveReportBugAction:(id)arg1;
-(void)siriViewDidReceiveBugButtonLongPress:(id)arg1;
-(void)siriViewDidReceiveHelpAction:(id)arg1;
-(BOOL)siriView:(id)arg1 attemptUnlockWithPassword:(id)arg2;
-(float)audioRecordingPowerLevelForSiriView:(id)arg1;
-(void)siriViewDidRecieveStatusViewTappedAction:(id)arg1;
-(void)siriViewDidRecieveStatusViewHoldDidBeginAction:(id)arg1;
-(void)siriViewDidRecieveStatusViewHoldDidEndAction:(id)arg1;
-(BOOL)siriViewShouldSupportTextInput:(id)arg1;
-(void)siriView:(id)arg1 didReceiveSiriActivationMessageWithSource:(long long)arg2;

@end

