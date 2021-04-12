/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <GeoServices/GEOTraceRouteSimulator.h>
#import <libobjc.A.dylib/MNLocationProvider.h>
#import <libobjc.A.dylib/MNTimeProvider.h>

@protocol MNLocationProviderDelegate;
@class NSMutableArray, MNTraceEventRecorder, NSArray, NSString, NSBundle;

@interface MNTraceRouteSimulator : GEOTraceRouteSimulator <MNLocationProvider, MNTimeProvider> {

	double _time;
	NSMutableArray* _priorityQueue;
	MNTraceEventRecorder* _recorder;
	id<MNLocationProviderDelegate> _delegate;
	/*^block*/id _authorizationRequestBlock;
	NSArray* _traceEvents;
	double _simulationSpeedOverride;

}

@property (nonatomic,readonly) NSArray * traceEvents;                                                                                      //@synthesize traceEvents=_traceEvents - In the implementation block
@property (assign,nonatomic) double simulationSpeedOverride;                                                                               //@synthesize simulationSpeedOverride=_simulationSpeedOverride - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNLocationProviderDelegate> delegate;                                                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSBundle * effectiveBundle; 
@property (nonatomic,copy) NSString * effectiveBundleIdentifier; 
@property (assign,nonatomic) double desiredAccuracy; 
@property (assign,getter=isLocationServicesPreferencesDialogEnabled,nonatomic) BOOL locationServicesPreferencesDialogEnabled; 
@property (assign,nonatomic) double distanceFilter; 
@property (assign,nonatomic) BOOL matchInfoEnabled; 
@property (assign,nonatomic) int headingOrientation; 
@property (nonatomic,copy) id authorizationRequestBlock;                                                                                   //@synthesize authorizationRequestBlock=_authorizationRequestBlock - In the implementation block
@property (nonatomic,readonly) double expectedGpsUpdateInterval; 
@property (nonatomic,readonly) int authorizationStatus; 
@property (assign,nonatomic) long long activityType; 
@property (nonatomic,readonly) BOOL usesCLMapCorrection; 
@property (nonatomic,readonly) BOOL isSimulation; 
@property (nonatomic,readonly) BOOL isTracePlayer; 
@property (nonatomic,readonly) unsigned long long traceVersion; 
@property (nonatomic,readonly) double timeScale; 
@property (nonatomic,readonly) double currentTime; 
-(id<MNLocationProviderDelegate>)delegate;
-(void)setDelegate:(id<MNLocationProviderDelegate>)arg1 ;
-(long long)activityType;
-(void)startUpdatingLocation;
-(void)stopUpdatingLocation;
-(double)distanceFilter;
-(void)setDistanceFilter:(double)arg1 ;
-(double)desiredAccuracy;
-(void)setDesiredAccuracy:(double)arg1 ;
-(void)setActivityType:(long long)arg1 ;
-(BOOL)matchInfoEnabled;
-(void)setMatchInfoEnabled:(BOOL)arg1 ;
-(void)startUpdatingHeading;
-(void)requestWhenInUseAuthorization;
-(int)authorizationStatus;
-(double)expectedGpsUpdateInterval;
-(void)setHeadingOrientation:(int)arg1 ;
-(int)headingOrientation;
-(void)stopUpdatingHeading;
-(void)requestWhenInUseAuthorizationWithPrompt;
-(BOOL)isLocationServicesPreferencesDialogEnabled;
-(void)setLocationServicesPreferencesDialogEnabled:(BOOL)arg1 ;
-(void)startUpdatingVehicleSpeed;
-(void)stopUpdatingVehicleSpeed;
-(void)startUpdatingVehicleHeading;
-(void)stopUpdatingVehicleHeading;
-(void)_tearDown;
-(void)_setup;
-(double)currentTime;
-(NSBundle *)effectiveBundle;
-(BOOL)isSimulation;
-(id)currentDate;
-(void)setEffectiveBundle:(NSBundle *)arg1 ;
-(NSString *)effectiveBundleIdentifier;
-(void)setEffectiveBundleIdentifier:(NSString *)arg1 ;
-(id)authorizationRequestBlock;
-(void)setAuthorizationRequestBlock:(id)arg1 ;
-(BOOL)usesCLMapCorrection;
-(BOOL)isTracePlayer;
-(double)timeScale;
-(void)navigationSessionDidStart:(id)arg1 ;
-(void)navigationSession:(id)arg1 didUpdateMatchedLocation:(id)arg2 ;
-(void)navigationSessionWillReroute:(id)arg1 ;
-(void)navigationSession:(id)arg1 didReroute:(id)arg2 withLocation:(id)arg3 withAlternateRoutes:(id)arg4 ;
-(void)navigationSession:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3 ;
-(void)navigationSession:(id)arg1 didAnnounce:(id)arg2 stage:(unsigned long long)arg3 ;
-(void)navigationSession:(id)arg1 displayPrimaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned long long)arg7 isSynthetic:(BOOL)arg8 ;
-(void)navigationSession:(id)arg1 displaySecondaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 ;
-(void)navigationSessionHideSecondaryStep:(id)arg1 ;
-(void)navigationSession:(id)arg1 didAnnounceArrival:(id)arg2 ;
-(void)navigationSession:(id)arg1 didEnableGuidancePrompts:(BOOL)arg2 ;
-(void)insertVoiceEventAtTime:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)setSimulationSpeedOverride:(double)arg1 ;
-(void)recordLocationsAlongRouteWithRecorder:(id)arg1 ;
-(void)resetForActiveTileGroupChanged;
-(unsigned long long)traceVersion;
-(void)generateGuidanceWithRequest:(id)arg1 response:(id)arg2 routeAttributes:(id)arg3 routeIndex:(unsigned)arg4 withCompletion:(/*^block*/id)arg5 ;
-(void)_generateEvents;
-(void)generateGuidance;
-(NSArray *)traceEvents;
-(double)simulationSpeedOverride;
@end

