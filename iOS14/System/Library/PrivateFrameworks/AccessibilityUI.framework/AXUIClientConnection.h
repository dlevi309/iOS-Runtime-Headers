/*
* Generated on Thursday, January 14, 2021 at 2:27:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUI.framework/AccessibilityUI
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject, AXAccessQueue, NSMutableDictionary, NSHashTable;

@interface AXUIClientConnection : NSObject {

	BOOL _connected;
	NSObject*<OS_xpc_object> _xpcConnection;
	AXAccessQueue* _connectionAccessQueue;
	NSMutableDictionary* _registeredClients;
	AXAccessQueue* _registeredClientsAccessQueue;
	NSHashTable* _stateObservers;
	NSObject*<OS_dispatch_queue> _stateObserverQueue;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> xpcConnection;                       //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,retain) AXAccessQueue * connectionAccessQueue;                        //@synthesize connectionAccessQueue=_connectionAccessQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * registeredClients;                      //@synthesize registeredClients=_registeredClients - In the implementation block
@property (nonatomic,retain) AXAccessQueue * registeredClientsAccessQueue;                 //@synthesize registeredClientsAccessQueue=_registeredClientsAccessQueue - In the implementation block
@property (assign,getter=isConnected,nonatomic) BOOL connected;                            //@synthesize connected=_connected - In the implementation block
@property (nonatomic,retain) NSHashTable * stateObservers;                                 //@synthesize stateObservers=_stateObservers - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> stateObserverQueue;              //@synthesize stateObserverQueue=_stateObserverQueue - In the implementation block
+(id)sharedClientConnection;
-(BOOL)isConnected;
-(void)setXpcConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(NSObject*<OS_xpc_object>)xpcConnection;
-(void)setConnected:(BOOL)arg1 ;
-(void)unregisterClient:(id)arg1 withIdentifier:(id)arg2 ;
-(id)init;
-(void)_broadcastConnectedStateChange;
-(void)unregisterConnectionStateObserver:(id)arg1 ;
-(void)setStateObserverQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setStateObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)stateObservers;
-(NSObject*<OS_dispatch_queue>)stateObserverQueue;
-(AXAccessQueue *)connectionAccessQueue;
-(id)_clientWithIdentifier:(id)arg1 ;
-(AXAccessQueue *)registeredClientsAccessQueue;
-(void)registerConnectionStateObserver:(id)arg1 ;
-(void)setConnectionAccessQueue:(AXAccessQueue *)arg1 ;
-(void)setRegisteredClientsAccessQueue:(AXAccessQueue *)arg1 ;
-(void)registerClient:(id)arg1 withIdentifier:(id)arg2 ;
-(NSMutableDictionary *)registeredClients;
-(void)setRegisteredClients:(NSMutableDictionary *)arg1 ;
-(void)performBlockWithXPCConnection:(/*^block*/id)arg1 ;
@end

