/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) BOOL coarseModeEnabled; 
@property (nonatomic,readonly) BOOL usesCLMapCorrection; 
@property (nonatomic,readonly) BOOL isSimulation; 
@property (nonatomic,readonly) BOOL isTracePlayer; 
@property (nonatomic,readonly) unsigned long long traceVersion; 
@property (nonatomic,readonly) double timeScale; 
@optional
-(id)initWithEffectiveBundle:(id)arg1;
-(id)initWithEffectiveBundleIdentifier:(id)arg1;
-(void)setCLParameters:(id)arg1;

@required
-(void)stopUpdatingLocation;
-(void)startUpdatingLocation;
-(void)setDistanceFilter:(double)arg1;
-(void)startUpdatingHeading;
-(void)stopUpdatingVehicleSpeed;
-(BOOL)isTracePlayer;
-(void)setLocationServicesPreferencesDialogEnabled:(BOOL)arg1;
-(id)authorizationRequestBlock;
-(NSString *)effectiveBundleIdentifier;
-(int)headingOrientation;
-(BOOL)isSimulation;
-(void)setDesiredAccuracy:(double)arg1;
-(BOOL)coarseModeEnabled;
-(BOOL)usesCLMapCorrection;
-(void)stopUpdatingVehicleHeading;
-(id<MNLocationProviderDelegate>)delegate;
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
-(void)setDelegate:(id)arg1;
-(void)resetForActiveTileGroupChanged;
-(unsigned long long)traceVersion;

@end

