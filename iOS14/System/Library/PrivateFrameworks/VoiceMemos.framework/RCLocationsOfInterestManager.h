/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol OS_dispatch_queue;
@class CLLocationManager, CLLocation, NSArray, NSObject, NSString;

@interface RCLocationsOfInterestManager : NSObject <CLLocationManagerDelegate> {

	int _authorizationStatus;
	CLLocationManager* _locationManager;
	CLLocation* _currentLocation;
	NSArray* _locationsOfInterest;
	BOOL _isFetchingPlacesOfInterest;
	BOOL _active;
	unsigned long long _placeInferencePolicy;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (readonly) CLLocation * currentLocation; 
@property (copy,readonly) NSArray * locationsOfInterest; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultManager;
-(CLLocation *)currentLocation;
-(NSArray *)locationsOfInterest;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(id)init;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)start;
-(void)locationManagerDidChangeAuthorization:(id)arg1 ;
-(void)stop;
-(void)_startMonitoringLocation;
-(void)_requestPlaceInferences;
-(void)_stopMonitoringLocation;
-(void)_didFetchPlaceInferences:(id)arg1 location:(id)arg2 error:(id)arg3 ;
@end

