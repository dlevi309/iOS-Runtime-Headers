/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@protocol OS_dispatch_queue;
@class NSObject, RTDefaultsManager, RTInferredMapItemFuser, RTMetricManager, RTLearnedLocationStore, NSDictionary;

@interface RTPlaceInferenceManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	RTDefaultsManager* _defaultsManager;
	RTInferredMapItemFuser* _inferredMapItemFuser;
	RTMetricManager* _metricManager;
	RTLearnedLocationStore* _learnedLocationStore;
	NSDictionary* _mapItemProviders;
	unsigned long long _placeInferencesLimit;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                         //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) RTDefaultsManager * defaultsManager;                        //@synthesize defaultsManager=_defaultsManager - In the implementation block
@property (nonatomic,readonly) RTInferredMapItemFuser * inferredMapItemFuser;              //@synthesize inferredMapItemFuser=_inferredMapItemFuser - In the implementation block
@property (nonatomic,readonly) RTMetricManager * metricManager;                            //@synthesize metricManager=_metricManager - In the implementation block
@property (nonatomic,readonly) RTLearnedLocationStore * learnedLocationStore;              //@synthesize learnedLocationStore=_learnedLocationStore - In the implementation block
@property (nonatomic,readonly) NSDictionary * mapItemProviders;                            //@synthesize mapItemProviders=_mapItemProviders - In the implementation block
@property (assign,nonatomic) unsigned long long placeInferencesLimit;                      //@synthesize placeInferencesLimit=_placeInferencesLimit - In the implementation block
+(void)sanityCheckMapItemProviders:(id)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithQueue:(id)arg1 defaultsManager:(id)arg2 distanceCalculator:(id)arg3 eventManager:(id)arg4 fingerprintManager:(id)arg5 inferredMapItemFuser:(id)arg6 learnedLocationStore:(id)arg7 locationManager:(id)arg8 mapServiceManager:(id)arg9 mapsSupportManager:(id)arg10 metricManager:(id)arg11 motionActivityManager:(id)arg12 platform:(id)arg13 portraitManager:(id)arg14 ;
-(id)createAllMapItemProvidersWithDefaultManager:(id)arg1 distanceCalculator:(id)arg2 eventManager:(id)arg3 fingerprintManager:(id)arg4 learnedLocationStore:(id)arg5 locationManager:(id)arg6 mapServiceManager:(id)arg7 mapsSupportManager:(id)arg8 motionActivityManager:(id)arg9 platform:(id)arg10 portraitManager:(id)arg11 ;
-(id)_placeInferencesForOptions:(id)arg1 error:(id*)arg2 ;
-(id)_selectReferenceLocation:(id)arg1 ;
-(unsigned long long)placeInferencesLimit;
-(id)_selectMapItemProvidersForOptions:(id)arg1 ;
-(unsigned long long)_learnedPlaceTypeForInferredMapItem:(id)arg1 error:(id*)arg2 ;
-(RTInferredMapItemFuser *)inferredMapItemFuser;
-(id)_getFallbackMapItemProviderForOptions:(id)arg1 ;
-(id)_placeInferenceFromInferredMapItem:(id)arg1 referenceLocation:(id)arg2 error:(id*)arg3 ;
-(void)sendPlaceInferenceMetrics:(id)arg1 inferredMapItems:(id)arg2 fusedMapItems:(id)arg3 fallbackInferredMapItems:(id)arg4 finalPlaceInferences:(id)arg5 ;
-(id)_selectMapItemProvidersForOptions:(id)arg1 targetProvider:(unsigned long long)arg2 ;
-(RTDefaultsManager *)defaultsManager;
-(void)_addMapItemProviderFromArray:(id)arg1 toSet:(id)arg2 ;
-(NSDictionary *)mapItemProviders;
-(unsigned long long)_inferUserSpecificPlaceTypeForInferredMapItem:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)_learnedPlaceTypeFromUserSpecificPlaceType:(unsigned long long)arg1 ;
-(RTLearnedLocationStore *)learnedLocationStore;
-(unsigned long long)_userSpecificPlaceTypeFromLearnedPlaceType:(unsigned long long)arg1 ;
-(void)fetchPlaceInferencesForOptions:(id)arg1 handler:(/*^block*/id)arg2 ;
-(RTMetricManager *)metricManager;
-(void)setPlaceInferencesLimit:(unsigned long long)arg1 ;
@end

