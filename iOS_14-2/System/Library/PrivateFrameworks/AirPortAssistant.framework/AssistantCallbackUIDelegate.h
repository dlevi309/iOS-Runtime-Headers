/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
*/


@protocol AssistantCallbackUIDelegate
@optional
-(int)callbackAskUserAQuestion:(int)arg1 paramDict:(id)arg2 forController:(id)arg3;
-(int)callbackAskUserToChooseFromStringList:(id)arg1 context:(int)arg2 forController:(id)arg3;
-(int)callbackAskUserForPassword:(int)arg1 param:(id)arg2 forController:(id)arg3;
-(int)callbackAskUserForSetupCode:(int)arg1 isRetry:(BOOL)arg2 forController:(id)arg3;
-(int)callbackAskUserForUncertifiedForController:(id)arg1;

@required
-(void)callbackAskCancel;

@end

