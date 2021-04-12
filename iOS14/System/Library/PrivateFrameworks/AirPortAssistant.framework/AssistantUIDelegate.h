/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
*/


@protocol AssistantUIDelegate
@optional
-(void)showUIConfigPromptPreHook;
-(void)showUIConfigPromptPostHook;

@required
-(void)doneWithAssistantResult:(int)arg1;
-(void)assistantUpdateProgress:(id)arg1 forState:(int)arg2;
-(void)assistantWaitingForResourcesStart;
-(void)assistantWaitingForResourcesComplete;
-(void)presentUIForRecommendationStatus;
-(void)presentUIForRecommmendationTargetInfo:(id)arg1;
-(void)presentUIForRecommendationResult:(int)arg1 paramDict:(id)arg2;
-(void)presentUIForStepByStepStart;
-(void)presentUIForStepByStepNextStep:(int)arg1 paramDict:(id)arg2;
-(void)presentUIForStepByStepResult:(int)arg1;
-(void)presentUIForSetupStatusWithRecommendationDict:(id)arg1;
-(void)presentUIForSetupResult:(int)arg1 baseStationInfo:(id)arg2 withPrompt:(id)arg3;
-(void)showTellUserToPlugInEthernetForStatus:(int)arg1 paramDict:(id)arg2;
-(void)showTellUserToResetBroadbandDeviceForStatus:(int)arg1 paramDict:(id)arg2;
-(void)showAskUserForPPPoECredentialsForStatus:(int)arg1 paramDict:(id)arg2;
-(void)showAskUserSwapCablingForStatus:(int)arg1 paramDict:(id)arg2;
-(void)connectionVerificationSucceededForSelector:(int)arg1;
-(void)showUIConfigPromptToSendDiagsUsageStatsWithParamDict:(id)arg1;
-(void)showUIConfigPromptForGuestNetConfigWithParamDict:(id)arg1;

@end

