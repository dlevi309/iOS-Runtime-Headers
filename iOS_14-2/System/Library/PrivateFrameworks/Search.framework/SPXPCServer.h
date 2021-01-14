/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
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
-(void)startListening;
-(BOOL)shutdown;
-(id)disconnectHandler;
-(void)setDisconnectHandler:(id)arg1 ;
-(void)_handleNewConnection:(id)arg1 qos:(unsigned)arg2 ;
-(id)initListenerWithServiceName:(id)arg1 onQueue:(id)arg2 qos:(unsigned)arg3 ;
-(id)firstConnectionBlock;
-(void)setFirstConnectionBlock:(id)arg1 ;
-(/*^block*/id)_handlerForMessageName:(id)arg1 ;
-(id)_highAvailabilityQueue;
-(void)setDefaultMessageHandler:(id)arg1 ;
-(id)initListenerWithServiceName:(id)arg1 ;
-(void)setHandlerForMessageName:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)defaultMessageHandler;
-(void)dealloc;
@end

