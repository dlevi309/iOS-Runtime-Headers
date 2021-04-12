/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(BOOL)isValid;
-(id<SOSPersistentTimerLocationManagerDelegate>)delegate;
-(void)setDelegate:(id<SOSPersistentTimerLocationManagerDelegate>)arg1 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)setRequestingLocation:(BOOL)arg1 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)requestLocation;
-(void)invalidateTimer;
-(void)_startTimer;
-(void)setLastLocation:(CLLocation *)arg1 ;
-(CLLocation *)lastLocation;
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

