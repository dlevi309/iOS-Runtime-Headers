/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject, NSMutableSet, NSMutableDictionary;

@interface SPXPCServer : NSObject {

	double _idleTimerInterval;
	BOOL _shutdown;
	NSObject*<OS_xpc_object> _conn;
	NSMutableSet* _connections;
	NSMutableDictionary* _handlerMap;
	NSObject*<OS_dispatch_queue> _connectionsQueue;
	NSObject*<OS_dispatch_queue> _eventQueue;
	NSObject*<OS_dispatch_queue> _timerQueue;
	unsigned _qos;
	BOOL hadConnection;
	/*^block*/id _disconnectHandler;
	/*^block*/id _defaultMessageHandler;
	/*^block*/id _firstConnectionBlock;

}

@property (nonatomic,copy) id disconnectHandler;                  //@synthesize disconnectHandler=_disconnectHandler - In the implementation block
@property (nonatomic,copy) id defaultMessageHandler;              //@synthesize defaultMessageHandler=_defaultMessageHandler - In the implementation block
@property (nonatomic,copy) id firstConnectionBlock;               //@synthesize firstConnectionBlock=_firstConnectionBlock - In the implementation block
-(void)dealloc;
-(void)startListening;
-(BOOL)shutdown;
-(void)setDisconnectHandler:(id)arg1 ;
-(id)disconnectHandler;
-(/*^block*/id)_handlerForMessageName:(id)arg1 ;
-(id)_highAvailabilityQueue;
-(void)setDefaultMessageHandler:(id)arg1 ;
-(id)initListenerWithServiceName:(id)arg1 ;
-(void)setHandlerForMessageName:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)defaultMessageHandler;
-(void)_handleNewConnection:(id)arg1 qos:(unsigned)arg2 ;
-(id)initListenerWithServiceName:(id)arg1 onQueue:(id)arg2 qos:(unsigned)arg3 ;
-(id)firstConnectionBlock;
-(void)setFirstConnectionBlock:(id)arg1 ;
@end

