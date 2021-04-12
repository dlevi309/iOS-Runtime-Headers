/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <libobjc.A.dylib/MNNavigationServiceProxy.h>

@protocol OS_dispatch_queue, MNNavigationServiceClientInterface;
@class NSXPCConnection, MNSettings, NSHashTable, NSMutableArray, NSObject, NSString;

@interface MNNavigationServiceRemoteProxy : NSObject <MNNavigationServiceProxy> {

	BOOL _applicationActive;
	NSXPCConnection* _connection;
	MNSettings* _settings;
	NSHashTable* _clients;
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
-(id)init;
-(void)dealloc;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id<MNNavigationServiceClientInterface>)delegate;
-(void)setDelegate:(id<MNNavigationServiceClientInterface>)arg1 ;
-(void)_closeConnection;
-(void)setHeadingOrientation:(int)arg1 ;
-(void)openForClient:(id)arg1 ;
-(void)closeForClient:(id)arg1 ;
-(void)setGuidancePromptsEnabled:(BOOL)arg1 ;
-(void)setDisplayedStepIndex:(unsigned long long)arg1 ;
-(void)setIsConnectedToCarplay:(BOOL)arg1 ;
-(id)_remoteObjectProxy;
-(void)_handleInterruption;
-(unsigned long long)interruptionCount;
-(void)_openConnection;
-(unsigned long long)clientCount;
-(void)stopNavigation;
-(void)navigationServiceProxy:(id)arg1 didUpdateNavigationDetails:(id)arg2 ;
-(void)setRoutesForPreview:(id)arg1 selectedRouteIndex:(unsigned long long)arg2 ;
-(void)startNavigationWithDetails:(id)arg1 activeBlock:(/*^block*/id)arg2 ;
-(void)startPredictingDestinationsWithHandler:(/*^block*/id)arg1 ;
-(void)stopPredictingDestinations;
-(void)updateDestination:(id)arg1 ;
-(void)resumeOriginalDestination;
-(void)switchToRoute:(id)arg1 ;
-(void)setFullGuidanceMode:(BOOL)arg1 ;
-(void)changeSettings:(id)arg1 ;
-(void)repeatCurrentGuidanceWithReply:(/*^block*/id)arg1 ;
-(void)repeatCurrentTrafficAlertWithReply:(/*^block*/id)arg1 ;
-(void)vibrateForPrompt:(unsigned long long)arg1 withReply:(/*^block*/id)arg2 ;
-(void)stopCurrentGuidancePrompt;
-(void)setHFPPreference:(BOOL)arg1 forSetting:(id)arg2 ;
-(void)setCurrentAudioOutputSetting:(id)arg1 ;
-(void)setRideIndex:(unsigned long long)arg1 forLegIndex:(unsigned long long)arg2 ;
-(void)setJunctionViewImageWidth:(double)arg1 height:(double)arg2 ;
-(void)acceptReroute:(BOOL)arg1 forTrafficIncidentAlert:(id)arg2 ;
-(void)setTraceIsPlaying:(BOOL)arg1 ;
-(void)setTracePlaybackSpeed:(double)arg1 ;
-(void)setTracePosition:(double)arg1 ;
-(void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg1 ;
-(void)recordPedestrianTracePath:(id)arg1 ;
-(void)interfaceHashesWithHandler:(/*^block*/id)arg1 ;
-(void)updateGuidanceWithData:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)pauseRealtimeUpdatesForSubscriber:(id)arg1 ;
-(void)resumeRealtimeUpdatesForSubscriber:(id)arg1 ;
-(void)checkinForNavigationService:(/*^block*/id)arg1 ;
-(void)navigationServiceProxy:(id)arg1 willChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3 ;
-(void)navigationServiceProxy:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3 ;
-(BOOL)isOpenForClient:(id)arg1 ;
-(void)_updateConnection;
-(BOOL)_shouldReconnectWithInterruptionOnDate:(id)arg1 ;
-(void)_restoreNavigationSession;
-(void)_restorePredictionSession;
-(void)_restoreIdleConnection;
-(void)_releaseSandboxExtension;
-(void)_consumeSandboxExtension:(char*)arg1 ;
@end

