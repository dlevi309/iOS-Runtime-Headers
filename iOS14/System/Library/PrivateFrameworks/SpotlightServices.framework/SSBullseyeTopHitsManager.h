/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
*/


@class NSDictionary, SFMutableResultSection, SPSearchQueryContext, PRSRankingItemRanker;

@interface SSBullseyeTopHitsManager : NSObject {

	NSDictionary* _categoryToResultMapping;
	long long _queryID;
	SFMutableResultSection* _topHitSection;
	BOOL _haveBullseyeTopHitSection;
	SPSearchQueryContext* _queryContext;
	long long _initiallyVisibleSectionSentCount;
	long long _initiallyHiddenSectionSentCount;
	PRSRankingItemRanker* _ranker;

}
-(id)bullseyeSectionForTopHit:(id)arg1 initiallyHidden:(BOOL)arg2 checkForTopHit:(BOOL)arg3 thresholdCounter:(int)arg4 ;
-(id)bullseyeTopHitSections:(id)arg1 maxTopHitsCount:(int)arg2 minThresholdForBigResult:(double)arg3 needExceptionForSafariSection:(BOOL)arg4 ;
-(id)initWithQueryId:(long long)arg1 categoryToResultMapping:(id)arg2 currentTopHitSection:(id)arg3 queryContext:(id)arg4 ranker:(id)arg5 ;
-(id)bullseyeTopHitSection;
-(void)resetVisibilityCounts;
-(id)tagOrFilterHiddenSectionsForClient:(id)arg1 isCommittedSearch:(BOOL)arg2 maxVisibleSections:(long long)arg3 maxTopHitsCount:(int)arg4 minThresholdForBigResult:(double)arg5 topHitSection:(id*)arg6 ;
@end

