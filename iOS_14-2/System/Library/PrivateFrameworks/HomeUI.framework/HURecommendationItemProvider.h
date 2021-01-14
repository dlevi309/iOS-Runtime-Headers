/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <Home/HFItemProvider.h>

@class HMHome, NSArray, HRERecommendationEngine, NSMutableSet;

@interface HURecommendationItemProvider : HFItemProvider {

	BOOL _firstUpdateComplete;
	BOOL _updatesDisabled;
	HMHome* _home;
	NSArray* _serviceLikeItems;
	unsigned long long _engineOptions;
	/*^block*/id _filter;
	HRERecommendationEngine* _recommendationEngine;
	NSMutableSet* _recommendationItems;

}

@property (nonatomic,retain) HRERecommendationEngine * recommendationEngine;              //@synthesize recommendationEngine=_recommendationEngine - In the implementation block
@property (nonatomic,retain) NSMutableSet * recommendationItems;                          //@synthesize recommendationItems=_recommendationItems - In the implementation block
@property (assign,nonatomic) BOOL firstUpdateComplete;                                    //@synthesize firstUpdateComplete=_firstUpdateComplete - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                             //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) NSArray * serviceLikeItems;                                //@synthesize serviceLikeItems=_serviceLikeItems - In the implementation block
@property (assign,nonatomic) unsigned long long engineOptions;                            //@synthesize engineOptions=_engineOptions - In the implementation block
@property (nonatomic,copy) id filter;                                                     //@synthesize filter=_filter - In the implementation block
@property (assign,nonatomic) BOOL updatesDisabled;                                        //@synthesize updatesDisabled=_updatesDisabled - In the implementation block
+(id)filterRecommendations:(id)arg1 ;
+(id)_highestRankRecommendations:(id)arg1 forKeyGenerator:(/*^block*/id)arg2 ;
-(void)setFilter:(id)arg1 ;
-(id)filter;
-(id)init;
-(NSArray *)serviceLikeItems;
-(id)items;
-(BOOL)updatesDisabled;
-(id)reloadItems;
-(id)invalidationReasons;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HMHome *)home;
-(unsigned long long)engineOptions;
-(void)setEngineOptions:(unsigned long long)arg1 ;
-(id)initWithHome:(id)arg1 andServiceLikeItems:(id)arg2 ;
-(BOOL)firstUpdateComplete;
-(void)setUpdatesDisabled:(BOOL)arg1 ;
-(HRERecommendationEngine *)recommendationEngine;
-(NSMutableSet *)recommendationItems;
-(id)reloadItemsWithRecommendations:(id)arg1 filter:(/*^block*/id)arg2 itemMap:(/*^block*/id)arg3 ;
-(void)setFirstUpdateComplete:(BOOL)arg1 ;
-(void)setRecommendationEngine:(HRERecommendationEngine *)arg1 ;
-(void)setRecommendationItems:(NSMutableSet *)arg1 ;
@end

