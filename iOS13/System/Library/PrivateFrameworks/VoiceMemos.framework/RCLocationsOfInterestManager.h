/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol RCLocationsOfInterestDelegate;
@class CLLocationManager, CLLocation, NSArray, NSString;

@interface RCLocationsOfInterestManager : NSObject <CLLocationManagerDelegate> {

	int _authorizationStatus;
	CLLocationManager* _locationManager;
	CLLocation* _currentLocation;
	NSArray* _locationsOfInterest;
	BOOL _isFetchingPlacesOfInterest;
	BOOL _active;
	unsigned long long _placeInferencePolicy;
	id<RCLocationsOfInterestDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<RCLocationsOfInterestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL active;                                                  //@synthesize active=_active - In the implementation block
@property (nonatomic,readonly) BOOL authorized; 
@property (readonly) CLLocation * currentLocation;                                           //@synthesize currentLocation=_currentLocation - In the implementation block
@property (copy,readonly) NSArray * locationsOfInterest; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultManager;
-(id)init;
-(id<RCLocationsOfInterestDelegate>)delegate;
-(void)setDelegate:(id<RCLocationsOfInterestDelegate>)arg1 ;
-(void)stop;
-(void)start;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(BOOL)active;
-(CLLocation *)currentLocation;
-(NSArray *)locationsOfInterest;
-(void)_startMonitoringLocation;
-(BOOL)authorized;
-(void)_requestPlaceInferences;
-(void)_didFetchPlaceInferences:(id)arg1 location:(id)arg2 error:(id)arg3 ;
@end

