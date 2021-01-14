/*
* Generated on Thursday, January 14, 2021 at 2:26:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_handleApplicationWillEnterForeground:(id)arg1 ;
-(void)_handleApplicationDidEnterBackground:(id)arg1 ;
-(void)_keepAliveQueueTeardownConnection;
-(id)init;
-(NSObject*<OS_dispatch_queue>)_heartbeatQueue;
-(void)stopKeepAliveSession;
-(void)startKeepAliveSession;
-(NSObject*<OS_dispatch_source>)_heartbeatSource;
-(void)_keepAliveQueueCreateConnectionIfNecessary;
-(void)_teardownHeartbeat;
-(void)_teardownConnection;
-(void)_keepAliveQueueTeardownHeartbeat;
-(void)_setupConnectionIfNecessary;
-(void)_handleHeartbeatSourceEvent;
-(void)_setHeartbeatSource:(id)arg1 ;
-(void)sendCameraRollVisibilityChangedMessage:(BOOL)arg1 ;
-(void)_setConnection:(id)arg1 ;
-(NSObject*<OS_xpc_object>)_connection;
-(NSObject*<OS_dispatch_queue>)_keepAliveQueue;
-(void)dealloc;
-(void)_keepAliveQueueCreateHeartbeatIfNecessary;
-(void)_handleHeartbeatConnectionReply:(id)arg1 ;
@end

