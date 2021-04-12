/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
*/


@class WGWidgetDiscoveryController, NCLaunchStats;

@interface WGWidgetStatsController : NSObject {

	BOOL _bootstrapFavoriteWidgets;
	WGWidgetDiscoveryController* _discoveryController;
	NCLaunchStats* _launchStats;

}

@property (nonatomic,readonly) NCLaunchStats * launchStats;                                           //@synthesize launchStats=_launchStats - In the implementation block
@property (nonatomic,__weak,readonly) WGWidgetDiscoveryController * discoveryController;              //@synthesize discoveryController=_discoveryController - In the implementation block
@property (assign,nonatomic) BOOL bootstrapFavoriteWidgets;                                           //@synthesize bootstrapFavoriteWidgets=_bootstrapFavoriteWidgets - In the implementation block
-(void)notePreWarmHasStarted:(id)arg1 withTriggerType:(int)arg2 withSequence:(unsigned long long)arg3 ;
-(void)launchStats:(id)arg1 incomingRecommendationForBundleIDs:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setBootstrapFavoriteWidgets:(BOOL)arg1 ;
-(void)_setupLaunchStats;
-(void)notePreWarmHasEnded:(id)arg1 withResult:(long long)arg2 withTriggerType:(int)arg3 withSequence:(unsigned long long)arg4 ;
-(void)_favoriteWidgetIdentifiersDidUpdate:(id)arg1 ;
-(void)registerWidgetForPredictionEvents:(id)arg1 ;
-(void)_updateFavoriteWidgetIdentifiers;
-(void)_teardownLaunchStats;
-(NCLaunchStats *)launchStats;
-(void)requestRefreshForWidget:(id)arg1 afterDate:(id)arg2 ;
-(BOOL)bootstrapFavoriteWidgets;
-(void)unregisterWidgetForPredictionEvents:(id)arg1 ;
-(WGWidgetDiscoveryController *)discoveryController;
-(id)initWithDiscoveryController:(id)arg1 ;
-(void)dealloc;
@end

