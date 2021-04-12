/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
*/


@interface _KSTextReplacementHelper : NSObject
+(long long)validateTextReplacement:(id)arg1 ;
+(id)aggdPrefix;
+(id)transactionFromTextReplacementEntry:(id)arg1 forDelete:(BOOL)arg2 ;
+(id)fetchConfigurationPlist;
+(id)textReplaceEntryFromTIDictionaryValue:(id)arg1 ;
+(id)errorWithCode:(long long)arg1 failedAdds:(id)arg2 failedDeletes:(id)arg3 ;
+(id)multipleAddErrors:(id)arg1 removeErrors:(id)arg2 ;
+(id)errorStringForCode:(long long)arg1 ;
+(void)logPhraseWordCount:(long long)arg1 ;
+(void)fetchConfigurationPlistIfNeeded;
+(id)appleLanguagesPreference;
+(void)logAggdValueForSyncIsPull:(BOOL)arg1 success:(BOOL)arg2 ;
+(id)errorWithCode:(long long)arg1 description:(id)arg2 ;
+(void)extractAggdMetricsForTextReplacement:(id)arg1 ;
+(id)sampleShortcut;
+(id)errorWithCode:(long long)arg1 forEntry:(id)arg2 ;
@end

