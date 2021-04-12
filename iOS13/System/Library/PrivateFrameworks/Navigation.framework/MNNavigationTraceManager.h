/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <libobjc.A.dylib/MNTracePlayerObserver.h>
#import <libobjc.A.dylib/MNLocationProvider.h>
#import <libobjc.A.dylib/GEOMotionContextProvider.h>

@protocol MNNavigationTraceManagerDelegate, MNLocationProviderDelegate, GEOMotionContextProviderDelegate;
@class NSBundle, NSString, MNTracePlayer, MNTraceRecorder, MNTraceEventRecorder;

@interface MNNavigationTraceManager : NSObject <MNTracePlayerObserver, MNLocationProvider, GEOMotionContextProvider> {

	MNTracePlayer* _tracePlayer;
	MNTraceRecorder* _traceRecorder;
	MNTraceEventRecorder* _traceEventRecorder;
	int _navigationType;
	id<MNNavigationTraceManagerDelegate> _traceManagerDelegate;
	id<MNLocationProviderDelegate> _locationProviderDelegate;
	id<GEOMotionContextProviderDelegate> _motionContextProviderDelegate;

}

@property (assign,nonatomic,__weak) id<MNNavigationTraceManagerDelegate> traceManagerDelegate;                                             //@synthesize traceManagerDelegate=_traceManagerDelegate - In the implementation block
@property (nonatomic,readonly) MNTracePlayer * tracePlayer;                                                                                //@synthesize tracePlayer=_tracePlayer - In the implementation block
@property (nonatomic,readonly) MNTraceRecorder * traceRecorder;                                                                            //@synthesize traceRecorder=_traceRecorder - In the implementation block
@property (nonatomic,readonly) MNTraceEventRecorder * traceEventRecorder;                                                                  //@synthesize traceEventRecorder=_traceEventRecorder - In the implementation block
@property (assign,nonatomic) int navigationType;                                                                                           //@synthesize navigationType=_navigationType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNLocationProviderDelegate> delegate;                                                               //@synthesize locationProviderDelegate=_locationProviderDelegate - In the implementation block
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
@property (assign,nonatomic,__weak) id<GEOMotionContextProviderDelegate> motionDelegate;                                                   //@synthesize motionContextProviderDelegate=_motionContextProviderDelegate - In the implementation block
-(void)dealloc;
-(void)close;
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
-(NSBundle *)effectiveBundle;
-(void)stopMotionUpdates;
-(void)setMotionDelegate:(id<GEOMotionContextProviderDelegate>)arg1 ;
-(void)startMotionUpdates;
-(BOOL)isSimulation;
-(BOOL)_isNavigating;
-(int)navigationType;
-(void)setEffectiveBundle:(NSBundle *)arg1 ;
-(NSString *)effectiveBundleIdentifier;
-(void)setEffectiveBundleIdentifier:(NSString *)arg1 ;
-(id)authorizationRequestBlock;
-(void)setAuthorizationRequestBlock:(id)arg1 ;
-(BOOL)usesCLMapCorrection;
-(BOOL)isTracePlayer;
-(double)timeScale;
-(void)setNavigationType:(int)arg1 ;
-(MNTracePlayer *)tracePlayer;
-(MNTraceRecorder *)traceRecorder;
-(id)_defaultTraceNameForDestination:(id)arg1 ;
-(id)_tracePathForTraceName:(id)arg1 ;
-(void)_recordEnvironmentInfo:(id)arg1 ;
-(void)_recordStylesheet:(id)arg1 ;
-(id)_validFilenameForTraceName:(id)arg1 ;
-(id)_defaultTraceExtension;
-(unsigned long long)_startIndexForNavigation;
-(void)tracePlayerDidStart:(id)arg1 ;
-(void)tracePlayerDidStop:(id)arg1 ;
-(void)tracePlayerDidPause:(id)arg1 ;
-(void)tracePlayerDidResume:(id)arg1 ;
-(void)tracePlayer:(id)arg1 didSeekToTransportType:(int)arg2 ;
-(void)tracePlayer:(id)arg1 didSeekToTime:(double)arg2 fromTime:(double)arg3 location:(id)arg4 ;
-(void)tracePlayer:(id)arg1 didPlayAtTime:(double)arg2 ;
-(void)tracePlayer:(id)arg1 didJumpToRouteResponse:(id)arg2 request:(id)arg3 origin:(id)arg4 destination:(id)arg5 ;
-(void)tracePlayerDidStayOnRoute:(id)arg1 ;
-(void)tracePlayer:(id)arg1 didUpdateLocation:(id)arg2 ;
-(void)tracePlayer:(id)arg1 didReceiveLocationError:(id)arg2 ;
-(void)tracePlayerDidPauseLocationUpdates:(id)arg1 ;
-(void)tracePlayerDidResumeLocationUpdates:(id)arg1 ;
-(void)tracePlayer:(id)arg1 didUpdateHeading:(id)arg2 ;
-(void)tracePlayer:(id)arg1 didUpdateMotion:(unsigned long long)arg2 exitType:(unsigned long long)arg3 confidence:(unsigned long long)arg4 ;
-(void)tracePlayer:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3 ;
-(void)tracePlayer:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3 ;
-(void)resetForActiveTileGroupChanged;
-(unsigned long long)traceVersion;
-(id<GEOMotionContextProviderDelegate>)motionDelegate;
-(void)openForPlaybackWithTracePath:(id)arg1 ;
-(void)openForRecordingWithTraceRecordingData:(id)arg1 traceNameOverride:(id)arg2 ;
-(void)openForSimulationWithRoute:(id)arg1 traceRecordingData:(id)arg2 traceNameOverride:(id)arg3 ;
-(void)startSimulationWithRoute:(id)arg1 request:(id)arg2 response:(id)arg3 routeAttributes:(id)arg4 routeIndex:(unsigned)arg5 traceNameOverride:(id)arg6 ;
-(id<MNNavigationTraceManagerDelegate>)traceManagerDelegate;
-(void)setTraceManagerDelegate:(id<MNNavigationTraceManagerDelegate>)arg1 ;
-(MNTraceEventRecorder *)traceEventRecorder;
@end

