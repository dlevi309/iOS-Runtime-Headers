/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTService.h>
#import <libobjc.A.dylib/RTPurgable.h>

@protocol OS_dispatch_source;
@class RTDefaultsManager, RTDistanceCalculator, RTLearnedLocationManager, RTLocationManager, RTMapServiceManager, RTMetricManager, RTPlatform, RTNextPredictedLocationsOfInterestCache, NSObject, NSArray, NSMutableArray, NSSet, NSString;

@interface RTDeviceLocationPredictor : RTService <RTPurgable> {

	BOOL _encryptedDataAvailabilityNotificationNeeded;
	BOOL _pendingNextPredictedLocationsOfInterestRequest;
	RTDefaultsManager* _defaultsManager;
	RTDistanceCalculator* _distanceCalculator;
	RTLearnedLocationManager* _learnedLocationManager;
	RTLocationManager* _locationManager;
	RTMapServiceManager* _mapServiceManager;
	RTMetricManager* _metricManager;
	RTPlatform* _platform;
	RTNextPredictedLocationsOfInterestCache* _nextPredictedLocationsOfInterestCache;
	NSObject*<OS_dispatch_source> _nextPredictedLocationsOfInterestPollLocationTimer;
	NSArray* _nextPredictedLocationsOfInterest;
	double _nextPredictedLocationsOfInterestProcessInterval;
	double _nextPredictedLocationsOfInterestPollLocationInterval;
	NSMutableArray* _evalPredictedLocationsOfInterest;
	NSMutableArray* _evalPredictedExitDates;
	NSSet* _providers;

}

