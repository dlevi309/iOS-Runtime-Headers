/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@protocol OS_xpc_object, OS_dispatch_queue, OS_dispatch_source;
@class NSObject;

@interface CAMKeepAliveController : NSObject {

	NSObject*<OS_xpc_object> __connection;
	NSObject*<OS_dispatch_queue> __keepAliveQueue;
	NSObject*<OS_dispatch_source> __heartbeatSource;
	NSObject*<OS_dispatch_queue> __heartbeatQueue;

}

@property (setter=_setConnection:,nonatomic,retain) NSObject*<OS_xpc_object> _connection;                             //@synthesize _connection=__connection - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _keepAliveQueue;                                          //@synthesize _keepAliveQueue=__keepAliveQueue - In the implementation block
@property (setter=_setHeartbeatSource:,nonatomic,retain) NSObject*<OS_dispatch_source> _heartbeatSource;              //@synthesize _heartbeatSource=__heartbeatSource - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _heartbeatQueue;                                          //@synthesize _heartbeatQueue=__heartbeatQueue - In the implementation block
-(id)init;
-(void)dealloc;
-(NSObject*<OS_xpc_object>)_connection;
-(void)_setConnection:(id)arg1 ;
-(void)_handleApplicationWillEnterForeground:(id)arg1 ;
-(void)_handleApplicationDidEnterBackground:(id)arg1 ;
-(void)startKeepAliveSession;
-(void)sendCameraRollVisibilityChangedMessage:(BOOL)arg1 ;
-(void)stopKeepAliveSession;
-(void)_setupConnectionIfNecessary;
-(void)_teardownConnection;
-(NSObject*<OS_dispatch_queue>)_keepAliveQueue;
-(void)_keepAliveQueueCreateConnectionIfNecessary;
-(void)_keepAliveQueueCreateHeartbeatIfNecessary;
-(void)_keepAliveQueueTeardownConnection;
-(void)_teardownHeartbeat;
-(NSObject*<OS_dispatch_source>)_heartbeatSource;
-(NSObject*<OS_dispatch_queue>)_heartbeatQueue;
-(void)_handleHeartbeatConnectionReply:(id)arg1 ;
-(void)_handleHeartbeatSourceEvent;
-(void)_setHeartbeatSource:(id)arg1 ;
-(void)_keepAliveQueueTeardownHeartbeat;
@end

