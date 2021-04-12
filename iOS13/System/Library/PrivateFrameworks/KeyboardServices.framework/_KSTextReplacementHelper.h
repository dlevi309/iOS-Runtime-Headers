/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
*/


@interface _KSTextReplacementHelper : NSObject
+(id)errorWithCode:(long long)arg1 description:(id)arg2 ;
+(void)fetchConfigurationPlistIfNeeded;
+(id)aggdPrefix;
+(id)sampleShortcut;
+(id)errorWithCode:(long long)arg1 failedAdds:(id)arg2 failedDeletes:(id)arg3 ;
+(void)logAggdValueForSyncIsPull:(BOOL)arg1 success:(BOOL)arg2 ;
+(long long)validateTextReplacement:(id)arg1 ;
+(id)errorWithCode:(long long)arg1 forEntry:(id)arg2 ;
+(id)textReplaceEntryFromTIDictionaryValue:(id)arg1 ;
+(id)transactionFromTextReplacementEntry:(id)arg1 forDelete:(BOOL)arg2 ;
+(id)multipleAddErrors:(id)arg1 removeErrors:(id)arg2 ;
+(void)extractAggdMetricsForTextReplacement:(id)arg1 ;
+(id)errorStringForCode:(long long)arg1 ;
+(void)logPhraseWordCount:(long long)arg1 ;
+(id)appleLanguagesPreference;
+(id)fetchConfigurationPlist;
@end

