/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@interface CKSpotlightQueryUtilities : NSObject
+(id)annotatedResultStringWithSearchText:(id)arg1 resultText:(id)arg2 primaryTextColor:(id)arg3 primaryFont:(id)arg4 annotatedTextColor:(id)arg5 annotatedFont:(id)arg6 ;
+(id)detailsSearchControllers;
+(id)queryStringForSearchString:(id)arg1 attributes:(id)arg2 matchType:(unsigned long long)arg3 ;
+(id)matchedRankingQueriesForResult:(id)arg1 withRankingQueryCount:(unsigned long long)arg2 maxRankingQuery:(unsigned long long*)arg3 ;
+(id)stringByEscapingSearchString:(id)arg1 ;
+(id)rankingQueryForField:(id)arg1 matchType:(unsigned long long)arg2 searchString:(id)arg3 ;
+(unsigned long long)countOfNonSpaceCharsInSearchString:(id)arg1 ;
+(id)rankingQueriesForSearchString:(id)arg1 attributes:(id)arg2 ;
+(id)defaultSearchControllers;
@end

