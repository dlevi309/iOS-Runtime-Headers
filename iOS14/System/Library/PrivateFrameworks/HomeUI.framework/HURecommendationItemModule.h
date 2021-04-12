/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemModule.h>

@class NSSet, HMHome, NSArray, NSMutableDictionary, HURecommendationItemProvider, NSMutableSet;

@interface HURecommendationItemModule : HFItemModule {

	NSSet* _itemProviders;
	HMHome* _home;
	NSArray* _serviceLikeItems;
	unsigned long long _engineOptions;
	NSMutableDictionary* _buildersForItems;
	HURecommendationItemProvider* _recommendationItemProvider;
	NSMutableSet* _updatesDisabledReasons;

}

@property (nonatomic,retain) NSMutableDictionary * buildersForItems;                                 //@synthesize buildersForItems=_buildersForItems - In the implementation block
@property (nonatomic,retain) HURecommendationItemProvider * recommendationItemProvider;              //@synthesize recommendationItemProvider=_recommendationItemProvider - In the implementation block
@property (nonatomic,retain) NSMutableSet * updatesDisabledReasons;                                  //@synthesize updatesDisabledReasons=_updatesDisabledReasons - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                                        //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) NSArray * serviceLikeItems;                                           //@synthesize serviceLikeItems=_serviceLikeItems - In the implementation block
@property (assign,nonatomic) unsigned long long engineOptions;                                       //@synthesize engineOptions=_engineOptions - In the implementation block
-(void)disableUpdatesWithReason:(id)arg1 ;
-(id)builderForItem:(id)arg1 context:(id)arg2 ;
-(void)endDisableUpdatesWithReason:(id)arg1 ;
-(NSArray *)serviceLikeItems;
-(id)itemProviders;
-(id)buildSectionsWithDisplayedItems:(id)arg1 ;
-(HMHome *)home;
-(id)_createItemProviders;
-(unsigned long long)engineOptions;
-(void)setEngineOptions:(unsigned long long)arg1 ;
-(id)initWithServiceLikeItems:(id)arg1 itemUpdater:(id)arg2 home:(id)arg3 ;
-(void)setRecommendationItemProvider:(HURecommendationItemProvider *)arg1 ;
-(HURecommendationItemProvider *)recommendationItemProvider;
-(BOOL)fmfNotAvailable;
-(id)_headerTitleForSectionWithItems:(id)arg1 ;
-(NSMutableSet *)updatesDisabledReasons;
-(NSMutableDictionary *)buildersForItems;
-(void)setBuildersForItems:(NSMutableDictionary *)arg1 ;
-(void)setUpdatesDisabledReasons:(NSMutableSet *)arg1 ;
@end

