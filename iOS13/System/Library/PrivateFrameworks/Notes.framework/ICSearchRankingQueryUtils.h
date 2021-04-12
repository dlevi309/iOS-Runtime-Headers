/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
*/


@interface ICSearchRankingQueryUtils : NSObject
+(id)spotlightPrefixRankingQueryDefinition;
+(id)spotlightSubstringRankingQueryDefinition;
+(id)spotlightMixedRankingQueryDefinition;
+(id)rankingQueryForDescriptor:(id)arg1 searchString:(id)arg2 ;
+(id)spotlightPrefixRankingQueryBitDictionary;
+(id)spotlightSubstringRankingQueryBitDictionary;
+(id)spotlightMixedRankingQueryBitDictionary;
+(long long)bitOfRankingQueryDescriptor:(id)arg1 inRankingQueryBitDictionary:(id)arg2 ;
+(id)rankingQueriesForSearchString:(id)arg1 withRankingQueryDefinition:(id)arg2 ;
@end

