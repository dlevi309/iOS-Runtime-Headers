/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <Navigation/Navigation-Structs.h>
#import <libobjc.A.dylib/MNLocationProvider.h>
#import <libobjc.A.dylib/MNTimeProvider.h>

@protocol MNLocationProviderDelegate;
@class NSMutableArray, MNTraceEventRecorder, NSDate, GEOComposedRoute, GEODirectionsRequest, GEODirectionsResponse, GEORouteAttributes, NSArray, NSDictionary, NSBundle, NSString;

@interface MNTraceRouteSimulator : NSObject <MNLocationProvider, MNTimeProvider> {

	double _time;
	NSMutableArray* _priorityQueue;
	MNTraceEventRecorder* _recorder;
	double _deltaT;
	double _horizontalAccuracy;
	double _verticalAccuracy;
	NSDate* _startTime;
	GEOComposedRoute* _route;
	GEODirectionsRequest* _request;
	GEODirectionsResponse* _response;
	GEORouteAttributes* _routeAttributes;
	SCD_Struct_MN6 _walkingStart;
	SCD_Struct_MN6 _walkingEnd;
	SCD_Struct_MN6 _origin;
	SCD_Struct_MN6 _destination;
	NSMutableArray* _mutableLocations;
	NSArray* _locations;
	NSDictionary* _pointTimestamps;
	double _duration;
	id<MNLocationProviderDelegate> _delegate;
	/*^block*/id _authorizationRequestBlock;
	NSArray* _traceEvents;
	double _simulationSpeedOverride;

}

@property (nonatomic,readonly) NSArray * locations;                                                                                        //@synthesize locations=_locations - In the implementation block
@property (nonatomic,readonly) NSArray * traceEvents;                                                                                      //@synthesize traceEvents=_traceEvents - In the implementation block
@property (assign,nonatomic) double horizontalAccuracy;                                                                                    //@synthesize horizontalAccuracy=_horizontalAccuracy - In the implementation block
@property (assign,nonatomic) double simulationSpeedOverride;                                                                               //@synthesize simulationSpeedOverride=_simulationSpeedOverride - In the implementation block
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
@property (nonatomic,readonly) BOOL coarseModeEnabled; 
@property (nonatomic,readonly) BOOL usesCLMapCorrection; 
@property (nonatomic,readonly) BOOL isSimulation; 
@property (nonatomic,readonly) BOOL isTracePlayer; 
@property (nonatomic,readonly) unsigned long long traceVersion; 
@property (nonatomic,readonly) double timeScale; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double currentTime; 
-(NSArray *)locations;
-(void)stopUpdatingLocation;
-(void)startUpdatingLocation;
-(void)setDistanceFilter:(double)arg1 ;
-(void)startUpdatingHeading;
-(void)stopUpdatingVehicleSpeed;
-(void)_setup;
-(BOOL)isTracePlayer;
-(void)setLocationServicesPreferencesDialogEnabled:(BOOL)arg1 ;
-(id)authorizationRequestBlock;
-(NSString *)effectiveBundleIdentifier;
-(id)currentDate;
-(int)headingOrientation;
-(BOOL)isSimulation;
-(void)setDesiredAccuracy:(double)arg1 ;
-(BOOL)coarseModeEnabled;
-(BOOL)usesCLMapCorrection;
-(void)stopUpdatingVehicleHeading;
-(id<MNLocationProviderDelegate>)delegate;
-(void)setEffectiveBundleIdentifier:(NSString *)arg1 ;
-(void)startUpdatingVehicleSpeed;
-(BOOL)matchInfoEnabled;
-(double)desiredAccuracy;
-(void)startUpdatingVehicleHeading;
-(void)setEffectiveBundle:(NSBundle *)arg1 ;
-(BOOL)isLocationServicesPreferencesDialogEnabled;
-(void)setAuthorizationRequestBlock:(id)arg1 ;
-(void)stopUpdatingHeading;
-(void)requestWhenInUseAuthorization;
-(double)expectedGpsUpdateInterval;
-(double)distanceFilter;
-(int)authorizationStatus;
-(void)setHeadingOrientation:(int)arg1 ;
-(void)requestWhenInUseAuthorizationWithPrompt;
-(void)setMatchInfoEnabled:(BOOL)arg1 ;
-(double)timeScale;
-(NSBundle *)effectiveBundle;
-(void)setDelegate:(id<MNLocationProviderDelegate>)arg1 ;
-(double)currentTime;
-(void)resetForActiveTileGroupChanged;
-(void)_tearDown;
-(double)horizontalAccuracy;
-(void)setHorizontalAccuracy:(double)arg1 ;
-(unsigned long long)traceVersion;
-(void)navigationSessionDidStart:(id)arg1 isReconnecting:(BOOL)arg2 ;
-(void)navigationSession:(id)arg1 didUpdateMatchedLocation:(id)arg2 ;
-(void)navigationSessionWillReroute:(id)arg1 ;
-(void)navigationSession:(id)arg1 didReroute:(id)arg2 withLocation:(id)arg3 withAlternateRoutes:(id)arg4 rerouteReason:(unsigned long long)arg5 ;
-(void)navigationSession:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3 ;
-(void)navigationSession:(id)arg1 didAnnounce:(id)arg2 stage:(unsigned long long)arg3 ;
-(void)navigationSession:(id)arg1 displayPrimaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned long long)arg7 isSynthetic:(BOOL)arg8 ;
-(void)navigationSession:(id)arg1 displaySecondaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 ;
-(void)navigationSessionHideSecondaryStep:(id)arg1 ;
-(void)navigationSession:(id)arg1 didAnnounceArrival:(id)arg2 ;
-(void)navigationSession:(id)arg1 didEnableGuidancePrompts:(BOOL)arg2 ;
-(void)insertVoiceEventAtTime:(double)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithRoute:(id)arg1 request:(id)arg2 response:(id)arg3 routeAttributes:(id)arg4 ;
-(void)setSimulationSpeedOverride:(double)arg1 ;
-(void)recordLocationsAlongRouteWithRecorder:(id)arg1 ;
-(void)_addLocation:(SCD_Struct_MN6)arg1 withCourse:(double)arg2 altitude:(double)arg3 speed:(double)arg4 transport:(int)arg5 ;
-(void)generateLocations;
-(double)_estimateDuration;
-(void)_simulateWalkingFrom:(SCD_Struct_MN6)arg1 to:(SCD_Struct_MN6)arg2 ;
-(void)_generateLocationsWithSpeedOverride:(double)arg1 ;
-(void)_generateGuidanceWithRequest:(id)arg1 response:(id)arg2 routeAttributes:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)_generateEvents;
-(id)initWithRoute:(id)arg1 request:(id)arg2 response:(id)arg3 routeAttributes:(id)arg4 locations:(id)arg5 ;
-(void)generateGuidance;
-(NSArray *)traceEvents;
-(double)simulationSpeedOverride;
@end

