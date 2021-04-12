/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUI.framework/AccessibilityUI
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
-(id)init;
-(NSObject*<OS_xpc_object>)xpcConnection;
-(void)setXpcConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(BOOL)isConnected;
-(void)setConnected:(BOOL)arg1 ;
-(void)registerClient:(id)arg1 withIdentifier:(id)arg2 ;
-(NSHashTable *)stateObservers;
-(void)setStateObservers:(NSHashTable *)arg1 ;
-(void)registerConnectionStateObserver:(id)arg1 ;
-(void)unregisterConnectionStateObserver:(id)arg1 ;
-(void)unregisterClient:(id)arg1 withIdentifier:(id)arg2 ;
-(void)performBlockWithXPCConnection:(/*^block*/id)arg1 ;
-(void)setConnectionAccessQueue:(AXAccessQueue *)arg1 ;
-(void)setRegisteredClientsAccessQueue:(AXAccessQueue *)arg1 ;
-(void)setStateObserverQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(AXAccessQueue *)connectionAccessQueue;
-(id)_clientWithIdentifier:(id)arg1 ;
-(void)_broadcastConnectedStateChange;
-(AXAccessQueue *)registeredClientsAccessQueue;
-(NSMutableDictionary *)registeredClients;
-(void)setRegisteredClients:(NSMutableDictionary *)arg1 ;
-(NSObject*<OS_dispatch_queue>)stateObserverQueue;
@end