@property (nonatomic,retain) RTDefaultsManager * defaultsManager;                                                          //@synthesize defaultsManager=_defaultsManager - In the implementation block
@property (nonatomic,retain) RTDistanceCalculator * distanceCalculator;                                                    //@synthesize distanceCalculator=_distanceCalculator - In the implementation block
@property (nonatomic,retain) RTLearnedLocationManager * learnedLocationManager;                                            //@synthesize learnedLocationManager=_learnedLocationManager - In the implementation block
@property (nonatomic,retain) RTLocationManager * locationManager;                                                          //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,retain) RTMapServiceManager * mapServiceManager;                                                      //@synthesize mapServiceManager=_mapServiceManager - In the implementation block
@property (nonatomic,retain) RTMetricManager * metricManager;                                                              //@synthesize metricManager=_metricManager - In the implementation block
@property (nonatomic,retain) RTPlatform * platform;                                                                        //@synthesize platform=_platform - In the implementation block
@property (nonatomic,retain) RTNextPredictedLocationsOfInterestCache * nextPredictedLocationsOfInterestCache;              //@synthesize nextPredictedLocationsOfInterestCache=_nextPredictedLocationsOfInterestCache - In the implementation block
@property (assign,nonatomic) BOOL encryptedDataAvailabilityNotificationNeeded;                                             //@synthesize encryptedDataAvailabilityNotificationNeeded=_encryptedDataAvailabilityNotificationNeeded - In the implementation block
@property (assign,nonatomic) BOOL pendingNextPredictedLocationsOfInterestRequest;                                          //@synthesize pendingNextPredictedLocationsOfInterestRequest=_pendingNextPredictedLocationsOfInterestRequest - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> nextPredictedLocationsOfInterestPollLocationTimer;              //@synthesize nextPredictedLocationsOfInterestPollLocationTimer=_nextPredictedLocationsOfInterestPollLocationTimer - In the implementation block
@property (nonatomic,retain) NSArray * nextPredictedLocationsOfInterest;                                                   //@synthesize nextPredictedLocationsOfInterest=_nextPredictedLocationsOfInterest - In the implementation block
@property (assign,nonatomic) double nextPredictedLocationsOfInterestProcessInterval;                                       //@synthesize nextPredictedLocationsOfInterestProcessInterval=_nextPredictedLocationsOfInterestProcessInterval - In the implementation block
@property (assign,nonatomic) double nextPredictedLocationsOfInterestPollLocationInterval;                                  //@synthesize nextPredictedLocationsOfInterestPollLocationInterval=_nextPredictedLocationsOfInterestPollLocationInterval - In the implementation block
@property (nonatomic,retain) NSMutableArray * evalPredictedLocationsOfInterest;                                            //@synthesize evalPredictedLocationsOfInterest=_evalPredictedLocationsOfInterest - In the implementation block
@property (nonatomic,retain) NSMutableArray * evalPredictedExitDates;                                                      //@synthesize evalPredictedExitDates=_evalPredictedExitDates - In the implementation block
@property (nonatomic,retain) NSSet * providers;                                                                            //@synthesize providers=_providers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_clear;
-(void)setDefaultsManager:(RTDefaultsManager *)arg1 ;
-(void)setDistanceCalculator:(RTDistanceCalculator *)arg1 ;
-(void)clear;
-(void)performPurgeOfType:(long long)arg1 referenceDate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(RTPlatform *)platform;
-(void)_shutdown;
-(NSSet *)providers;
-(void)setMapServiceManager:(RTMapServiceManager *)arg1 ;
-(void)setMetricManager:(RTMetricManager *)arg1 ;
-(void)_registerForNotifications;
-(void)setLearnedLocationManager:(RTLearnedLocationManager *)arg1 ;
-(RTMapServiceManager *)mapServiceManager;
-(void)_setup;
-(RTMetricManager *)metricManager;
-(void)setLocationManager:(RTLocationManager *)arg1 ;
-(RTLocationManager *)locationManager;
-(void)onLearnedLocationManagerNotification:(id)arg1 ;
-(id)_dedupePredictedLocationsOfInterest:(id)arg1 ;
-(RTLearnedLocationManager *)learnedLocationManager;
-(id)init;
-(void)setPlatform:(RTPlatform *)arg1 ;
-(void)_unregisterForNotifications;
-(NSMutableArray *)evalPredictedExitDates;
-(id)_sortAndDedupePredictedLocationsOfInterest:(id)arg1 ;
-(void)setNextPredictedLocationsOfInterestPollLocationTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setNextPredictedLocationsOfInterestPollLocationInterval:(double)arg1 ;
-(NSArray *)nextPredictedLocationsOfInterest;
-(void)setProviders:(NSSet *)arg1 ;
-(void)_fetchPredictedExitDatesFromLocation:(id)arg1 onDate:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)_purgeWithReferenceDate:(id)arg1 ;
-(void)_fetchNextPredictedLocationsOfInterestFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 handler:(/*^block*/id)arg4 ;
-(id)_mergedLocationOfInterest:(id)arg1 otherLocationOfInterest:(id)arg2 ;
-(void)fetchNextPredictedLocationsOfInterestFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 handler:(/*^block*/id)arg4 ;
-(double)nextPredictedLocationsOfInterestPollLocationInterval;
-(RTDefaultsManager *)defaultsManager;
-(void)setEvalPredictedExitDates:(NSMutableArray *)arg1 ;
-(void)purgeWithReferenceDate:(id)arg1 ;
-(void)setNextPredictedLocationsOfInterestProcessInterval:(double)arg1 ;
-(RTDistanceCalculator *)distanceCalculator;
-(RTNextPredictedLocationsOfInterestCache *)nextPredictedLocationsOfInterestCache;
-(NSObject*<OS_dispatch_source>)nextPredictedLocationsOfInterestPollLocationTimer;
-(void)_setupEvalMode;
-(BOOL)pendingNextPredictedLocationsOfInterestRequest;
-(id)_mergePredictedLocationsOfInterest:(id)arg1 ;
-(id)initWithQueue:(id)arg1 defaultsManager:(id)arg2 distanceCalculator:(id)arg3 learnedLocationManager:(id)arg4 locationManager:(id)arg5 mapServiceManager:(id)arg6 metricManager:(id)arg7 platfrom:(id)arg8 providers:(id)arg9 ;
-(void)fetchPredictedLocationsOfInterestOnDate:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_updateEvalMode;
-(NSMutableArray *)evalPredictedLocationsOfInterest;
-(void)setPendingNextPredictedLocationsOfInterestRequest:(BOOL)arg1 ;
-(void)fetchPredictedLocationsOfInterestBetweenStartDate:(id)arg1 endDate:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)setNextPredictedLocationsOfInterest:(NSArray *)arg1 ;
-(void)fetchPredictedExitDatesFromLocation:(id)arg1 onDate:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)setEvalPredictedLocationsOfInterest:(NSMutableArray *)arg1 ;
-(void)setEncryptedDataAvailabilityNotificationNeeded:(BOOL)arg1 ;
-(void)_onLearnedLocationManagerNotification:(id)arg1 ;
-(void)_fetchPredictedLocationsOfInterestBetweenStartDate:(id)arg1 endDate:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(BOOL)encryptedDataAvailabilityNotificationNeeded;
-(double)nextPredictedLocationsOfInterestProcessInterval;
-(id)_sortPredictedLocationsOfInterest:(id)arg1 ;
-(void)setNextPredictedLocationsOfInterestCache:(RTNextPredictedLocationsOfInterestCache *)arg1 ;
@end

