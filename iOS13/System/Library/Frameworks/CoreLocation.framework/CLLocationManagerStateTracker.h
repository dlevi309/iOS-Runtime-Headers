/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (assign,nonatomic) BOOL courtesyPromptNeeded; 
+(unsigned long long)trackerStateSize;
+(const char*)trackerStateTypeName;
-(void)dealloc;
-(void*)identifier;
-(long long)activityType;
-(id)initInSilo:(id)arg1 withIdentifier:(void*)arg2 state:(/*^block*/id)arg3 ;
-(id)initWithQueue:(id)arg1 identifier:(void*)arg2 state:(/*^block*/id)arg3 ;
-(id)initInSilo:(id)arg1 withIdentifier:(void*)arg2 ;
-(id)initWithQueue:(id)arg1 identifier:(void*)arg2 ;
-(double)distanceFilter;
-(void)setDistanceFilter:(double)arg1 ;
-(double)desiredAccuracy;
-(void)setDesiredAccuracy:(double)arg1 ;
-(BOOL)updatingLocation;
-(void)setUpdatingLocation:(BOOL)arg1 ;
-(BOOL)requestingLocation;
-(void)setRequestingLocation:(BOOL)arg1 ;
-(BOOL)requestingRanging;
-(void)setRequestingRanging:(BOOL)arg1 ;
-(BOOL)updatingRanging;
-(void)setUpdatingRanging:(BOOL)arg1 ;
-(BOOL)updatingHeading;
-(void)setUpdatingHeading:(BOOL)arg1 ;
-(double)headingFilter;
-(void)setHeadingFilter:(double)arg1 ;
-(BOOL)allowsLocationPrompts;
-(void)setAllowsLocationPrompts:(BOOL)arg1 ;
-(BOOL)allowsAlteredAccessoryLocations;
-(void)setAllowsAlteredAccessoryLocations:(BOOL)arg1 ;
-(BOOL)dynamicAccuracyReductionEnabled;
-(void)setDynamicAccuracyReductionEnabled:(BOOL)arg1 ;
-(BOOL)previousAuthorizationStatusValid;
-(void)setPreviousAuthorizationStatusValid:(BOOL)arg1 ;
-(int)previousAuthorizationStatus;
-(void)setPreviousAuthorizationStatus:(int)arg1 ;
-(void)setActivityType:(long long)arg1 ;
-(int)pausesLocationUpdatesAutomatically;
-(void)setPausesLocationUpdatesAutomatically:(int)arg1 ;
-(BOOL)paused;
-(void)setPaused:(BOOL)arg1 ;
-(BOOL)allowsBackgroundLocationUpdates;
-(void)setAllowsBackgroundLocationUpdates:(BOOL)arg1 ;
-(BOOL)showsBackgroundLocationIndicator;
-(void)setShowsBackgroundLocationIndicator:(BOOL)arg1 ;
-(BOOL)allowsMapCorrection;
-(void)setAllowsMapCorrection:(BOOL)arg1 ;
-(BOOL)batchingLocation;
-(void)setBatchingLocation:(BOOL)arg1 ;
-(BOOL)updatingVehicleSpeed;
-(void)setUpdatingVehicleSpeed:(BOOL)arg1 ;
-(BOOL)updatingVehicleHeading;
-(void)setUpdatingVehicleHeading:(BOOL)arg1 ;
-(BOOL)matchInfoEnabled;
-(void)setMatchInfoEnabled:(BOOL)arg1 ;
-(BOOL)groundAltitudeEnabled;
-(void)setGroundAltitudeEnabled:(BOOL)arg1 ;
-(BOOL)courtesyPromptNeeded;
-(void)setCourtesyPromptNeeded:(BOOL)arg1 ;
-(void)updateState:(/*^block*/id)arg1 ;
-(BOOL)dumpState:(void*)arg1 withSize:(unsigned long long)arg2 hints:(os_state_hints_s*)arg3 ;
@end

