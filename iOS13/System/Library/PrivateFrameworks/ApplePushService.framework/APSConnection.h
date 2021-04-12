/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
*/


@protocol OS_dispatch_queue, OS_dispatch_source, OS_xpc_object;
#import <ApplePushService/ApplePushService-Structs.h>
@class CUTWeakReference, NSObject, NSString, NSData, NSArray, NSMutableDictionary, NSMutableArray;

@interface APSConnection : NSObject {

	CUTWeakReference* _delegateReference;
	NSObject*<OS_dispatch_queue> _ivarQueue;
	NSString* _environmentName;
	NSData* _publicToken;
	unsigned long long _messageSize;
	unsigned long long _largeMessageSize;
	NSString* _connectionPortName;
	unsigned _connectionPort;
	BOOL _portNameIsBundleId;
	NSArray* _enabledTopics;
	NSArray* _ignoredTopics;
	NSArray* _opportunisticTopics;
	BOOL _enableCriticalReliability;
	BOOL _enableStatusNotifications;
	BOOL _isConnected;
	BOOL _usesAppLaunchStats;
	NSMutableDictionary* _idsToOutgoingMessages;
	unsigned long long _nextOutgoingMessageID;
	NSObject*<OS_dispatch_queue> _machQueue;
	NSObject*<OS_dispatch_source> _mach_source;
	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	BOOL _everHadDelegate;
	NSMutableArray* _queuedDelegateBlocks;
	NSString* _processName;
	double _reconnectDelay;
	BOOL _isReconnectScheduled;
	BOOL _isDisconnected;
	BOOL _isShutdown;
	BOOL _isDeallocing;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;              //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> ivarQueue;                  //@synthesize ivarQueue=_ivarQueue - In the implementation block
@property (nonatomic,readonly) BOOL isShutdown;                                         //@synthesize isShutdown=_isShutdown - In the implementation block
@property (assign,nonatomic) unsigned long long messageSize; 
@property (assign,nonatomic) unsigned long long largeMessageSize; 
@property (nonatomic,retain,readonly) NSData * publicToken; 
@property (assign,nonatomic) BOOL usesAppLaunchStats; 
@property (assign,nonatomic) id<APSConnectionDelegate> delegate; 
+(id)ck_singletonConnectionForEnvironmentName:(id)arg1 namedDelegatePort:(id)arg2 ;
+(SecIdentityRef)copyIdentity;
+(void)_safelyCancelAndReleaseConnection:(id)arg1 ;
+(void)_blockingXPCCallWithArgumentBlock:(/*^block*/id)arg1 resultHandler:(/*^block*/id)arg2 ;
+(void)_setTokenState;
+(BOOL)isValidEnvironment:(id)arg1 ;
+(void)_flushIdentityCache;
+(double)serverTime;
+(id)geoRegion;
+(void)requestCourierConnection;
+(void)invalidateDeviceIdentity;
+(double)keepAliveIntervalForEnvironmentName:(id)arg1 ;
+(id)connectionsDebuggingState;
+(void)notifySafeToSendFilter;
-(void)dealloc;
-(id<APSConnectionDelegate>)delegate;
-(void)setDelegate:(id<APSConnectionDelegate>)arg1 ;
-(id)initWithEnvironmentName:(id)arg1 namedDelegatePort:(id)arg2 queue:(id)arg3 ;
-(void)setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2 opportunisticTopics:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)_disconnect;
-(id)initWithEnvironmentName:(id)arg1 queue:(id)arg2 ;
-(void)setEnabledTopics:(id)arg1 ;
-(id)initWithEnvironmentName:(id)arg1 namedDelegatePort:(id)arg2 ;
-(NSData *)publicToken;
-(BOOL)isConnected;
-(void)shutdown;
-(BOOL)isShutdown;
-(unsigned long long)messageSize;
-(void)setMessageSize:(unsigned long long)arg1 ;
-(void)scheduleInRunLoop:(id)arg1 ;
-(id)initWithEnvironmentName:(id)arg1 ;
-(void)_connectIfNecessaryOnIvarQueue;
-(void)_dispatch_async_to_ivarQueue:(/*^block*/id)arg1 ;
-(void)_disconnectOnIvarQueue;
-(void)_shutdownOnIvarQueue;
-(void)_shutdownFromDealloc;
-(void)_callDelegateOnIvarQueueWithBlock:(/*^block*/id)arg1 ;
-(void)setEnableStatusNotifications:(BOOL)arg1 ;
-(void)_cancelConnectionOnIvarQueue;
-(void)_reconnectIfNecessaryOnIvarQueueAfterDelay;
-(void)_noteDisconnectedFromDaemonOnIvarQueue;
-(void)_connectIfNecessary;
-(void)_deliverOutgoingMessageResultWithID:(unsigned long long)arg1 error:(id)arg2 sendRTT:(unsigned long long)arg3 ;
-(void)_addEnableCriticalReliabilityToXPCMessage:(id)arg1 ;
-(void)_addEnableStatusNotificationsToXPCMessage:(id)arg1 ;
-(void)_addUsesAppLaunchStatsToXPCMessage:(id)arg1 ;
-(void)_setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2 opportunisticTopics:(id)arg3 sendToDaemon:(BOOL)arg4 ;
-(void)_setEnableCriticalReliability:(BOOL)arg1 sendToDaemon:(BOOL)arg2 ;
-(void)_setUsesAppLaunchStats:(BOOL)arg1 sendToDaemon:(BOOL)arg2 ;
-(void)_setEnableStatusNotifications:(BOOL)arg1 sendToDaemon:(BOOL)arg2 ;
-(void)setLargeMessageSize:(unsigned long long)arg1 ;
-(void)_deliverDidReconnectOnIvarQueue;
-(void)_deliverPublicTokenOnIvarQueue:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)_deliverConnectionStatusChange:(BOOL)arg1 ;
-(void)_handleEvent:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_onIvarQueue_setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2 opportunisticTopics:(id)arg3 sendToDaemon:(BOOL)arg4 ;
-(id)_listForIdentifierOnIvarQueue:(unsigned long long)arg1 ;
-(void)_deliverOutgoingMessageResultWithID:(unsigned long long)arg1 checkpointTraceData:(id)arg2 error:(id)arg3 sendRTT:(unsigned long long)arg4 ackTimestamp:(unsigned long long)arg5 ;
-(void)_sendOutgoingMessage:(id)arg1 fake:(BOOL)arg2 ;
-(id)initWithEnvironmentName:(id)arg1 launchBundleIdOnDemand:(id)arg2 queue:(id)arg3 ;
-(void)_cancelConnection;
-(void)_disconnectFromDealloc;
-(void)removeFromRunLoop;
-(void)setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2 ;
-(void)setOpportunisticTopics:(id)arg1 ;
-(void)setIgnoredTopics:(id)arg1 ;
-(id)enabledTopics;
-(id)ignoredTopics;
-(id)opportunisticTopics;
-(void)moveTopic:(id)arg1 fromList:(unsigned long long)arg2 toList:(unsigned long long)arg3 ;
-(unsigned long long)largeMessageSize;
-(void)setUsesAppLaunchStats:(BOOL)arg1 ;
-(BOOL)usesAppLaunchStats;
-(void)setEnableCriticalReliability:(BOOL)arg1 ;
-(void)_deliverMessage:(id)arg1 ;
-(void)_deliverPublicToken:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)_deliverConnectionStatusFromDealloc:(BOOL)arg1 ;
-(void)_deliverToken:(id)arg1 forTopic:(id)arg2 identifier:(id)arg3 ;
-(BOOL)hasIdentity;
-(void)sendOutgoingMessage:(id)arg1 ;
-(void)cancelOutgoingMessage:(id)arg1 ;
-(void)sendFakeMessage:(id)arg1 ;
-(void)requestTokenForTopic:(id)arg1 identifier:(id)arg2 ;
-(void)invalidateTokenForTopic:(id)arg1 identifier:(id)arg2 ;
-(void)requestKeepAlive;
-(void)confirmReceiptForMessage:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)ivarQueue;
@end

