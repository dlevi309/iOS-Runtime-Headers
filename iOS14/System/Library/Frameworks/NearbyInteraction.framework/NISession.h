/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NearbyInteraction.framework/NearbyInteraction
*/

#import <NearbyInteraction/NearbyInteraction-Structs.h>
#import <libobjc.A.dylib/UWBSessionDelegateProxyProtocol.h>

@protocol OS_dispatch_queue, OS_os_log, NISessionDelegate, NIInternalSessionDelegate;
@class NSObject, NSUUID, NIServerConnection, NSDictionary, NIConfiguration, NSError, NIDiscoveryToken, NSString;

@interface NISession : NSObject <UWBSessionDelegateProxyProtocol> {

	NSObject*<OS_dispatch_queue> _queue;
	mutex _mutex;
	NSUUID* _internalID;
	NIServerConnection* _connection;
	NSDictionary* _activationResponse;
	NIConfiguration* _currentConfiguration;
	vector<UWBSessionInterruptionBookkeeping, std::__1::allocator<UWBSessionInterruptionBookkeeping> >* _interruptions;
	atomic<bool> _readyForCallbacks;
	NSObject*<OS_os_log> _log;
	double _startTime;
	double _duration;
	BOOL _updatedNearbyObjects;
	int _internalState;
	id<NISessionDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSError* _invalidationError;
	id<NIInternalSessionDelegate> _internalDelegate;

}

@property (assign) int internalState;                                                 //@synthesize internalState=_internalState - In the implementation block
@property (retain) NSError * invalidationError;                                       //@synthesize invalidationError=_invalidationError - In the implementation block
@property (__weak) id<NIInternalSessionDelegate> internalDelegate;                    //@synthesize internalDelegate=_internalDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<NISessionDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;              //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,copy,readonly) NIDiscoveryToken * discoveryToken; 
@property (nonatomic,copy,readonly) NIConfiguration * configuration; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isSupported;
+(id)_oneShotConnection:(BOOL)arg1 ;
+(void)setCachedDeviceCapabilities:(id)arg1 ;
+(id)cachedDeviceCapabilities;
+(void)_queryAndCacheCapabilities;
+(BOOL)_supportedPlatform:(id)arg1 ;
-(void)setInternalState:(int)arg1 ;
-(NSError *)invalidationError;
-(id)init;
-(void)_addObject:(id)arg1 ;
-(id<NISessionDelegate>)delegate;
-(void)pause;
-(void)_activate:(BOOL)arg1 ;
-(id<NIInternalSessionDelegate>)internalDelegate;
-(void)_logTime;
-(int)internalState;
-(void)runWithConfiguration:(id)arg1 ;
-(void)_removeObject:(id)arg1 ;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDelegate:(id<NISessionDelegate>)arg1 ;
-(NSString *)description;
-(NIConfiguration *)configuration;
-(id)_remoteObject;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(unsigned long long)hash;
-(void)invalidate;
-(void)setInternalDelegate:(id<NIInternalSessionDelegate>)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setInvalidationError:(NSError *)arg1 ;
-(void)_serverConnectionInterrupted;
-(void)_serverConnectionInvalidated;
-(void)_activateSyncOnConnectionQueue;
-(void)_shareSandboxExtensionForCurrentBundle;
-(id)_initAndConnectToServer;
-(void)_handleCommandUnsupportedPlatform;
-(id)_getSessionFailureError;
-(void)_notifyDidInvalidateWithError:(id)arg1 ;
-(void)_reinterruptSessionWithCachedInterruption;
-(id)_synchronousRemoteObject;
-(void)_handleRunSessionError:(id)arg1 ;
-(void)_handleRunSessionSuccess;
-(void)_notifySessionHasFailed;
-(void)_pauseInternalOnConnectionQueue:(BOOL)arg1 ;
-(void)_logDurationAndSubmit:(BOOL)arg1 ;
-(NIDiscoveryToken *)discoveryToken;
-(void)_activateAsync;
-(void)_handleActivationError:(id)arg1 ;
-(void)_handleActivationSuccess:(id)arg1 ;
-(void)_invalidateSessionInternalWithError:(id)arg1 ;
-(void)_performBlockOnDelegateQueue:(/*^block*/id)arg1 ifRespondsToSelector:(SEL)arg2 ;
-(void)_interruptSessionWithInternalReason:(long long)arg1 onConnectionQueue:(BOOL)arg2 ;
-(void)_handlePauseSessionError:(id)arg1 ;
-(void)_handlePauseSessionSuccess;
-(void)_performBlockOnDelegateQueue:(/*^block*/id)arg1 ifRespondsToSelector:(SEL)arg2 evenIfNotRunning:(BOOL)arg3 ;
-(id)_verifyError:(id)arg1 ;
-(void)_submitErrorMetric:(id)arg1 ;
-(void)uwbSessionDidFailWithError:(id)arg1 ;
-(void)uwbSessionDidInvalidateWithError:(id)arg1 ;
-(void)uwbSystemDidChangeState:(unsigned long long)arg1 ;
-(void)didUpdateNearbyObjects:(id)arg1 ;
-(void)didRemoveNearbyObjects:(id)arg1 withReason:(unsigned long long)arg2 ;
-(void)uwbSessionInterruptedWithReason:(long long)arg1 timestamp:(double)arg2 ;
-(void)uwbSessionInterruptionReasonEnded:(long long)arg1 timestamp:(double)arg2 ;
-(void)didDiscoverNearbyObject:(id)arg1 ;
-(void)objectDidEnter:(id)arg1 region:(id)arg2 ;
-(void)objectDidExit:(id)arg1 region:(id)arg2 ;
-(void)setConfigurationForTesting:(id)arg1 ;
-(void)_addRegionPredicate:(id)arg1 ;
-(void)_removeRegionPredicate:(id)arg1 ;
@end

