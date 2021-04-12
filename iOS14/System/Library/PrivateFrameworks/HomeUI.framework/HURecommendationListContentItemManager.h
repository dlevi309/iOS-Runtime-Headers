/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemManager.h>

@class NSArray, HURecommendationItemModule;

@interface HURecommendationListContentItemManager : HFItemManager {

	NSArray* _serviceLikeItems;
	HURecommendationItemModule* _recommendationItemModule;

}

@property (nonatomic,readonly) NSArray * serviceLikeItems;                                         //@synthesize serviceLikeItems=_serviceLikeItems - In the implementation block
@property (nonatomic,readonly) HURecommendationItemModule * recommendationItemModule;              //@synthesize recommendationItemModule=_recommendationItemModule - In the implementation block
-(NSArray *)serviceLikeItems;
-(id)_buildItemModulesForHome:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 ;
-(id)initWithServiceLikeItems:(id)arg1 ;
-(HURecommendationItemModule *)recommendationItemModule;
@end

