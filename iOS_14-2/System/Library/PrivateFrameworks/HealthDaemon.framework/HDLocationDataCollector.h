/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDLocationManagerObserver.h>

@protocol HDSampleSaving, OS_dispatch_queue, HDLocationEventDelegate;
@class HDProfile, NSUUID, NSObject, HKWorkoutRoute, HDAssertion, CMElevation, NSString;

@interface HDLocationDataCollector : NSObject <HDLocationManagerObserver> {

	HDProfile* _profile;
	NSUUID* _workoutUUID;
	unsigned long long _activityType;
	id<HDSampleSaving> _sampleSavingDelegate;
	NSObject*<OS_dispatch_queue> _queue;
	long long _state;
	int _lastStatus;
	HKWorkoutRoute* _route;
	BOOL _didSaveLocationData;
	double _lastPausedTime;
	unsigned long long _elevationGain;
	HDAssertion* _locationUpdatingAssertion;
	unsigned long long _validLocationsCount;
	unsigned long long _skippedLocationsCount;
	id<HDLocationEventDelegate> _delegate;
	CMElevation* _elevation;

}

@property (readonly) long long state; 
@property (assign,nonatomic,__weak) id<HDLocationEventDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CMElevation * elevation;                                  //@synthesize elevation=_elevation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<HDLocationEventDelegate>)delegate;
-(int)authorizationStatus;
-(void)startUpdates;
-(void)stopUpdates;
-(void)setDelegate:(id<HDLocationEventDelegate>)arg1 ;
-(NSString *)description;
-(BOOL)isElevationAvailable;
-(void)resumeUpdates;
-(long long)state;
-(BOOL)locationServicesEnabled;
-(void)dealloc;
-(CMElevation *)elevation;
-(void)setElevation:(CMElevation *)arg1 ;
-(void)pauseUpdates;
-(id)initWithProfile:(id)arg1 sampleSavingDelegate:(id)arg2 activityType:(unsigned long long)arg3 workoutUUID:(id)arg4 ;
-(void)stopUpdatesAndDiscardData;
-(void)healthLocationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)healthLocationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)healthLocationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)_queue_deleteCurrentRoute;
-(id)workoutLocationManager;
-(void)_queue_stopGPSUpdates;
-(void)_queue_stopUpdates;
-(void)_queue_freezeCurrentWorkoutRoute;
-(void)_queue_setupLocationUpdates;
-(id)createCMElevation;
-(void)_handleElevationData:(id)arg1 error:(id)arg2 ;
-(void)_queue_createSeriesSample;
-(void)_queue_pauseLocationUpdates;
-(void)_queue_resumeWorkout;
-(void)_queue_savedLocationData;
@end

