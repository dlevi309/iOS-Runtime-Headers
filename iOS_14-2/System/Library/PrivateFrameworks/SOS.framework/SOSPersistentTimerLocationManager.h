/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SOS.framework/SOS
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol OS_dispatch_queue, SOSPersistentTimerLocationManagerDelegate;
@class CLLocationManager, NSObject, PCPersistentTimer, CLAssertion, CLLocation, NSString;

@interface SOSPersistentTimerLocationManager : NSObject <CLLocationManagerDelegate> {

	CLLocationManager* _locationManager;
	NSObject*<OS_dispatch_queue> _locationUpdateStartQueue;
	PCPersistentTimer* _locationUpdateTimer;
	PCPersistentTimer* _requestLocationsTimer;
	double _ti;
	PCPersistentTimer* _initalRequestTimer;
	BOOL _requestingLocation;
	id<SOSPersistentTimerLocationManagerDelegate> _delegate;
	CLAssertion* _forceEnableLocationAssertion;
	CLLocation* _lastLocation;

}

@property (assign,getter=isRequestingLocation,nonatomic) BOOL requestingLocation;              //@synthesize requestingLocation=_requestingLocation - In the implementation block
@property (nonatomic,retain) CLAssertion * forceEnableLocationAssertion;                       //@synthesize forceEnableLocationAssertion=_forceEnableLocationAssertion - In the implementation block
@property (nonatomic,retain) CLLocation * lastLocation;                                        //@synthesize lastLocation=_lastLocation - In the implementation block
@property (__weak) id<SOSPersistentTimerLocationManagerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(CLLocation *)lastLocation;
-(void)requestLocation;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(id)init;
-(id<SOSPersistentTimerLocationManagerDelegate>)delegate;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)setDelegate:(id<SOSPersistentTimerLocationManagerDelegate>)arg1 ;
-(void)setRequestingLocation:(BOOL)arg1 ;
-(BOOL)isValid;
-(void)_startTimer;
-(void)setLastLocation:(CLLocation *)arg1 ;
-(void)invalidateTimer;
-(void)dealloc;
-(void)stopRequestingLocationUpdates;
-(BOOL)isRequestingLocation;
-(void)warmUpLocationRequest;
-(void)fireAndStartTimertWithTimeInterval:(double)arg1 ;
-(void)invalidateInitialTimer;
-(void)invalidateRequestLocationsTimer;
-(BOOL)shouldStopRequestingLocationAfterCallback;
-(void)_requestLocationsTimeout:(id)arg1 ;
-(void)_sosPersistentTimerLocationManagerTic:(id)arg1 ;
-(void)_sosPersistentTimerInitialRequest:(id)arg1 ;
-(void)setForceEnableLocationAssertion:(CLAssertion *)arg1 ;
-(CLAssertion *)forceEnableLocationAssertion;
@end

