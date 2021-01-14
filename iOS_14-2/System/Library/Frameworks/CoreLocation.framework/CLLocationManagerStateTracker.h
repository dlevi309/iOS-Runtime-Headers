/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <CoreLocation/CLStateTracker.h>

@interface CLLocationManagerStateTracker : CLStateTracker {

	CLLocationManagerStateTrackerState _state;
	void* _identifier;
	BOOL _inTransaction;

}

@property (assign,nonatomic) double distanceFilter; 
@property (assign,nonatomic) double desiredAccuracy; 
@property (assign,nonatomic) BOOL updatingLocation; 
@property (assign,nonatomic) BOOL requestingLocation; 
@property (assign,nonatomic) BOOL requestingRanging; 
@property (assign,nonatomic) BOOL updatingRanging; 
@property (assign,nonatomic) BOOL updatingHeading; 
@property (assign,nonatomic) double headingFilter; 
@property (assign,nonatomic) BOOL allowsLocationPrompts; 
@property (assign,nonatomic) BOOL allowsAlteredAccessoryLocations; 
@property (assign,nonatomic) BOOL dynamicAccuracyReductionEnabled; 
@property (assign,nonatomic) BOOL previousAuthorizationStatusValid; 
@property (assign,nonatomic) int previousAuthorizationStatus; 
@property (assign,nonatomic) BOOL limitsPrecision; 
@property (assign,nonatomic) long long activityType; 
@property (assign) int pausesLocationUpdatesAutomatically; 
@property (assign,nonatomic) BOOL paused; 
@property (assign,nonatomic) BOOL allowsBackgroundLocationUpdates; 
@property (assign,nonatomic) BOOL showsBackgroundLocationIndicator; 
@property (assign,nonatomic) BOOL allowsMapCorrection; 
@property (assign,nonatomic) BOOL batchingLocation; 
@property (assign,nonatomic) BOOL updatingVehicleSpeed; 
@property (assign,nonatomic) BOOL updatingVehicleHeading; 
@property (assign,nonatomic) BOOL matchInfoEnabled; 
@property (assign,nonatomic) BOOL groundAltitudeEnabled; 
@property (assign,nonatomic) BOOL fusionInfoEnabled; 
@property (assign,nonatomic) BOOL courtesyPromptNeeded; 
@property (assign,nonatomic) BOOL isAuthorizedForWidgetUpdates; 
+(const char*)trackerStateTypeName;
+(unsigned long long)trackerStateSize;
-(BOOL)requestingRanging;
-(BOOL)fusionInfoEnabled;
-(void)setDistanceFilter:(double)arg1 ;
-(void)setFusionInfoEnabled:(BOOL)arg1 ;
-(id)initWithQueue:(id)arg1 identifier:(void*)arg2 ;
-(BOOL)updatingRanging;
-(void)setActivityType:(long long)arg1 ;
-(void)setAllowsLocationPrompts:(BOOL)arg1 ;
-(void)updateState:(/*^block*/id)arg1 ;
-(void)setIsAuthorizedForWidgetUpdates:(BOOL)arg1 ;
-(long long)activityType;
-(void)setPreviousAuthorizationStatus:(int)arg1 ;
-(id)initInSilo:(id)arg1 withIdentifier:(void*)arg2 state:(/*^block*/id)arg3 ;
-(void)setDesiredAccuracy:(double)arg1 ;
-(BOOL)isAuthorizedForWidgetUpdates;
-(BOOL)matchInfoEnabled;
-(BOOL)updatingLocation;
-(double)desiredAccuracy;
-(void)setUpdatingRanging:(BOOL)arg1 ;
-(BOOL)updatingHeading;
-(BOOL)updatingVehicleSpeed;
-(double)distanceFilter;
-(int)previousAuthorizationStatus;
-(void)setMatchInfoEnabled:(BOOL)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(id)initInSilo:(id)arg1 withIdentifier:(void*)arg2 ;
-(void)setLimitsPrecision:(BOOL)arg1 ;
-(BOOL)dynamicAccuracyReductionEnabled;
-(void)setBatchingLocation:(BOOL)arg1 ;
-(double)headingFilter;
-(void)setAllowsMapCorrection:(BOOL)arg1 ;
-(void)setUpdatingLocation:(BOOL)arg1 ;
-(void)setRequestingRanging:(BOOL)arg1 ;
-(void)setAllowsAlteredAccessoryLocations:(BOOL)arg1 ;
-(BOOL)batchingLocation;
-(BOOL)dumpState:(void*)arg1 withSize:(unsigned long long)arg2 hints:(os_state_hints_s*)arg3 ;
-(BOOL)allowsMapCorrection;
-(void)setRequestingLocation:(BOOL)arg1 ;
-(void)setShowsBackgroundLocationIndicator:(BOOL)arg1 ;
-(void)setGroundAltitudeEnabled:(BOOL)arg1 ;
-(BOOL)courtesyPromptNeeded;
-(BOOL)groundAltitudeEnabled;
-(BOOL)allowsBackgroundLocationUpdates;
-(void)setHeadingFilter:(double)arg1 ;
-(void)setPreviousAuthorizationStatusValid:(BOOL)arg1 ;
-(int)pausesLocationUpdatesAutomatically;
-(void)setUpdatingVehicleHeading:(BOOL)arg1 ;
-(void)setDynamicAccuracyReductionEnabled:(BOOL)arg1 ;
-(void)setCourtesyPromptNeeded:(BOOL)arg1 ;
-(id)initWithQueue:(id)arg1 identifier:(void*)arg2 state:(/*^block*/id)arg3 ;
-(BOOL)previousAuthorizationStatusValid;
-(BOOL)limitsPrecision;
-(BOOL)paused;
-(void)setAllowsBackgroundLocationUpdates:(BOOL)arg1 ;
-(void*)identifier;
-(BOOL)allowsLocationPrompts;
-(BOOL)requestingLocation;
-(void)setUpdatingHeading:(BOOL)arg1 ;
-(BOOL)allowsAlteredAccessoryLocations;
-(BOOL)updatingVehicleHeading;
-(void)setPausesLocationUpdatesAutomatically:(int)arg1 ;
-(BOOL)showsBackgroundLocationIndicator;
-(void)setUpdatingVehicleSpeed:(BOOL)arg1 ;
-(void)dealloc;
@end

