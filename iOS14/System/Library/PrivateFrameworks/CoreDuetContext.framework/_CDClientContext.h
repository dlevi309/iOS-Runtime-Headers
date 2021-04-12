/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)userContextWithEndpoint:(id)arg1 ;
+(id)clientInterface;
-(BOOL)evaluatePredicate:(id)arg1 ;
-(id)removeObjectsMatchingPredicate:(id)arg1 fromArrayAtKeyPath:(id)arg2 ;
-(void)setXpcQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)hasKnowledgeOfContextualKeyPath:(id)arg1 ;
-(BOOL)addObjects:(id)arg1 toArrayAtKeyPath:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)xpcQueue;
-(id)lastModifiedDateForContextualKeyPath:(id)arg1 ;
-(id)valuesForKeyPaths:(id)arg1 inContextsMatchingPredicate:(id)arg2 ;
-(id)objectForContextualKeyPath:(id)arg1 ;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(void)deregisterCallback:(id)arg1 ;
-(id)localContext;
-(void)registerCallback:(id)arg1 ;
-(BOOL)setObject:(id)arg1 forContextualKeyPath:(id)arg2 ;
-(void)activateDevices:(id)arg1 remoteUserContextProxySourceDeviceUUID:(id)arg2 ;
-(id)valuesForKeyPaths:(id)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(NSCountedSet *)keyPathsWithRegistrationsForAnyChange;
-(NSMutableDictionary *)registrations;
-(void)setRemoteUserContextProxy:(id<_CDRemoteUserContextServer>)arg1 ;
-(void)addObjects:(id)arg1 andRemoveObjects:(id)arg2 fromArrayAtKeyPath:(id)arg3 responseQueue:(id)arg4 withCompletion:(/*^block*/id)arg5 ;
-(NSObject*<OS_os_log>)log;
-(BOOL)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)handleRegistrationCompleted:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)currentConnection;
-(void)removeObjects:(id)arg1 fromArrayAtKeyPath:(id)arg2 responseQueue:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(id)initWithEndpoint:(id)arg1 ;
-(void)setEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(BOOL)setObject:(id)arg1 forContextualKeyPath:(id)arg2 synchronous:(BOOL)arg3 responseQueue:(id)arg4 withCompletion:(/*^block*/id)arg5 ;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(void)removeObjectsMatchingPredicate:(id)arg1 fromArrayAtKeyPath:(id)arg2 responseQueue:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(NSXPCListenerEndpoint *)endpoint;
-(void)handleKeepAliveEvent:(id)arg1 ;
-(void)setXpcEventQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableDictionary *)openRegistrationTokens;
-(id)lastModifiedDateForContextualKeyPath:(id)arg1 synchronous:(BOOL)arg2 responseQueue:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)deactivateDevices:(id)arg1 remoteUserContextProxySourceDeviceUUID:(id)arg2 ;
-(void)valuesForKeyPaths:(id)arg1 responseQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)addKeyPathsWithRegistrationsForAnyChangeFromRegistration:(id)arg1 ;
-(void)setInterrupted:(BOOL)arg1 ;
-(void)setObject:(id)arg1 forContextualKeyPath:(id)arg2 responseQueue:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)unprotectedSetUpXPCConnectionWithEndpoint:(id)arg1 ;
-(BOOL)addObjects:(id)arg1 toArrayAtKeyPath:(id)arg2 synchronous:(BOOL)arg3 responseQueue:(id)arg4 withCompletion:(/*^block*/id)arg5 ;
-(BOOL)removeObjects:(id)arg1 fromArrayAtKeyPath:(id)arg2 ;
-(BOOL)interrupted;
-(void)lastModifiedDateForContextualKeyPath:(id)arg1 responseQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(BOOL)setObject:(id)arg1 lastModifiedDate:(id)arg2 forContextualKeyPath:(id)arg3 ;
-(void)objectForContextualKeyPath:(id)arg1 responseQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)addObjects:(id)arg1 toArrayAtKeyPath:(id)arg2 responseQueue:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)setCachedValueIfClientHasRegistrations:(id)arg1 forKeyPath:(id)arg2 ;
-(void)handleContextualChange:(id)arg1 info:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)cleanupInternalReferencesToRegistration:(id)arg1 ;
-(void)handleNotificationEvent:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)xpcEventQueue;
-(void)setKeyPathToValues:(NSMutableDictionary *)arg1 ;
-(void)handleSubscribeToContextValueNotificationsEvent:(id)arg1 ;
-(id<_CDRemoteUserContextServer>)remoteUserContextProxy;
-(void)handleFetchProxySourceDeviceUUIDEvent:(id)arg1 ;
-(BOOL)addObjects:(id)arg1 andRemoveObjects:(id)arg2 fromArrayAtKeyPath:(id)arg3 synchronous:(BOOL)arg4 responseQueue:(id)arg5 withCompletion:(/*^block*/id)arg6 ;
-(void)handleRequestActivateDevicesEvent:(id)arg1 ;
-(void)handleMDCSEvent:(id)arg1 ;
-(void)clearCacheForKeyPathsWithFireOnChangeRegistrations:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSMutableDictionary *)keyPathToValues;
-(void)handleUnsubscribeFromContextValueNotificationsEvent:(id)arg1 ;
-(BOOL)removeObjects:(id)arg1 fromArrayAtKeyPath:(id)arg2 synchronous:(BOOL)arg3 responseQueue:(id)arg4 withCompletion:(/*^block*/id)arg5 ;
-(void)setRegistrationCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setOpenRegistrationTokens:(NSMutableDictionary *)arg1 ;
-(id)objectForContextualKeyPath:(id)arg1 synchronous:(BOOL)arg2 responseQueue:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)retryTimes:(int)arg1 block:(/*^block*/id)arg2 ;
-(id)cachedValueIfClientHasRegistrationsForKeyPath:(id)arg1 ;
-(id)removeObjectsMatchingPredicate:(id)arg1 fromArrayAtKeyPath:(id)arg2 synchronous:(BOOL)arg3 responseQueue:(id)arg4 withCompletion:(/*^block*/id)arg5 ;
-(BOOL)addObjects:(id)arg1 andRemoveObjects:(id)arg2 fromArrayAtKeyPath:(id)arg3 ;
-(void)setRegistrations:(NSMutableDictionary *)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)removeKeyPathsWithRegistrationsForAnyChangeFromRegistration:(id)arg1 ;
-(void)handleFetchPropertiesEvent:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)registrationCallbackQueue;
-(void)subscribeToEventStreams;
-(id)defaultCallbackQueue;
-(id)valuesForKeyPaths:(id)arg1 synchronous:(BOOL)arg2 responseQueue:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)dealloc;
-(void)setKeyPathsWithRegistrationsForAnyChange:(NSCountedSet *)arg1 ;
@end

