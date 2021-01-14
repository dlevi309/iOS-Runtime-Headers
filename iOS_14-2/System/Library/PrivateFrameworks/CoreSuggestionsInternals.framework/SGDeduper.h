/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


@interface SGDeduper : NSObject
+(id)dedupe:(id)arg1 bucketer:(/*^block*/id)arg2 resolver:(/*^block*/id)arg3 ;
+(/*^block*/id)resolveByPairs:(/*^block*/id)arg1 ;
+(/*^block*/id)bucketerWithEqualityTest:(/*^block*/id)arg1 ;
+(/*^block*/id)resolveByScoreBreakTiesArbitrarily:(/*^block*/id)arg1 ;
+(id)_dedupeGenericContactDetails:(id)arg1 ;
+(id)splitContactDetailsByType:(id)arg1 ;
+(BOOL)eventsHaveSimilarTitles:(id)arg1 ekEventFromStore:(id)arg2 ;
+(/*^block*/id)bucketerWithLabeledBuckets:(/*^block*/id)arg1 ;
+(/*^block*/id)resolveSGContactDetailsPreferringPhraseExtractionsAndLabels;
+(void)enumerateEKEventsForPseudoEventBySimilarStartAndEndTime:(id)arg1 store:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
+(/*^block*/id)bucketerWithMapping:(/*^block*/id)arg1 ;
+(id)dedupeContactDetails:(id)arg1 ;
+(id)_dedupePostalAddresses:(id)arg1 ;
+(unsigned char)eventsHaveIdenticalReservationIds:(id)arg1 ekEventFromStore:(id)arg2 ;
@end

