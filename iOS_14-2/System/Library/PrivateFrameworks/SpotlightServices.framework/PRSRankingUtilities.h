/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
*/


@interface PRSRankingUtilities : NSObject
+(void)computeDateCountsForDates:(id)arg1 countLastYear:(unsigned long long*)arg2 countLastMonth:(unsigned long long*)arg3 countLastWeek:(unsigned long long*)arg4 countLastDay:(unsigned long long*)arg5 currentTime:(double)arg6 ;
+(float)floatValue:(float)arg1 withSigFigs:(long long)arg2 ;
+(BOOL)userQueryHasOnlySingleCharacterTerms:(id)arg1 ;
+(BOOL)caseAndDiacriticInsensitiveLocalizedString:(id)arg1 isEqualToString:(id)arg2 ;
+(BOOL)aToZInString:(id)arg1 ;
+(BOOL)multiWordString:(id)arg1 hasPrefix:(id)arg2 ;
+(BOOL)caseAndDiacriticInsensitiveLocalizedString:(id)arg1 hasPrefix:(id)arg2 locale:(id)arg3 ;
+(BOOL)caseAndDiacriticInsensitiveLocalizedString:(id)arg1 containsString:(id)arg2 locale:(id)arg3 ;
+(id)categoryForBundleID:(id)arg1 ;
+(id)bundleIDForCategory:(id)arg1 ;
@end

