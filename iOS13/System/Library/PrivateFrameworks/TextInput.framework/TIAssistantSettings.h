/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/


@interface TIAssistantSettings : NSObject
+(void)launchKeyboardSettings;
+(void)launchDictationSettings;
+(void)dismissDialog;
+(void)presentDialogForType:(long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(void)dismissEnableDictationPrompt;
+(void)promptToEnableDictationWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)promptToEnableDataSharingWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)dismissedDataSharingWithResponse:(long long)arg1 ;
+(void)setTestBlock:(/*^block*/id)arg1 ;
+(void)connectForOperations:(/*^block*/id)arg1 withErrorHandler:(/*^block*/id)arg2 ;
+(void)promptToRemindDataSharingWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)promptReminderDataSharingWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)dismissEnableDataSharingPrompt;
@end

