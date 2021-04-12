/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@interface PLNLP : NSObject
+(BOOL)nlpSearchSupportsLocale:(id)arg1 ;
+(id)lemmasForToken:(id)arg1 locale:(id)arg2 options:(long long)arg3 ;
+(id)tokensFromString:(id)arg1 options:(long long)arg2 ;
+(id)stringWithoutDiacriticsFromString:(id)arg1 ;
+(id)ngramsFromTokens:(id)arg1 ofSize:(unsigned long long)arg2 usingSeparator:(id)arg3 ;
+(id)dateIntervalsFromMessage:(id)arg1 onDate:(id)arg2 ;
+(id)dateFilterForCMMWithAttributes:(id)arg1 withReferenceDate:(id)arg2 ;
+(id)stopWordsForLanguageCode:(id)arg1 ;
+(id)_englishStopWords;
+(id)_frenchStopWords;
@end

