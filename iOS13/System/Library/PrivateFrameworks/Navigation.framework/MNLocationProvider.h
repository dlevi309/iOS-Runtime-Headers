/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

@class NSBundle, NSString;


@protocol MNLocationProvider <NSObject>
@property (assign,nonatomic,__weak) id<MNLocationProviderDelegate> delegate; 
@property (nonatomic,retain) NSBundle * effectiveBundle; 
@property (nonatomic,copy) NSString * effectiveBundleIdentifier; 
@property (assign,nonatomic) double desiredAccuracy; 
@property (assign,getter=isLocationServicesPreferencesDialogEnabled,nonatomic) BOOL locationServicesPreferencesDialogEnabled; 
@property (assign,nonatomic) double distanceFilter; 
@property (assign,nonatomic) BOOL matchInfoEnabled; 
@property (assign,nonatomic) int headingOrientation; 
@property (nonatomic,copy) id authorizationRequestBlock; 
@property (nonatomic,readonly) double expectedGpsUpdateInterval; 
@property (nonatomic,readonly) int authorizationStatus; 
@property (assign,nonatomic) long long activityType; 
@property (nonatomic,readonly) BOOL usesCLMapCorrection; 
@property (nonatomic,readonly) BOOL isSimulation; 
@property (nonatomic,readonly) BOOL isTracePlayer; 
@property (nonatomic,readonly) unsigned long long traceVersion; 
@property (nonatomic,readonly) double timeScale; 
@optional
-(id)initWithEffectiveBundleIdentifier:(id)arg1;
-(id)initWithEffectiveBundle:(id)arg1;

@required
-(id<MNLocationProviderDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(long long)activityType;
-(void)startUpdatingLocation;
-(void)stopUpdatingLocation;
-(double)distanceFilter;
-(void)setDistanceFilter:(double)arg1;
-(double)desiredAccuracy;
-(void)setDesiredAccuracy:(double)arg1;
-(void)setActivityType:(long long)arg1;
-(BOOL)matchInfoEnabled;
-(void)setMatchInfoEnabled:(BOOL)arg1;
-(void)startUpdatingHeading;
-(void)requestWhenInUseAuthorization;
-(int)authorizationStatus;
-(double)expectedGpsUpdateInterval;
-(void)setHeadingOrientation:(int)arg1;
-(int)headingOrientation;
-(void)stopUpdatingHeading;
-(void)requestWhenInUseAuthorizationWithPrompt;
-(BOOL)isLocationServicesPreferencesDialogEnabled;
-(void)setLocationServicesPreferencesDialogEnabled:(BOOL)arg1;
-(void)startUpdatingVehicleSpeed;
-(void)stopUpdatingVehicleSpeed;
-(void)startUpdatingVehicleHeading;
-(void)stopUpdatingVehicleHeading;
-(NSBundle *)effectiveBundle;
-(BOOL)isSimulation;
-(void)setEffectiveBundle:(id)arg1;
-(NSString *)effectiveBundleIdentifier;
-(void)setEffectiveBundleIdentifier:(id)arg1;
-(id)authorizationRequestBlock;
-(void)setAuthorizationRequestBlock:(/*^block*/id)arg1;
-(BOOL)usesCLMapCorrection;
-(BOOL)isTracePlayer;
-(double)timeScale;
-(void)resetForActiveTileGroupChanged;
-(unsigned long long)traceVersion;

@end

