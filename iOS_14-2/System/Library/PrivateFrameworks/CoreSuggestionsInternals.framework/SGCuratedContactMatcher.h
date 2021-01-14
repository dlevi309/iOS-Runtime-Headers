/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
@interface SGCuratedContactMatcher : NSObject
+(id)fetchMeContactFromContactStore:(id)arg1 ;
+(void)clearMeContactCache;
+(BOOL)_isMeContact:(id)arg1 withContactStore:(id)arg2 ;
+(id)_getPeopleWithNameToken:(id)arg1 fromContactStore:(id)arg2 withKeysToFetch:(id)arg3 ifMatchingPredicate:(/*^block*/id)arg4 ;
+(id)_findFuzzyNameCandidatesMatchingPseudoContact:(id)arg1 withName:(id)arg2 andFeatures:(SCD_Struct_SG31*)arg3 fromContactStore:(id)arg4 withKeysToFetch:(id)arg5 ;
+(id)_filterCandidates:(id)arg1 withUniqueDetailMatchesToContact:(id)arg2 andFeatures:(SCD_Struct_SG31*)arg3 ;
+(id)filterCandidates:(id)arg1 withDetailSubsetOfCNContact:(id)arg2 ;
+(id)_filterCandidates:(id)arg1 similarToName:(id)arg2 exceedingThreshold:(double)arg3 ;
+(id)_findContactsMatchingPseudoContact:(id)arg1 withName:(id)arg2 andFeatures:(SCD_Struct_SG31*)arg3 fromContactStore:(id)arg4 withKeysToFetch:(id)arg5 ;
+(id)_realtimeContactFromPseudoContact:(id)arg1 andFeatures:(SCD_Struct_SG31*)arg2 assimilatingMatchingCuratedContacts:(id)arg3 ;
+(id)_realtimeContactWithContactStore:(id)arg1 forPseudoContact:(id)arg2 normalizedName:(id)arg3 error:(id*)arg4 ;
+(id)realtimeContactWithContactStore:(id)arg1 forPseudoContact:(id)arg2 error:(id*)arg3 ;
+(id)curatedContactsFromContactStore:(id)arg1 matchingPseudoContact:(id)arg2 error:(id*)arg3 ;
@end

