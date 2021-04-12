/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/


@interface VCVoiceShortcutBlacklist : NSObject
+(id)defaults;
+(BOOL)isPhraseBlacklisted:(id)arg1 ;
+(void)populateBlacklistStatusOnVoiceShortcuts:(id)arg1 ;
+(unsigned long long)blacklistStatusOfVoiceShortcut:(id)arg1 ;
+(BOOL)isAppBlacklisted:(id)arg1 ;
+(BOOL)updateBlacklistFromDirectory:(id)arg1 ;
+(BOOL)updateBlacklistWithFile:(id)arg1 ;
+(void)clearBlacklist;
+(void)updatePhraseBlacklistFromBlacklist:(id)arg1 ;
+(void)updateAppBlacklistFromBlacklist:(id)arg1 ;
@end

