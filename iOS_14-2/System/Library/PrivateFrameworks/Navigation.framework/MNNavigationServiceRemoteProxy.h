/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <libobjc.A.dylib/MNNavigationServiceProxy.h>

@protocol OS_dispatch_queue, MNNavigationServiceClientInterface;
@class NSXPCConnection, MNSettings, geo_isolater, NSHashTable, MNStartNavigationDetails, NSMutableArray, NSObject, NSString;

@interface MNNavigationServiceRemoteProxy : NSObject <MNNavigationServiceProxy> {

	BOOL _applicationActive;
	NSXPCConnection* _connection;
	MNSettings* _settings;
	geo_isolater* _clientsLock;
	NSHashTable* _clients;
	MNStartNavigationDetails* _startNavigationDetails;
	NSMutableArray* _interruptionDates;
	BOOL _isReconnecting;
	/*^block*/id _predictionHandler;
	NSObject*<OS_dispatch_queue> _serialQueue;
	long long _sandboxHandle;
	id<MNNavigationServiceClientInterface> _delegate;

}

@property (assign,nonatomic,__weak) id<MNNavigationServiceClientInterface> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long interruptionCount; 
@property (nonatomic,readonly) unsigned long long clientCount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)pauseRealtimeUpdatesForSubscriber:(id)arg1 ;
-(void)repeatCurrentTrafficAlertWithReply:(/*^block*/id)arg1 ;
-(void)updateDestination:(id)arg1 ;
-(void)navigationServiceProxy:(id)arg1 willChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3 ;
-(void)stopCurrentGuidancePrompt;
-(void)setIsConnectedToCarplay:(BOOL)arg1 ;
-(void)checkinForNavigationService:(/*^block*/id)arg1 ;
-(void)setGuidancePromptsEnabled:(BOOL)arg1 ;
-(void)repeatCurrentGuidanceWithReply:(/*^block*/id)arg1 ;
-(void)setRideIndex:(unsigned long long)arg1 forSegmentIndex:(unsigned long long)arg2 ;
-(void)startPredictingDestinationsWithHandler:(/*^block*/id)arg1 ;
-(void)interfaceHashesWithHandler:(/*^block*/id)arg1 ;
-(void)resumeOriginalDestination;
-(void)acceptReroute:(BOOL)arg1 forTrafficIncidentAlert:(id)arg2 ;
-(void)vibrateForPrompt:(unsigned long long)arg1 withReply:(/*^block*/id)arg2 ;
-(id)init;
-(void)setFullGuidanceMode:(BOOL)arg1 ;
-(void)setCurrentAudioOutputSetting:(id)arg1 ;
-(id<MNNavigationServiceClientInterface>)delegate;
-(void)_releaseSandboxExtension;
-(void)resumeRealtimeUpdatesForSubscriber:(id)arg1 ;
-(void)_handleInterruption;
-(void)switchToRoute:(id)arg1 ;
-(void)setTracePosition:(double)arg1 ;
-(void)setDisplayedStepIndex:(unsigned long long)arg1 ;
-(void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg1 ;
-(void)setTracePlaybackSpeed:(double)arg1 ;
-(void)stopNavigation;
-(void)startNavigationWithDetails:(id)arg1 activeBlock:(/*^block*/id)arg2 ;
-(void)setJunctionViewImageWidth:(double)arg1 height:(double)arg2 ;
-(void)setHFPPreference:(BOOL)arg1 forSetting:(id)arg2 ;
-(void)setTraceIsPlaying:(BOOL)arg1 ;
-(void)setHeadingOrientation:(int)arg1 ;
-(void)setRoutesForPreview:(id)arg1 selectedRouteIndex:(unsigned long long)arg2 ;
-(void)changeSettings:(id)arg1 ;
-(void)recordPedestrianTracePath:(id)arg1 ;
-(void)stopPredictingDestinations;
-(void)_restoreIdleConnection;
-(void)_startNavigationWithDetails:(id)arg1 ;
-(void)navigationServiceProxy:(id)arg1 didUpdateNavigationDetails:(id)arg2 ;
-(unsigned long long)clientCount;
-(void)setDelegate:(id<MNNavigationServiceClientInterface>)arg1 ;
-(void)closeForClient:(id)arg1 ;
-(void)navigationServiceProxy:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3 ;
-(void)_closeConnection;
-(void)_restoreNavigationSession;
-(id)_remoteObjectProxy;
-(unsigned long long)interruptionCount;
-(void)openForClient:(id)arg1 ;
-(void)_updateConnection;
-(void)_consumeSandboxExtension:(char*)arg1 ;
-(BOOL)_shouldReconnectWithInterruptionOnDate:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(BOOL)isOpenForClient:(id)arg1 ;
-(void)_restorePredictionSession;
-(void)_openConnection;
-(void)dealloc;
-(void)forwardInvocation:(id)arg1 ;
@end

