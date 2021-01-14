/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

@class NSBundle, NSString, CLLocation;


@protocol MKLocationProvider <NSObject>
@property (assign,nonatomic,__weak) id<MKLocationProviderDelegate> delegate; 
@property (nonatomic,retain) NSBundle * effectiveBundle; 
@property (nonatomic,copy) NSString * effectiveBundleIdentifier; 
@property (assign,nonatomic) double desiredAccuracy; 
@property (assign,getter=isLocationServicesPreferencesDialogEnabled,nonatomic) BOOL locationServicesPreferencesDialogEnabled; 
@property (assign,nonatomic) double distanceFilter; 
@property (assign,nonatomic) BOOL matchInfoEnabled; 
@property (assign,nonatomic) BOOL fusionInfoEnabled; 
@property (assign,nonatomic) int headingOrientation; 
@property (nonatomic,copy) id authorizationRequestBlock; 
@property (nonatomic,readonly) double expectedGpsUpdateInterval; 
@property (nonatomic,readonly) int authorizationStatus; 
@property (nonatomic,readonly) BOOL isAuthorizedForPreciseLocation; 
@property (assign,nonatomic) long long activityType; 
@property (nonatomic,readonly) BOOL usesCLMapCorrection; 
@property (nonatomic,readonly) BOOL shouldShiftIfNecessary; 
@property (nonatomic,readonly) BOOL isTracePlayer; 
@property (nonatomic,readonly) double timeScale; 
@property (nonatomic,readonly) CLLocation * lastLocation; 
@optional
-(CLLocation *)lastLocation;

@required
-(void)stopUpdatingLocation;
-(void)startUpdatingLocation;
-(void)dismissHeadingCalibrationDisplay;
-(BOOL)fusionInfoEnabled;
-(void)setDistanceFilter:(double)arg1;
-(void)startUpdatingHeading;
-(void)requestTemporaryPreciseLocationAuthorizationWithPurposeKey:(id)arg1 completion:(/*^block*/id)arg2;
-(void)setFusionInfoEnabled:(BOOL)arg1;
-(void)stopUpdatingVehicleSpeed;
-(BOOL)isTracePlayer;
-(void)setActivityType:(long long)arg1;
-(void)setLocationServicesPreferencesDialogEnabled:(BOOL)arg1;
-(id)authorizationRequestBlock;
-(NSString *)effectiveBundleIdentifier;
-(long long)activityType;
-(int)headingOrientation;
-(void)setDesiredAccuracy:(double)arg1;
-(BOOL)isAuthorizedForPreciseLocation;
-(BOOL)usesCLMapCorrection;
-(void)stopUpdatingVehicleHeading;
-(id<MKLocationProviderDelegate>)delegate;
-(void)setEffectiveBundleIdentifier:(id)arg1;
-(void)startUpdatingVehicleSpeed;
-(BOOL)matchInfoEnabled;
-(double)desiredAccuracy;
-(void)startUpdatingVehicleHeading;
-(void)setEffectiveBundle:(id)arg1;
-(BOOL)isLocationServicesPreferencesDialogEnabled;
-(void)setAuthorizationRequestBlock:(/*^block*/id)arg1;
-(void)stopUpdatingHeading;
-(void)requestWhenInUseAuthorization;
-(double)expectedGpsUpdateInterval;
-(double)distanceFilter;
-(int)authorizationStatus;
-(void)setHeadingOrientation:(int)arg1;
-(void)requestWhenInUseAuthorizationWithPrompt;
-(void)setMatchInfoEnabled:(BOOL)arg1;
-(double)timeScale;
-(NSBundle *)effectiveBundle;
-(void)isAuthorizedForPreciseLocationOnQueue:(id)arg1 result:(/*^block*/id)arg2;
-(void)setDelegate:(id)arg1;
-(BOOL)shouldShiftIfNecessary;
-(void)authorizationStatusOnQueue:(id)arg1 result:(/*^block*/id)arg2;

@end

