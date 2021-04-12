/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
*/

#import <libobjc.A.dylib/_CDUserContextServer.h>

@protocol OS_dispatch_queue;
@class NSObject, _CDUserContextService, _CDInMemoryUserContext, NSXPCConnection, NSMutableSet, NSMutableDictionary, NSString;

@interface _CDUserContextServerClient : NSObject <_CDUserContextServer> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _activateMonitorQueue;
	_CDUserContextService* _service;
	_CDInMemoryUserContext* _userContext;
	NSXPCConnection* _clientConnection;
	NSMutableSet* _wakingRegistrations;
	NSMutableSet* _nonWakingRegistration;
	NSMutableDictionary* _devicesToActivateByRemoteUserContextProxySourceDeviceUUID;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                                           //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> activateMonitorQueue;                                            //@synthesize activateMonitorQueue=_activateMonitorQueue - In the implementation block
@property (nonatomic,retain) _CDUserContextService * service;                                                              //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) _CDInMemoryUserContext * userContext;                                                         //@synthesize userContext=_userContext - In the implementation block
@property (nonatomic,retain) NSXPCConnection * clientConnection;                                                           //@synthesize clientConnection=_clientConnection - In the implementation block
@property (nonatomic,retain) NSMutableSet * wakingRegistrations;                                                           //@synthesize wakingRegistrations=_wakingRegistrations - In the implementation block
@property (nonatomic,retain) NSMutableSet * nonWakingRegistration;                                                         //@synthesize nonWakingRegistration=_nonWakingRegistration - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * devicesToActivateByRemoteUserContextProxySourceDeviceUUID;              //@synthesize devicesToActivateByRemoteUserContextProxySourceDeviceUUID=_devicesToActivateByRemoteUserContextProxySourceDeviceUUID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)clientOfService:(id)arg1 withConnection:(id)arg2 andContext:(id)arg3 ;
+(id)serverInterface;
+(id)clientInterface;
-(NSXPCConnection *)clientConnection;
-(void)setClientConnection:(NSXPCConnection *)arg1 ;
-(void)deregisterCallback:(id)arg1 ;
-(void)registerCallback:(id)arg1 ;
-(_CDInMemoryUserContext *)userContext;
-(void)activateDevices:(id)arg1 remoteUserContextProxySourceDeviceUUID:(id)arg2 ;
-(id)remoteDeviceIDsForRemoteUserContextProxySourceDeviceUUID:(id)arg1 ;
-(NSMutableDictionary *)devicesToActivateByRemoteUserContextProxySourceDeviceUUID;
-(id)initForService:(id)arg1 withConnection:(id)arg2 andContext:(id)arg3 ;
-(void)propertiesOfPath:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_valueForRemotePath:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)propertiesOfRemotePath:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)remoteDevicesForRemoteUserContextProxySourceDeviceUUID:(id)arg1 ;
-(id)remoteUserContextProxySourceDeviceUUIDForKeyPath:(id)arg1 ;
-(void)setWakingRegistrations:(NSMutableSet *)arg1 ;
-(id)deviceIDsForDeviceTypes:(unsigned long long)arg1 ;
-(BOOL)isMDCSNeededForKeyPathInKeyPaths:(id)arg1 ;
-(void)proxyTokenDidUpdate;
-(void)addObjects:(id)arg1 toArrayAtPath:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)remoteDevices;
-(BOOL)isMDCSNeededForKeyPath:(id)arg1 ;
-(void)deactivateDevices:(id)arg1 remoteUserContextProxySourceDeviceUUID:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)activateMonitorQueue;
-(void)unsubscribeFromContextValueNotificationsWithRegistration:(id)arg1 deviceIDs:(id)arg2 ;
-(void)setActivateMonitorQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)keyPathsSortedByDeviceID:(id)arg1 ;
-(id)deviceIDsSortedByRemoteUserContextProxySourceDeviceUUIDFromDeviceIDs:(id)arg1 ;
-(void)_propertiesOfPath:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)valuesForPaths:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)remoteDeviceIDs;
-(void)deregisterAllCallbacks:(BOOL)arg1 ;
-(void)valuesForPaths:(id)arg1 inContextsMatching:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_propertiesOfRemotePath:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_hasKnowledgeOfPath:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setService:(_CDUserContextService *)arg1 ;
-(void)_valuesForPaths:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setDevicesToActivateByRemoteUserContextProxySourceDeviceUUID:(NSMutableDictionary *)arg1 ;
-(void)setNonWakingRegistration:(NSMutableSet *)arg1 ;
-(void)addObjects:(id)arg1 andRemoveObjects:(id)arg2 forArrayAtPath:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)setUserContext:(_CDInMemoryUserContext *)arg1 ;
-(void)fetchPropertiesOfRemoteKeyPaths:(id)arg1 remoteUserContextProxySourceDeviceUUID:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_valueForPath:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)handlePreviouslyFiredRegistration:(id)arg1 info:(id)arg2 ;
-(void)setObject:(id)arg1 lastModifiedDate:(id)arg2 forContextualKeyPath:(id)arg3 handler:(/*^block*/id)arg4 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)performRegistrationCallbackWithRegistration:(id)arg1 info:(id)arg2 ;
-(void)setObject:(id)arg1 forPath:(id)arg2 handler:(/*^block*/id)arg3 ;
-(NSMutableSet *)wakingRegistrations;
-(void)fetchPropertiesOfRemoteKeyPaths:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)removeObjects:(id)arg1 fromArrayAtPath:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)remoteUserContextProxySourceDeviceUUIDByDeviceID;
-(void)evaluatePredicate:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)subscribeToContextValueNotificationsWithRegistration:(id)arg1 deviceIDs:(id)arg2 ;
-(void)subscribeToDeviceStatusChangeNotificationsForDeviceTypes:(unsigned long long)arg1 ;
-(void)hasKnowledgeOfPath:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)removeObjectsMatchingPredicate:(id)arg1 fromArrayAtPath:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableSet *)nonWakingRegistration;
-(_CDUserContextService *)service;
-(void)dealloc;
@end

