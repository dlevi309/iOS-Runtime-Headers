/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <libobjc.A.dylib/ATXLocationManagerGPSDelegate.h>
#import <libobjc.A.dylib/ATXLocationManagerProtocol.h>
#import <libobjc.A.dylib/ATXPredictedLocationsManagerProtocol.h>
#import <libobjc.A.dylib/ATXLocationOfInterestManagerProtocol.h>

@protocol ATXLocationManagerGPS, ATXLocationManagerRoutine, ATXLocationManagerStateStore;
@class _PASLock, NSDate, NSString;

@interface ATXLocationManager : NSObject <ATXLocationManagerGPSDelegate, ATXLocationManagerProtocol, ATXPredictedLocationsManagerProtocol, ATXLocationOfInterestManagerProtocol> {

	id<ATXLocationManagerGPS> _gps;
	id<ATXLocationManagerRoutine> _routine;
	id<ATXLocationManagerStateStore> _stateStore;
	_PASLock* _lock;
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
-(id)init;
-(NSDate *)now;
-(BOOL)isTourist;
-(id)getCurrentLocation;
-(void)setNow:(NSDate *)arg1 ;
-(id)predictedExitTimes;
-(BOOL)locationEnabled;
-(BOOL)isAvailableLocationOfInterestType:(long long)arg1 ;
-(void)fetchLOILocationOfType:(long long)arg1 reply:(/*^block*/id)arg2 ;
-(id)predictedLocationsOfInterest;
-(id)getPredictedLocationsOfInterestFromLOIName:(id)arg1 startDate:(id)arg2 ;
-(id)getPredictedExitTimesFromLOIName:(id)arg1 startDate:(id)arg2 ;
-(id)locationOfInterestAtCurrentLocation;
-(double)distanceFromHomeOfCurrentLocationInMeters;
-(double)distanceFromWorkOfCurrentLocationInMeters;
-(double)distanceFromSchoolOfCurrentLocationInMeters;
-(double)distanceFromGymOfCurrentLocationInMeters;
-(void)fetchAllLocationsOfInterest:(/*^block*/id)arg1 ;
-(void)clearLocationOfInterest;
-(BOOL)isNearKnownTypeLocationOfInterest;
-(void)didChangeLocationEnabled:(BOOL)arg1 ;
-(id)initWithGPS:(id)arg1 routine:(id)arg2 stateStore:(id)arg3 now:(id)arg4 ;
-(void)updateCurrentLocationOfInterest;
-(void)_fetchLocationOfInterest:(long long)arg1 inGroup:(id)arg2 ;
-(void)gotLocation:(id)arg1 forLocationOfInterest:(long long)arg2 ;
-(void)gotState:(id)arg1 ;
-(void)_handleRoutineError:(id)arg1 forThing:(id)arg2 ;
-(void)_updateLocationOfInterestIfTimeElapsed;
-(id)previousLOIAndCurrentLOI;
-(void)_updatePredictedLocationsOfInterestIfTimeElapsed;
-(void)_updatePredictedExitTimesIfTimeElapsed;
-(void)updatePredictedLocationsOfInterest;
-(void)updatePredictedExitTimes;
-(double)_distanceOfCurrentLocationFrom:(id)arg1 ;
-(unsigned long long)getCurrentRoutineMode;
-(void)didGetLocationUpdate:(id)arg1 ;
-(double)predictedNextLOITimeout;
-(void)setPredictedNextLOITimeout:(double)arg1 ;
-(double)predictedExitDateTimeout;
-(void)setPredictedExitDateTimeout:(double)arg1 ;
@end

