/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <libobjc.A.dylib/TUCallServicesXPCClient.h>
#import <libobjc.A.dylib/TUCallServicesProxyCallActions.h>
#import <libobjc.A.dylib/TUCallServicesClientCapabilitiesActions.h>
#import <libobjc.A.dylib/TUAudioDeviceControllerActions.h>
#import <libobjc.A.dylib/TURouteControllerActions.h>
#import <libobjc.A.dylib/TUCallFilterControllerActions.h>

@protocol TUCallServicesXPCServer, OS_dispatch_queue;
@class TUCallServicesClientCapabilities, TUCallCenter, TURouteController, NSObject, NSXPCConnection, NSArray, NSMapTable, TUCallNotificationManager, NSString;

@interface TUCallServicesInterface : NSObject <TUCallServicesXPCClient, TUCallServicesProxyCallActions, TUCallServicesClientCapabilitiesActions, TUAudioDeviceControllerActions, TURouteControllerActions, TUCallFilterControllerActions> {

	BOOL _hasRequestedInitialState;
	BOOL _hasReceivedInitialState;
	BOOL _hasServerLaunched;
	int _connectionRequestNotificationToken;
	id<TUCallServicesXPCServer> _server;
	TUCallServicesClientCapabilities* _callServicesClientCapabilities;
	TUCallCenter* _callCenter;
	TURouteController* _localRouteController;
	TURouteController* _pairedHostDeviceRouteController;
	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _xpcConnection;
	NSArray* _currentCalls;
	NSMapTable* _uniqueProxyIdentifierToProxyCall;
	TUCallNotificationManager* _callNotificationManager;
	NSArray* _localProxyCalls;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                             //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) void* queueContext; 
@property (nonatomic,readonly) int connectionRequestNotificationToken;                                         //@synthesize connectionRequestNotificationToken=_connectionRequestNotificationToken - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;                                                  //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (assign,nonatomic) BOOL hasRequestedInitialState;                                                    //@synthesize hasRequestedInitialState=_hasRequestedInitialState - In the implementation block
@property (assign,nonatomic) BOOL hasReceivedInitialState;                                                     //@synthesize hasReceivedInitialState=_hasReceivedInitialState - In the implementation block
@property (nonatomic,copy) NSArray * currentCalls;                                                             //@synthesize currentCalls=_currentCalls - In the implementation block
@property (nonatomic,readonly) NSMapTable * uniqueProxyIdentifierToProxyCall;                                  //@synthesize uniqueProxyIdentifierToProxyCall=_uniqueProxyIdentifierToProxyCall - In the implementation block
@property (nonatomic,readonly) TUCallNotificationManager * callNotificationManager;                            //@synthesize callNotificationManager=_callNotificationManager - In the implementation block
@property (nonatomic,copy) NSArray * localProxyCalls;                                                          //@synthesize localProxyCalls=_localProxyCalls - In the implementation block
@property (getter=isServerLocal,nonatomic,readonly) BOOL serverLocal; 
@property (assign,nonatomic) BOOL hasServerLaunched;                                                           //@synthesize hasServerLaunched=_hasServerLaunched - In the implementation block
@property (assign,nonatomic,__weak) TUCallCenter * callCenter;                                                 //@synthesize callCenter=_callCenter - In the implementation block
@property (nonatomic,readonly) id<TUCallServicesXPCServer> asynchronousServer; 
@property (assign,nonatomic,__weak) id<TUCallServicesXPCServer> server;                                        //@synthesize server=_server - In the implementation block
@property (nonatomic,readonly) TUCallServicesClientCapabilities * callServicesClientCapabilities;              //@synthesize callServicesClientCapabilities=_callServicesClientCapabilities - In the implementation block
@property (nonatomic,retain) TURouteController * localRouteController;                                         //@synthesize localRouteController=_localRouteController - In the implementation block
@property (nonatomic,retain) TURouteController * pairedHostDeviceRouteController;                              //@synthesize pairedHostDeviceRouteController=_pairedHostDeviceRouteController - In the implementation block
@property (nonatomic,readonly) id<TUCallContainerPrivate> callContainer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleServerDisconnect;
-(NSArray *)currentCalls;
-(oneway void)setClientCapabilities:(id)arg1 ;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(oneway void)ungroupCallWithUniqueProxyIdentifier:(id)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(oneway void)handleMeterLevelChangedTo:(float)arg1 inDirection:(int)arg2 forCallsWithUniqueProxyIdentifiers:(id)arg3 ;
-(oneway void)pushRelayingCallsToHostWithSourceIdentifier:(id)arg1 ;
-(void)_registerCall:(id)arg1 ;
-(oneway void)sendHardPauseDigitsForCallWithUniqueProxyIdentifier:(id)arg1 ;
-(oneway void)handleLocalRoutesByUniqueIdentifierUpdated:(id)arg1 ;
-(void)tearDownXPCConnection;
-(id)synchronousServerWithErrorHandler:(/*^block*/id)arg1 ;
-(oneway void)sendMMIOrUSSDCodeWithRequest:(id)arg1 ;
-(oneway void)pushHostedCallsToDestination:(id)arg1 ;
-(id)init;
-(oneway void)setTTYType:(int)arg1 forCallWithUniqueProxyIdentifier:(id)arg2 ;
-(void)setServer:(id<TUCallServicesXPCServer>)arg1 ;
-(void)setLocalProxyCalls:(NSArray *)arg1 ;
-(oneway void)handleNotificationName:(id)arg1 forCallWithUniqueProxyIdentifier:(id)arg2 userInfo:(id)arg3 ;
-(void)setCallCenter:(TUCallCenter *)arg1 ;
-(oneway void)setRemoteVideoPresentationStateForCallWithUniqueProxyIdentifier:(id)arg1 presentationState:(int)arg2 ;
-(void)setHasRequestedInitialState:(BOOL)arg1 ;
-(BOOL)willRestrictAddresses:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(id<TUCallContainerPrivate>)callContainer;
-(NSMapTable *)uniqueProxyIdentifierToProxyCall;
-(oneway void)shouldAllowRingingCallStatusIndicator:(BOOL)arg1 ;
-(oneway void)enteredForegroundForCallWithUniqueProxyIdentifier:(id)arg1 ;
-(id)dialWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestCurrentStateWithCompletionHandler:(/*^block*/id)arg1 handleInitialState:(/*^block*/id)arg2 ;
-(TUCallNotificationManager *)callNotificationManager;
-(BOOL)hasRequestedInitialState;
-(id)policyForAddresses:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(id)_proxyCallWithCall:(id)arg1 ;
-(oneway void)activateInCallUIWithActivityContinuationIdentifier:(id)arg1 ;
-(oneway void)shouldSuppressInCallStatusBar:(BOOL)arg1 ;
-(oneway void)updateCallWithProxy:(id)arg1 ;
-(void)waitForInitialStateIfNecessary;
-(oneway void)groupCallWithUniqueProxyIdentifier:(id)arg1 withOtherCallWithUniqueProxyIdentifier:(id)arg2 ;
-(NSString *)debugDescription;
-(id)asynchronousServerWithErrorHandler:(/*^block*/id)arg1 ;
-(oneway void)enteredBackgroundForAllCalls;
-(void)setCurrentCalls:(NSArray *)arg1 ;
-(BOOL)containsRestrictedHandle:(id)arg1 forBundleIdentifier:(id)arg2 performSynchronously:(BOOL)arg3 ;
-(oneway void)handlePairedHostDeviceRoutesByUniqueIdentifierUpdated:(id)arg1 ;
-(void)pickRouteWithUniqueIdentifier:(id)arg1 shouldWaitUntilAvailable:(BOOL)arg2 forRouteController:(id)arg3 ;
-(oneway void)resetCallProvisionalStates;
-(oneway void)swapCalls;
-(oneway void)setIsSendingVideo:(BOOL)arg1 forCallWithUniqueProxyIdentifier:(id)arg2 ;
-(void*)queueContext;
-(oneway void)pullRelayingCallsFromClient;
-(void)_updateCurrentCalls:(id)arg1 ;
-(BOOL)isServerLocal;
-(void)_tearDownXPCConnection;
-(TUCallServicesClientCapabilities *)callServicesClientCapabilities;
-(id)joinConversationWithRequest:(id)arg1 ;
-(id<TUCallServicesXPCServer>)server;
-(id)initWithQueue:(id)arg1 callCenter:(id)arg2 ;
-(unsigned long long)filterStatusForAddresses:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)setLocalRouteController:(TURouteController *)arg1 ;
-(oneway void)setCurrentAudioOutputDeviceToDeviceWithUID:(id)arg1 ;
-(oneway void)handleCurrentCallsChanged:(id)arg1 callDisconnected:(id)arg2 ;
-(void)requestCurrentStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)routesByUniqueIdentifierForRouteController:(id)arg1 ;
-(int)connectionRequestNotificationToken;
-(oneway void)pullHostedCallsFromPairedHostDevice;
-(void)performBlockOnQueue:(/*^block*/id)arg1 ;
-(oneway void)disconnectCurrentCallAndActivateHeld;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)isUnknownAddress:(id)arg1 normalizedAddress:(id)arg2 forBundleIdentifier:(id)arg3 ;
-(oneway void)handleFrequencyChangedTo:(id)arg1 inDirection:(int)arg2 forCallsWithUniqueProxyIdentifiers:(id)arg3 ;
-(BOOL)shouldRestrictAddresses:(id)arg1 forBundleIdentifier:(id)arg2 performSynchronously:(BOOL)arg3 ;
-(BOOL)hasServerLaunched;
-(void)_updateCurrentCalls:(id)arg1 withNotificationsUsingUpdatedCalls:(id)arg2 ;
-(TUCallCenter *)callCenter;
-(oneway void)reportLocalPreviewStoppedForCallWithUniqueProxyIdentifier:(id)arg1 ;
-(TURouteController *)localRouteController;
-(void)performBlockOnQueue:(/*^block*/id)arg1 andWait:(BOOL)arg2 ;
-(oneway void)pullCallFromClientUsingHandoffActivityUserInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)answerCallWithRequest:(id)arg1 ;
-(oneway void)unholdCallWithUniqueProxyIdentifier:(id)arg1 ;
-(void)fetchCurrentCalls;
-(oneway void)disconnectCallWithUniqueProxyIdentifier:(id)arg1 ;
-(oneway void)setUplinkMuted:(BOOL)arg1 forCallWithUniqueProxyIdentifier:(id)arg2 ;
-(NSArray *)localProxyCalls;
-(BOOL)hasReceivedInitialState;
-(oneway void)_handleCurrentCallsChanged:(id)arg1 callsDisconnected:(id)arg2 ;
-(TURouteController *)pairedHostDeviceRouteController;
-(void)registerCall:(id)arg1 ;
-(id<TUCallServicesXPCServer>)asynchronousServer;
-(oneway void)setDownlinkMuted:(BOOL)arg1 forCallWithUniqueProxyIdentifier:(id)arg2 ;
-(id)_proxyCallWithUniqueProxyIdentifier:(id)arg1 ;
-(oneway void)disconnectAllCalls;
-(void)_updateCurrentCallsWithoutNotifications:(id)arg1 ;
-(void)handleServerReconnect;
-(void)setPairedHostDeviceRouteController:(TURouteController *)arg1 ;
-(void)_setUpXPCConnection;
-(void)setHasServerLaunched:(BOOL)arg1 ;
-(oneway void)setCurrentAudioInputDeviceToDeviceWithUID:(id)arg1 ;
-(oneway void)willEnterBackgroundForAllCalls;
-(oneway void)setRemoteVideoPresentationSizeForCallWithUniqueProxyIdentifier:(id)arg1 size:(CGSize)arg2 ;
-(void)dealloc;
-(oneway void)playDTMFToneForCallWithUniqueProxyIdentifier:(id)arg1 key:(unsigned char)arg2 ;
-(void)setHasReceivedInitialState:(BOOL)arg1 ;
-(oneway void)holdCallWithUniqueProxyIdentifier:(id)arg1 ;
@end

