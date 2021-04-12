/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@interface PPContactScorer : NSObject
+(id)scoredContactsWithContacts:(id)arg1 ;
+(id)mostRelevantContacts;
+(id)mostRelevantContactsWithName:(id)arg1 ;
+(void)scoreContactNameRecords:(id)arg1 ;
+(double)_scoreWithInitialScore:(double)arg1 identifier:(id)arg2 rankMap:(id)arg3 ;
+(id)_contactsWithIdentifiers:(id)arg1 ;
+(id)_scoreAndSortContacts:(id)arg1 rankMap:(id)arg2 ;
+(id)_scoredLabeledValues:(id)arg1 ;
+(id)_contactRankMapWithRankedIdentifiers:(id)arg1 ;
@end

