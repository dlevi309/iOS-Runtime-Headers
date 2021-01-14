/*
* Generated on Thursday, January 14, 2021 at 2:27:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeRecommendationEngine.framework/HomeRecommendationEngine
*/


@class NSMutableArray, HRERecommendationRankingController, HMHomeManager, HREUserProfiler;

@interface HRERecommendationEngine : NSObject {

	NSMutableArray* _recommendationSources;
	HRERecommendationRankingController* _rankingController;
	HMHomeManager* _homeManager;
	HREUserProfiler* _userProfiler;

}

@property (nonatomic,retain) NSMutableArray * recommendationSources;                              //@synthesize recommendationSources=_recommendationSources - In the implementation block
@property (nonatomic,retain) HRERecommendationRankingController * rankingController;              //@synthesize rankingController=_rankingController - In the implementation block
@property (nonatomic,retain) HMHomeManager * homeManager;                                         //@synthesize homeManager=_homeManager - In the implementation block
@property (nonatomic,retain) HREUserProfiler * userProfiler;                                      //@synthesize userProfiler=_userProfiler - In the implementation block
-(id)initWithHomeManager:(id)arg1 ;
-(HMHomeManager *)homeManager;
-(void)setHomeManager:(HMHomeManager *)arg1 ;
-(id)generateRecommendationsForServiceLikeItems:(id)arg1 inHome:(id)arg2 options:(unsigned long long)arg3 ;
-(void)setRecommendationSources:(NSMutableArray *)arg1 ;
-(NSMutableArray *)recommendationSources;
-(void)setUserProfiler:(HREUserProfiler *)arg1 ;
-(void)setRankingController:(HRERecommendationRankingController *)arg1 ;
-(id)_sourcesEnabledWithOptions:(unsigned long long)arg1 ;
-(HRERecommendationRankingController *)rankingController;
-(HREUserProfiler *)userProfiler;
-(id)generateRecommendationsForHome:(id)arg1 options:(unsigned long long)arg2 ;
-(id)getUserProfiler;
@end

