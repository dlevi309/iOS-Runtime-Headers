/*
* Generated on Thursday, January 14, 2021 at 2:24:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>
#import <IMCore/IMLocationManager.h>
@class CLLocation, NSError;


@protocol IMLocationManager <NSObject>
@property (nonatomic,readonly) BOOL locationAuthorizationDetermined; 
@property (nonatomic,readonly) BOOL locationAuthorizationDenied; 
@property (nonatomic,readonly) BOOL preciseLocationAuthorized; 
@property (nonatomic,readonly) CLLocation * location; 
@property (nonatomic,readonly) NSError * error; 
@required
-(CLLocation *)location;
-(NSError *)error;
-(void)startUpdatingCurrentLocationWithForegroundAssertionForBundleIdentifier:(id)arg1 withAuthorizedHandler:(/*^block*/id)arg2 updateHandler:(/*^block*/id)arg3;
-(BOOL)locationAuthorizationDetermined;
-(BOOL)locationAuthorizationDenied;
-(void)startUpdatingCurrentLocationWithAuthorizedHandler:(/*^block*/id)arg1 updateHandler:(/*^block*/id)arg2;
-(BOOL)preciseLocationAuthorized;

@end


@class CLLocation, NSError, CLLocationManager, NSMutableArray, NSTimer, NSDate, CLInUseAssertion, NSString;

@interface IMLocationManager : NSObject <CLLocationManagerDelegate, IMLocationManager> {

	CLLocationManager* _locationManager;
	NSMutableArray* _handlers;
	NSTimer* _timeoutHandler;
	CLLocation* _location;
	NSError* _error;
	NSDate* _locateStartTime;
	NSTimer* _locationUpdateTimer;
	BOOL _inRequestPreciseLocation;
	BOOL _firstAuthorizationCallbackArrived;
	CLInUseAssertion* _inUseAssertion;

}

@property (nonatomic,retain) CLLocation * location;                               //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSError * error;                                     //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSTimer * locationUpdateTimer;                       //@synthesize locationUpdateTimer=_locationUpdateTimer - In the implementation block
@property (nonatomic,retain) CLLocationManager * locationManager;                 //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,retain) NSMutableArray * handlers;                           //@synthesize handlers=_handlers - In the implementation block
@property (nonatomic,retain) NSDate * locateStartTime;                            //@synthesize locateStartTime=_locateStartTime - In the implementation block
@property (assign,nonatomic) BOOL inRequestPreciseLocation;                       //@synthesize inRequestPreciseLocation=_inRequestPreciseLocation - In the implementation block
@property (assign,nonatomic) BOOL firstAuthorizationCallbackArrived;              //@synthesize firstAuthorizationCallbackArrived=_firstAuthorizationCallbackArrived - In the implementation block
@property (nonatomic,retain) CLInUseAssertion * inUseAssertion;                   //@synthesize inUseAssertion=_inUseAssertion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL locationAuthorizationDetermined; 
@property (nonatomic,readonly) BOOL locationAuthorizationDenied; 
@property (nonatomic,readonly) BOOL preciseLocationAuthorized; 
+(id)sharedInstance;
+(id)locationShifter;
+(Class)__CLLocationManagerClass;
+(Class)__CLInUseAssertionClass;
-(NSMutableArray *)handlers;
-(void)setHandlers:(NSMutableArray *)arg1 ;
-(void)setLocationManager:(CLLocationManager *)arg1 ;
-(CLLocationManager *)locationManager;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(id)init;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(CLLocation *)location;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)setLocation:(CLLocation *)arg1 ;
-(void)dealloc;
-(void)startUpdatingCurrentLocationWithForegroundAssertionForBundleIdentifier:(id)arg1 withAuthorizedHandler:(/*^block*/id)arg2 updateHandler:(/*^block*/id)arg3 ;
-(BOOL)locationAuthorizationDetermined;
-(BOOL)locationAuthorizationDenied;
-(void)setInUseAssertion:(CLInUseAssertion *)arg1 ;
-(NSTimer *)locationUpdateTimer;
-(void)setLocationUpdateTimer:(NSTimer *)arg1 ;
-(BOOL)firstAuthorizationCallbackArrived;
-(BOOL)inRequestPreciseLocation;
-(void)setInRequestPreciseLocation:(BOOL)arg1 ;
-(void)_startLocationUpdateTimerWithAuthorizedHandler:(/*^block*/id)arg1 updateHandler:(/*^block*/id)arg2 ;
-(void)setLocateStartTime:(NSDate *)arg1 ;
-(void)_locationUpdateTimerFired:(id)arg1 ;
-(void)_errorHappend:(id)arg1 ;
-(void)_fireCompletionHandlers;
-(void)setFirstAuthorizationCallbackArrived:(BOOL)arg1 ;
-(void)startUpdatingCurrentLocationWithAuthorizedHandler:(/*^block*/id)arg1 updateHandler:(/*^block*/id)arg2 ;
-(void)_locationManagerTimedOut;
-(NSDate *)locateStartTime;
-(BOOL)_shouldSendLocation:(id)arg1 timeIntervalSinceStart:(double)arg2 ;
-(CLInUseAssertion *)inUseAssertion;
-(void)shiftedLocationWithLocation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)preciseLocationAuthorized;
@end

