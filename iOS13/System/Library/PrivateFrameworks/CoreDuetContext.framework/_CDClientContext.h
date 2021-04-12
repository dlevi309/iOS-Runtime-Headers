/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
*/

#import <libobjc.A.dylib/_CDAsyncUserContext.h>
#import <libobjc.A.dylib/_CDAsyncLocalContext.h>
#import <libobjc.A.dylib/_CDUserContextServerMonitoring.h>

@protocol OS_dispatch_queue, OS_os_log, _CDRemoteUserContextServer;
@class NSObject, NSXPCConnection, NSXPCListenerEndpoint, NSMutableDictionary, NSCountedSet, NSString;

@interface _CDClientContext : NSObject <_CDAsyncUserContext, _CDAsyncLocalContext, _CDUserContextServerMonitoring> {

	BOOL _interrupted;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _xpcQueue;
	NSObject*<OS_dispatch_queue> _xpcEventQueue;
	NSXPCConnection* _xpcConnection;
	NSXPCListenerEndpoint* _endpoint;
	NSMutableDictionary* _keyPathToValues;
	NSMutableDictionary* _registrations;
	NSCountedSet* _keyPathsWithRegistrationsForAnyChange;
	NSObject*<OS_dispatch_queue> _registrationCallbackQueue;
	NSMutableDictionary* _openRegistrationTokens;
	NSObject*<OS_os_log> _log;
	id<_CDRemoteUserContextServer> _remoteUserContextProxy;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                  //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> xpcQueue;                               //@synthesize xpcQueue=_xpcQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> xpcEventQueue;                          //@synthesize xpcEventQueue=_xpcEventQueue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;                                     //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,retain) NSXPCListenerEndpoint * endpoint;                                    //@synthesize endpoint=_endpoint - In the implementation block
@property (assign,nonatomic) BOOL interrupted;                                                    //@synthesize interrupted=_interrupted - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * keyPathToValues;                               //@synthesize keyPathToValues=_keyPathToValues - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * registrations;                                 //@synthesize registrations=_registrations - In the implementation block
@property (nonatomic,retain) NSCountedSet * keyPathsWithRegistrationsForAnyChange;                //@synthesize keyPathsWithRegistrationsForAnyChange=_keyPathsWithRegistrationsForAnyChange - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> registrationCallbackQueue;              //@synthesize registrationCallbackQueue=_registrationCallbackQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * openRegistrationTokens;                        //@synthesize openRegistrationTokens=_openRegistrationTokens - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> log;                                            //@synthesize log=_log - In the implementation block
@property (nonatomic,retain) id<_CDRemoteUserContextServer> remoteUserContextProxy;               //@synthesize remoteUserContextProxy=_remoteUserContextProxy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)userContext;
+(id)serverInterface;
+(id)clientInterface;
+(id)userContextWithEndpoint:(id)arg1 ;
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(BOOL)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id)currentConnection;
-(NSXPCListenerEndpoint *)endpoint;
-(id)initWithEndpoint:(id)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(void)setEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(NSObject*<OS_os_log>)log;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(id)localContext;
-(NSObject*<OS_dispatch_queue>)xpcQueue;
-(void)setXpcQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)interrupted;
-(void)setInterrupted:(BOOL)arg1 ;
-(NSMutableDictionary *)registrations;
-(id)objectForContextualKeyPath:(id)arg1 ;
-(BOOL)setObject:(id)arg1 forContextualKeyPath:(id)arg2 ;
-(BOOL)hasKnowledgeOfContextualKeyPath:(id)arg1 ;
-(id)lastModifiedDateForContextualKeyPath:(id)arg1 ;
-(void)registerCallback:(id)arg1 ;
-(void)deregisterCallback:(id)arg1 ;
-(BOOL)evaluatePredicate:(id)arg1 ;
-(BOOL)addObjects:(id)arg1 toArrayAtKeyPath:(id)arg2 ;
-(BOOL)removeObjects:(id)arg1 fromArrayAtKeyPath:(id)arg2 ;
-(BOOL)addObjects:(id)arg1 andRemoveObjects:(id)arg2 fromArrayAtKeyPath:(id)arg3 ;
-(void)setRegistrations:(NSMutableDictionary *)arg1 ;
-(id)valuesForKeyPaths:(id)arg1 inContextsMatchingPredicate:(id)arg2 ;
-(id)valuesForKeyPaths:(id)arg1 ;
-(void)activateDevices:(id)arg1 remoteUserContextProxySourceDeviceUUID:(id)arg2 ;
-(void)deactivateDevices:(id)arg1 remoteUserContextProxySourceDeviceUUID:(id)arg2 ;
-(void)handleContextualChange:(id)arg1 info:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)handleRegistrationCompleted:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)unprotectedSetUpXPCConnectionWithEndpoint:(id)arg1 ;
-(void)subscribeToEventStreams;
-(void)handleMDCSEvent:(id)arg1 ;
-(void)handleNotificationEvent:(id)arg1 ;
-(void)handleFetchPropertiesEvent:(id)arg1 ;
-(void)handleSubscribeToContextValueNotificationsEvent:(id)arg1 ;
-(void)handleUnsubscribeFromContextValueNotificationsEvent:(id)arg1 ;
-(void)handleKeepAliveEvent:(id)arg1 ;
-(void)handleFetchProxySourceDeviceUUIDEvent:(id)arg1 ;
-(void)handleRequestActivateDevicesEvent:(id)arg1 ;
-(id)objectForContextualKeyPath:(id)arg1 synchronous:(BOOL)arg2 responseQueue:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(id)defaultCallbackQueue;
-(id)cachedValueIfClientHasRegistrationsForKeyPath:(id)arg1 ;
-(void)setCachedValueIfClientHasRegistrations:(id)arg1 forKeyPath:(id)arg2 ;
-(id)lastModifiedDateForContextualKeyPath:(id)arg1 synchronous:(BOOL)arg2 responseQueue:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)retryTimes:(int)arg1 block:(/*^block*/id)arg2 ;
-(void)addKeyPathsWithRegistrationsForAnyChangeFromRegistration:(id)arg1 ;
-(void)removeKeyPathsWithRegistrationsForAnyChangeFromRegistration:(id)arg1 ;
-(void)cleanupInternalReferencesToRegistration:(id)arg1 ;
-(void)clearCacheForKeyPathsWithFireOnChangeRegistrations:(id)arg1 ;
-(BOOL)setObject:(id)arg1 forContextualKeyPath:(id)arg2 synchronous:(BOOL)arg3 responseQueue:(id)arg4 withCompletion:(/*^block*/id)arg5 ;
-(BOOL)addObjects:(id)arg1 toArrayAtKeyPath:(id)arg2 synchronous:(BOOL)arg3 responseQueue:(id)arg4 withCompletion:(/*^block*/id)arg5 ;
-(BOOL)removeObjects:(id)arg1 fromArrayAtKeyPath:(id)arg2 synchronous:(BOOL)arg3 responseQueue:(id)arg4 withCompletion:(/*^block*/id)arg5 ;
-(BOOL)addObjects:(id)arg1 andRemoveObjects:(id)arg2 fromArrayAtKeyPath:(id)arg3 synchronous:(BOOL)arg4 responseQueue:(id)arg5 withCompletion:(/*^block*/id)arg6 ;
-(id)valuesForKeyPaths:(id)arg1 synchronous:(BOOL)arg2 responseQueue:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)objectForContextualKeyPath:(id)arg1 responseQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)lastModifiedDateForContextualKeyPath:(id)arg1 responseQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)valuesForKeyPaths:(id)arg1 responseQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)setObject:(id)arg1 forContextualKeyPath:(id)arg2 responseQueue:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)addObjects:(id)arg1 toArrayAtKeyPath:(id)arg2 responseQueue:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)removeObjects:(id)arg1 fromArrayAtKeyPath:(id)arg2 responseQueue:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)addObjects:(id)arg1 andRemoveObjects:(id)arg2 fromArrayAtKeyPath:(id)arg3 responseQueue:(id)arg4 withCompletion:(/*^block*/id)arg5 ;
-(BOOL)setObject:(id)arg1 lastModifiedDate:(id)arg2 forContextualKeyPath:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)xpcEventQueue;
-(void)setXpcEventQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableDictionary *)keyPathToValues;
-(void)setKeyPathToValues:(NSMutableDictionary *)arg1 ;
-(NSCountedSet *)keyPathsWithRegistrationsForAnyChange;
-(void)setKeyPathsWithRegistrationsForAnyChange:(NSCountedSet *)arg1 ;
-(NSObject*<OS_dispatch_queue>)registrationCallbackQueue;
-(void)setRegistrationCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableDictionary *)openRegistrationTokens;
-(void)setOpenRegistrationTokens:(NSMutableDictionary *)arg1 ;
-(id<_CDRemoteUserContextServer>)remoteUserContextProxy;
-(void)setRemoteUserContextProxy:(id<_CDRemoteUserContextServer>)arg1 ;
@end

