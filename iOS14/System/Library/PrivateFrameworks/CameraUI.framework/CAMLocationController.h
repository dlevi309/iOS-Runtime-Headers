/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol OS_dispatch_queue;
@class CLLocation, CLHeading, NSObject, CLLocationManager, NSMutableArray, NSString;

@interface CAMLocationController : NSObject <CLLocationManagerDelegate> {

	BOOL _enabled;
	BOOL _headingEnabled;
	BOOL __monitoringLocation;
	BOOL __didRequestLocation;
	CLLocation* _currentLocation;
	CLHeading* _currentHeading;
	NSObject*<OS_dispatch_queue> __authorizationQueue;
	CLLocationManager* __locationManager;
	NSMutableArray* __enqueuedAssetsWaitingForLocation;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _authorizationQueue;                   //@synthesize _authorizationQueue=__authorizationQueue - In the implementation block
@property (getter=_isMonitoringLocation,nonatomic,readonly) BOOL _monitoringLocation;              //@synthesize _monitoringLocation=__monitoringLocation - In the implementation block
@property (nonatomic,readonly) CLLocationManager * _locationManager;                               //@synthesize _locationManager=__locationManager - In the implementation block
@property (nonatomic,readonly) NSMutableArray * _enqueuedAssetsWaitingForLocation;                 //@synthesize _enqueuedAssetsWaitingForLocation=__enqueuedAssetsWaitingForLocation - In the implementation block
@property (assign,setter=_setDidRequestLocation:,nonatomic) BOOL _didRequestLocation;              //@synthesize _didRequestLocation=__didRequestLocation - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                        //@synthesize enabled=_enabled - In the implementation block
@property (assign,getter=isHeadingEnabled,nonatomic) BOOL headingEnabled;                          //@synthesize headingEnabled=_headingEnabled - In the implementation block
@property (nonatomic,readonly) CLLocation * currentLocation;                                       //@synthesize currentLocation=_currentLocation - In the implementation block
@property (nonatomic,readonly) CLHeading * currentHeading;                                         //@synthesize currentHeading=_currentHeading - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_sharedGPSDatestampFormatter;
+(id)locationMetadataForLocation:(id)arg1 heading:(id)arg2 device:(long long)arg3 ;
+(id)_sharedGPSTimestampFormatter;
-(CLLocation *)currentLocation;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(BOOL)isHeadingEnabled;
-(id)init;
-(void)_setDidRequestLocation:(BOOL)arg1 ;
-(void)_updateAssetsWaitingOnLocation;
-(void)locationManager:(id)arg1 didUpdateHeading:(id)arg2 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)_updateLocationMonitoring;
-(void)enqueueAssetForLocationUpdates:(id)arg1 ;
-(void)_resetDidRequestLocation;
-(void)_stopMonitoringLocationUpdates;
-(BOOL)_isMonitoringLocation;
-(void)setHeadingEnabled:(BOOL)arg1 ;
-(CLHeading *)currentHeading;
-(void)_startMonitoringLocationUpdates;
-(CLLocationManager *)_locationManager;
-(void)_authorizeOrStartLocationManager;
-(BOOL)_didRequestLocation;
-(NSObject*<OS_dispatch_queue>)_authorizationQueue;
-(BOOL)isEnabled;
-(NSMutableArray *)_enqueuedAssetsWaitingForLocation;
-(id)headingForOrientation:(long long)arg1 ;
-(void)dealloc;
@end

