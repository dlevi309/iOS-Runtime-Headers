/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)initWithDiscoveryController:(id)arg1 ;
-(void)notePreWarmHasStarted:(id)arg1 withTriggerType:(int)arg2 withSequence:(unsigned long long)arg3 ;
-(void)notePreWarmHasEnded:(id)arg1 withResult:(long long)arg2 withTriggerType:(int)arg3 withSequence:(unsigned long long)arg4 ;
-(void)requestRefreshForWidget:(id)arg1 afterDate:(id)arg2 ;
-(void)unregisterWidgetForPredictionEvents:(id)arg1 ;
-(void)registerWidgetForPredictionEvents:(id)arg1 ;
-(BOOL)bootstrapFavoriteWidgets;
-(void)setBootstrapFavoriteWidgets:(BOOL)arg1 ;
-(void)_favoriteWidgetIdentifiersDidUpdate:(id)arg1 ;
-(void)_setupLaunchStats;
-(void)_teardownLaunchStats;
-(void)_updateFavoriteWidgetIdentifiers;
-(void)launchStats:(id)arg1 incomingRecommendationForBundleIDs:(id)arg2 completion:(/*^block*/id)arg3 ;
-(WGWidgetDiscoveryController *)discoveryController;
-(NCLaunchStats *)launchStats;
@end

