/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
*/


@protocol INVCVoiceShortcutClient <NSObject>
@required
-(void)getVoiceShortcutsWithCompletion:(/*^block*/id)arg1;
-(void)getVoiceShortcutWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)setShortcutSuggestions:(id)arg1 forAppWithBundleIdentifier:(id)arg2;
-(void)setInteger:(long long)arg1 forKey:(id)arg2 inDomain:(id)arg3 completionHandler:(/*^block*/id)arg4;

@end

