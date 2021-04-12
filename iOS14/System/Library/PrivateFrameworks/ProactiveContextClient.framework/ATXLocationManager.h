/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveContextClient.framework/ProactiveContextClient
*/

#import <libobjc.A.dylib/ATXLocationManagerGPSDelegate.h>
#import <libobjc.A.dylib/ATXLocationManagerProtocol.h>
#import <libobjc.A.dylib/ATXPredictedLocationsManagerProtocol.h>
#import <libobjc.A.dylib/ATXLocationOfInterestManagerProtocol.h>

@protocol ATXLocationManagerGPS, ATXLocationManagerRoutine, ATXLocationManagerStateStore, OS_dispatch_queue;
@class _PASLock, NSObject, NSDate, NSString;

@interface ATXLocationManager : NSObject <ATXLocationManagerGPSDelegate, ATXLocationManagerProtocol, ATXPredictedLocationsManagerProtocol, ATXLocationOfInterestManagerProtocol> {

	id<ATXLocationManagerGPS> _gps;
	id<ATXLocationManagerRoutine> _routine;
	id<ATXLocationManagerStateStore> _stateStore;
	_PASLock* _lock;
	NSObject*<OS_dispatch_queue> _loiUpdateQueue;
	NSDate* _now;
	double _predictedNextLOITimeout;
	double _predictedExitDateTimeout;

}

@property (nonatomic,retain) NSDate * now;                                 //@synthesize now=_now - In the implementation block
@property (assign,nonatomic) double predictedNextLOITimeout;               //@synthesize predictedNextLOITimeout=_predictedNextLOITimeout - In the implementation block
@property (assign,nonatomic) double predictedExitDateTimeout;              //@synthesize predictedExitDateTimeout=_predictedExitDateTimeout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)stringForLOIType:(long long)arg1 ;
-(void)stopMonitoringRegionWithIdentifier:(id)arg1 ;
-(NSDate *)now;
-(BOOL)preciseLocationEnabled;
-(long long)stateForRegion:(id)arg1 withTimeout:(double)arg2 ;
-(BOOL)locationEnabled;
-(void)beginMonitoringRegion:(id)arg1 ;
-(BOOL)isTourist;
-(id)initWithGPS:(id)arg1 routine:(id)arg2 stateStore:(id)arg3 now:(id)arg4 ;
-(id)init;
-(void)didChangeLocationEnabled:(BOOL)arg1 ;
-(void)_handleRoutineError:(id)arg1 forThing:(id)arg2 ;
-(void)updateCurrentLocationOfInterestWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)didChangePreciseLocationEnabled:(BOOL)arg1 ;
-(void)gotState:(id)arg1 ;
-(void)updatePredictedExitTimes;
-(BOOL)isNearKnownTypeOrFrequentLocationOfInterest;
-(void)updateCurrentLocationOfInterestIfTimeElapsed;
-(id)cachedLocationOfInterestAtCurrentLocation;
-(id)getCurrentPreciseLocation;
-(void)clearLocationOfInterest;
-(void)_fetchLocationOfInterest:(long long)arg1 inGroup:(id)arg2 ;
-(BOOL)isLocationNearKnownTypeLocationOfInterest:(id)arg1 ;
-(void)setNow:(NSDate *)arg1 ;
-(void)locationOfInterestAtCurrentLocationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_gotLocation:(id)arg1 forLocationOfInterest:(long long)arg2 ;
-(id)locationOfInterestAtCurrentLocation;
-(BOOL)isTouristWithCurrentDate:(id)arg1 ;
-(id)getCurrentLocation_RequestPreciseLocation:(BOOL)arg1 ;
-(void)fetchLOILocationOfType:(long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)setPredictedNextLOITimeout:(double)arg1 ;
-(void)updatePredictedLocationsOfInterest;
-(id)getPredictedLocationsOfInterestFromLOIName:(id)arg1 startDate:(id)arg2 ;
-(double)distanceFromHomeOfCurrentLocationInMeters;
-(BOOL)isNearFrequentLocationOfInterest;
-(void)updateCurrentLocationOfInterest;
-(double)distanceFromSchoolOfCurrentLocationInMeters;
-(BOOL)isAvailableLocationOfInterestType:(long long)arg1 ;
-(double)distanceFromWorkOfCurrentLocationInMeters;
-(void)locationManagerGPS:(id)arg1 didExitRegionWithIdentifier:(id)arg2 ;
-(void)_updateCurrentLocationOfInterestIfTimeElapsedWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)predictedLocationsOfInterest;
-(id)predictedExitTimes;
-(void)_updatePredictedExitTimesIfTimeElapsed;
-(double)_distanceOfCurrentLocationFrom:(id)arg1 ;
-(void)didGetLocationUpdate:(id)arg1 ;
-(id)initWithStateStore:(id)arg1 ;
-(id)getPredictedExitTimesFromLOIName:(id)arg1 startDate:(id)arg2 ;
-(void)fetchAllLocationsOfInterest:(/*^block*/id)arg1 ;
-(double)predictedExitDateTimeout;
-(void)setPredictedExitDateTimeout:(double)arg1 ;
-(id)_currentLocationAndNeedsUpdate_RequestPreciseLocation:(BOOL)arg1 ;
-(double)distanceFromGymOfCurrentLocationInMeters;
-(void)getCurrentLocationWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)previousLOIAndCurrentLOI;
-(BOOL)isNearKnownTypeLocationOfInterest;
-(void)invalidateLocationOfInterestCache;
-(void)_updatePredictedLocationsOfInterestIfTimeElapsed;
-(unsigned long long)getCurrentRoutineModeWithCurrentDate:(id)arg1 ;
-(void)locationManagerGPS:(id)arg1 didEnterRegionWithIdentifier:(id)arg2 ;
-(double)predictedNextLOITimeout;
-(id)getCurrentLocation;
-(id)_updateLocationsOfInterestWithCurrentLocation:(id)arg1 ;
@end

