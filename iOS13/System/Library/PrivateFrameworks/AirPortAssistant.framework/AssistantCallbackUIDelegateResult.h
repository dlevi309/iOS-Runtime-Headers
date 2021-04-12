/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
*/


@protocol AssistantCallbackUIDelegateResult
@optional
-(void)callbackAskUserForUncertifiedResult:(int)arg1;
-(void)callbackAskUserForSetupCodeResult:(int)arg1 password:(id)arg2;

@required
-(void)callbackAskUserForPasswordResult:(int)arg1 password:(id)arg2 remember:(int)arg3;
-(void)callbackAskUserToChooseFromStringListResult:(int)arg1 selectedString:(id)arg2;
-(void)callbackAskUserAQuestionResult:(int)arg1 result:(int)arg2;

@end

