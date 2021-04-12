/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
*/


@protocol OS_xpc_object, OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMutableSet, NSMutableDictionary, NSSet;

@interface ATXPCServer : NSObject {

	NSObject*<OS_xpc_object> _conn;
	NSMutableSet* _connections;
	NSMutableDictionary* _handlerMap;
	/*^block*/id _lockdownHandler;
	/*^block*/id _disconnectHandler;
	/*^block*/id _shutdownHandler;
	/*^block*/id _defaultMessageHandler;
	NSObject*<OS_dispatch_queue> _timerQueue;
	NSObject*<OS_dispatch_source> _idleTimerSource;
	BOOL _timerHasFiredSinceLastMessage;

}

@property (nonatomic,copy) id lockdownHandler;                    //@synthesize lockdownHandler=_lockdownHandler - In the implementation block
@property (nonatomic,copy) id defaultMessageHandler;              //@synthesize defaultMessageHandler=_defaultMessageHandler - In the implementation block
@property (nonatomic,copy) id disconnectHandler;                  //@synthesize disconnectHandler=_disconnectHandler - In the implementation block
@property (nonatomic,copy) id shutdownHandler;                    //@synthesize shutdownHandler=_shutdownHandler - In the implementation block
@property (nonatomic,readonly) NSSet * connections;               //@synthesize connections=_connections - In the implementation block
-(void)dealloc;
-(id)shutdownHandler;
-(void)setShutdownHandler:(id)arg1 ;
-(NSSet *)connections;
-(id)_connections;
-(void)_handleNewConnection:(id)arg1 ;
-(void)setDisconnectHandler:(id)arg1 ;
-(id)disconnectHandler;
-(id)lockdownHandler;
-(void)setLockdownHandler:(id)arg1 ;
-(void)_resetMessageFlag;
-(/*^block*/id)_handlerForMessageName:(id)arg1 ;
-(id)_highAvailabilityQueue;
-(void)setDefaultMessageHandler:(id)arg1 ;
-(BOOL)_doingWork;
-(void)_rescheduleIdleTimerSourceWithInterval:(double)arg1 ;
-(id)initListenerWithServiceName:(id)arg1 ;
-(void)setHandlerForMessageName:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_runShutdownHandler;
-(void)setIdleTimerInterval:(double)arg1 ;
-(id)defaultMessageHandler;
@end

