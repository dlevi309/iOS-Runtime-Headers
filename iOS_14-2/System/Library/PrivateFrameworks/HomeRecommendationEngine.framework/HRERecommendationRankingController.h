/*
* Generated on Thursday, January 14, 2021 at 2:27:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeRecommendationEngine.framework/HomeRecommendationEngine
*/


@interface HRERecommendationRankingController : NSObject
+(double)maxRank;
+(double)minRank;
-(id)rankRecommendations:(id)arg1 userProfiler:(id)arg2 ;
-(double)calculateAdjustedCosineSimilarityScore:(id)arg1 userProfiler:(id)arg2 ;
-(id)rankRecommendationsFromSet:(id)arg1 userProfiler:(id)arg2 ;
@end

