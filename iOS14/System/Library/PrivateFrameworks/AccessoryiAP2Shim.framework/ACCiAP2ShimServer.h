/*
* Generated on Thursday, January 14, 2021 at 2:26:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessoryiAP2Shim.framework/AccessoryiAP2Shim
*/


@protocol OS_dispatch_queue, OS_xpc_object;
#import <AccessoryiAP2Shim/AccessoryiAP2Shim-Structs.h>
@class NSMutableDictionary, NSObject, NSLock;

@interface ACCiAP2ShimServer : NSObject {

	BOOL _isShuttingDown;
	struct {
		unsigned deathBecomesUs : 1;
		unsigned serverExiting : 1;
		unsigned reserved : 30;
	}  _serverFlags;
	int _iap2AvailableNotifyToken;
	NSMutableDictionary* _delegateList;
	NSMutableDictionary* _accessoryViaKeyUIDList;
	NSMutableDictionary* _accessoryViaConnectionIDList;
	NSObject*<OS_dispatch_queue> _listQueue;
	NSObject*<OS_xpc_object> _listener;
	NSObject*<OS_dispatch_queue> _iap2dhighPriorityRootQueue;
	NSObject*<OS_dispatch_queue> _internalListenerQueue;
	NSMutableDictionary* _clients;
	NSLock* _clientLock;

}

@property (nonatomic,retain) NSMutableDictionary * delegateList;                                     //@synthesize delegateList=_delegateList - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * accessoryViaKeyUIDList;                           //@synthesize accessoryViaKeyUIDList=_accessoryViaKeyUIDList - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * accessoryViaConnectionIDList;                     //@synthesize accessoryViaConnectionIDList=_accessoryViaConnectionIDList - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> listQueue;                               //@synthesize listQueue=_listQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> listener;                                    //@synthesize listener=_listener - In the implementation block
@property (nonatomic,readonly) BOOL isShuttingDown;                                                  //@synthesize isShuttingDown=_isShuttingDown - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> iap2dhighPriorityRootQueue;              //@synthesize iap2dhighPriorityRootQueue=_iap2dhighPriorityRootQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> internalListenerQueue;                   //@synthesize internalListenerQueue=_internalListenerQueue - In the implementation block
@property (readonly) _serverFlags serverFlags;                                                       //@synthesize serverFlags=_serverFlags - In the implementation block
@property (readonly) NSMutableDictionary * clients;                                                  //@synthesize clients=_clients - In the implementation block
@property (readonly) NSLock * clientLock;                                                            //@synthesize clientLock=_clientLock - In the implementation block
@property (readonly) int iap2AvailableNotifyToken;                                                   //@synthesize iap2AvailableNotifyToken=_iap2AvailableNotifyToken - In the implementation block
+(id)sharedInstance;
+(id)stringForClientID:(unsigned)arg1 ;
+(void)postiAP2AppNotificationType:(id)arg1 notifyDict:(id)arg2 ;
+(void)resetServerState;
+(void)postiAP2NotificationType:(id)arg1 notifyDict:(id)arg2 ;
+(void)postNSDistributeNotificationType:(id)arg1 notifyDict:(id)arg2 ;
+(void)postNotifydNotificationType:(id)arg1 ;
-(NSMutableDictionary *)clients;
-(void)_stopServer;
-(void)notifyEAClient:(id)arg1 ofAccessoryEvent:(const char*)arg2 accessory:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)listQueue;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(unsigned)addClientWithCapabilities:(unsigned)arg1 auditToken:(SCD_Struct_AC1)arg2 currentClientID:(unsigned)arg3 xpcConnection:(id)arg4 eaProtocols:(id)arg5 notifyOfAlreadyConnectedAccessories:(BOOL)arg6 andBundleId:(id)arg7 ;
-(void)notifyEAClientsOfAccessoryReconnection:(id)arg1 ;
-(id)findAccessoryForConnectionID:(unsigned)arg1 ;
-(id)init;
-(NSMutableDictionary *)accessoryViaKeyUIDList;
-(void)iterateDelegatesAsync:(/*^block*/id)arg1 ;
-(void)_takeClientAssertionsForAccessoryConnection;
-(void)_pollForDeathAfterPromptCompletes;
-(void)notifyEAClientsOfAccessoryConnection:(id)arg1 ;
-(id)findAccessoryForConnectionID:(unsigned)arg1 andKeyTag:(id)arg2 ;
-(void)addAccessory:(id)arg1 ;
-(void)removeAccessory:(id)arg1 ;
-(NSMutableDictionary *)accessoryViaConnectionIDList;
-(void)startServer;
-(void)_addAccessory:(id)arg1 ;
-(id)findClientWithID:(unsigned)arg1 ;
-(NSObject*<OS_xpc_object>)listener;
-(id)_findAccessoryForAccessoryUID:(id)arg1 andKeyTag:(id)arg2 ;
-(void)_startServer;
-(void)setDelegateList:(NSMutableDictionary *)arg1 ;
-(void)removeAllClients;
-(unsigned)generateClientID;
-(int)iap2AvailableNotifyToken;
-(id)_findAccessoryForConnectionID:(unsigned)arg1 ;
-(void)iterateDelegatesSync:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)delegateList;
-(void)notifyEAClientsOfAccessoryEvent:(const char*)arg1 accessory:(id)arg2 ;
-(void)stopServer;
-(BOOL)isShuttingDown;
-(void)_removeAccessory:(id)arg1 ;
-(void)_addDelegate:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)internalListenerQueue;
-(void)setAccessoryViaKeyUIDList:(NSMutableDictionary *)arg1 ;
-(void)_iterateAccessories:(/*^block*/id)arg1 ;
-(void)_attachAccessory:(id)arg1 ;
-(NSLock *)clientLock;
-(void)notifyEAClientsOfAccessoryDisconnection:(id)arg1 ;
-(id)findAccessoryForAccessoryUID:(id)arg1 andKeyTag:(id)arg2 ;
-(BOOL)processXPCMessage:(id)arg1 connection:(id)arg2 ;
-(void)_removeDelegate:(id)arg1 ;
-(void)setAccessoryViaConnectionIDList:(NSMutableDictionary *)arg1 ;
-(void)_detachAccessory:(id)arg1 ;
-(_serverFlags)serverFlags;
-(id)_findAccessoryForConnectionID:(unsigned)arg1 andKeyTag:(id)arg2 ;
-(void)processDetachXPCConnection:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)iap2dhighPriorityRootQueue;
-(id)findClientWithXPCConnection:(id)arg1 ;
-(void)iterateAccessoriesAsync:(/*^block*/id)arg1 ;
-(void)removeClientWithID:(unsigned)arg1 ;
-(void)_takeClientAssertionsForAccessoryDisconnection;
-(void)removeClientForXPCConnection:(id)arg1 ;
-(void)_iterateDelegates:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)_resetServerState;
-(void)iterateAccessoriesSync:(/*^block*/id)arg1 ;
@end

