/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@interface PLNLP : NSObject
+(BOOL)nlpSearchSupportsLocale:(id)arg1 ;
+(id)tokensFromString:(id)arg1 options:(long long)arg2 ;
+(id)dateIntervalsFromMessage:(id)arg1 onDate:(id)arg2 ;
+(id)lemmasForToken:(id)arg1 locale:(id)arg2 options:(long long)arg3 ;
+(id)stringWithoutDiacriticsFromString:(id)arg1 ;
+(id)_englishStopWords;
+(id)ngramsFromTokens:(id)arg1 ofSize:(unsigned long long)arg2 usingSeparator:(id)arg3 ;
+(id)dateFilterForCMMWithAttributes:(id)arg1 withReferenceDate:(id)arg2 ;
+(id)stopWordsForLanguageCode:(id)arg1 ;
+(id)_frenchStopWords;
@end

