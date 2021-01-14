/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@interface PPContactScorer : NSObject
+(id)_contactsWithIdentifiers:(id)arg1 store:(id)arg2 ;
+(id)_scoreAndSortContacts:(id)arg1 rankMap:(id)arg2 ;
+(id)_contactRankMapWithRankedIdentifiers:(id)arg1 ;
+(id)_scoredLabeledValues:(id)arg1 ;
+(id)mostRelevantContactsWithStore:(id)arg1 shouldContinueBlock:(/*^block*/id)arg2 ;
+(id)mostRelevantContactsWithName:(id)arg1 store:(id)arg2 ;
+(double)_scoreWithInitialScore:(double)arg1 identifier:(id)arg2 rankMap:(id)arg3 ;
+(void)scoreContactNameRecords:(id)arg1 ;
+(id)scoredContactsWithContacts:(id)arg1 ;
+(id)mostRelevantContactsWithStore:(id)arg1 ;
@end

