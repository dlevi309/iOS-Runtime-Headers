/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>
#import <IMCore/IMLocationManager.h>
@class CLLocation, NSError;


@protocol IMLocationManager <NSObject>
@property (nonatomic,readonly) BOOL locationAuthorizationDetermined; 
@property (nonatomic,readonly) BOOL locationAuthorizationDenied; 
@property (nonatomic,readonly) CLLocation * location; 
@property (nonatomic,readonly) NSError * error; 
@required
-(NSError *)error;
-(CLLocation *)location;
-(void)startUpdatingCurrentLocationWithForegroundAssertionForBundleIdentifier:(id)arg1 updateHandler:(/*^block*/id)arg2;
-(BOOL)locationAuthorizationDetermined;
-(BOOL)locationAuthorizationDenied;
-(void)startUpdatingCurrentLocationWithHandler:(/*^block*/id)arg1;

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
	CLInUseAssertion* _inUseAssertion;

}

@property (nonatomic,retain) CLLocation * location;                               //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSError * error;                                     //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSTimer * locationUpdateTimer;                       //@synthesize locationUpdateTimer=_locationUpdateTimer - In the implementation block
@property (nonatomic,retain) CLLocationManager * locationManager;                 //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,retain) NSMutableArray * handlers;                           //@synthesize handlers=_handlers - In the implementation block
@property (nonatomic,retain) NSDate * locateStartTime;                            //@synthesize locateStartTime=_locateStartTime - In the implementation block
@property (nonatomic,retain) CLInUseAssertion * inUseAssertion;                   //@synthesize inUseAssertion=_inUseAssertion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL locationAuthorizationDetermined; 
@property (nonatomic,readonly) BOOL locationAuthorizationDenied; 
+(id)sharedInstance;
+(id)locationShifter;
+(Class)__CLLocationManagerClass;
+(Class)__CLInUseAssertionClass;
-(id)init;
-(void)dealloc;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(CLLocation *)location;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)setLocation:(CLLocation *)arg1 ;
-(NSMutableArray *)handlers;
-(void)setHandlers:(NSMutableArray *)arg1 ;
-(CLLocationManager *)locationManager;
-(void)setLocationManager:(CLLocationManager *)arg1 ;
-(void)startUpdatingCurrentLocationWithForegroundAssertionForBundleIdentifier:(id)arg1 updateHandler:(/*^block*/id)arg2 ;
-(BOOL)locationAuthorizationDetermined;
-(BOOL)locationAuthorizationDenied;
-(void)setInUseAssertion:(CLInUseAssertion *)arg1 ;
-(NSTimer *)locationUpdateTimer;
-(void)setLocationUpdateTimer:(NSTimer *)arg1 ;
-(void)setLocateStartTime:(NSDate *)arg1 ;
-(void)_locationUpdateTimerFired:(id)arg1 ;
-(void)_fireCompletionHandlers;
-(void)startUpdatingCurrentLocationWithHandler:(/*^block*/id)arg1 ;
-(void)_locationManagerTimedOut;
-(NSDate *)locateStartTime;
-(BOOL)_shouldSendLocation:(id)arg1 timeIntervalSinceStart:(double)arg2 ;
-(CLInUseAssertion *)inUseAssertion;
-(void)shiftedLocationWithLocation:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

