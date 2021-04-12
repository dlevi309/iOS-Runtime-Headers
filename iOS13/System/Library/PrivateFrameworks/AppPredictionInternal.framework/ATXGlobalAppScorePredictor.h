/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@protocol ATXLocationManagerProtocol;
@class _PASCFBurstTrie;

@interface ATXGlobalAppScorePredictor : NSObject {

	_PASCFBurstTrie* _index;
	_PASCFBurstTrie* _signalsTrie;
	id<ATXLocationManagerProtocol> _locationManager;

}

@property (nonatomic,retain) id<ATXLocationManagerProtocol> locationManager;              //@synthesize locationManager=_locationManager - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id<ATXLocationManagerProtocol>)locationManager;
-(void)setLocationManager:(id<ATXLocationManagerProtocol>)arg1 ;
-(id)globalPopularitiesAtTimeOfDay:(int)arg1 atDayOfWeek:(int)arg2 atLocation:(int)arg3 withLastAppLaunched:(id)arg4 ;
-(id)globalPopularityForBundleIds:(id)arg1 atDate:(id)arg2 withLastAppLaunched:(id)arg3 ;
-(id)globalPopularityForBundleIds:(id)arg1 atDate:(id)arg2 atLocation:(long long)arg3 withLastAppLaunched:(id)arg4 ;
-(id)globalPopularitiesForBundleIds:(id)arg1 atTimeOfDayIndex:(int)arg2 atDayOfWeekIndex:(int)arg3 atLocationIndex:(int)arg4 withLastAppLaunched:(id)arg5 ;
-(id)globalPopularityForBundleIds:(id)arg1 atDate:(id)arg2 ;
-(id)globalPopularitiesForBundleIds:(id)arg1 atTimeOfDayIndex:(int)arg2 atDayOfWeekIndex:(int)arg3 atLocationIndex:(int)arg4 ;
@end

