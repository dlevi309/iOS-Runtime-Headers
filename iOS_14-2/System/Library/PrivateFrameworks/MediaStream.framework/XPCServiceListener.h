/*
* Generated on Thursday, January 14, 2021 at 2:26:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
*/


@protocol XPCServiceListenerDelegate, OS_dispatch_queue, OS_xpc_object;
@class NSString, NSObject, NSMutableSet;

@interface XPCServiceListener : NSObject {

	NSString* _serviceName;
	id<XPCServiceListenerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_xpc_object> _listener;
	NSMutableSet* _serviceConnections;
	unsigned long long _clientCount;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                 //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> listener;                      //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) NSMutableSet * serviceConnections;                      //@synthesize serviceConnections=_serviceConnections - In the implementation block
@property (assign,nonatomic) unsigned long long clientCount;                         //@synthesize clientCount=_clientCount - In the implementation block
@property (nonatomic,retain,readonly) NSString * serviceName;                        //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,readonly) id<XPCServiceListenerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id<XPCServiceListenerDelegate>)delegate;
-(void)start;
-(id)debugDescription;
-(id)initWithServiceName:(id)arg1 queue:(id)arg2 delegate:(id)arg3 ;
-(unsigned long long)clientCount;
-(void)setClientCount:(unsigned long long)arg1 ;
-(NSObject*<OS_xpc_object>)listener;
-(void)setListener:(NSObject*<OS_xpc_object>)arg1 ;
-(NSString *)serviceName;
-(void)shutDownCompletionBlock:(/*^block*/id)arg1 ;
-(void)serviceConnectionDidDisconnect:(id)arg1 ;
-(void)_workQueueShutDownServiceConnections:(id)arg1 index:(unsigned long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)workQueueHandleIncomingConnection:(id)arg1 ;
-(NSMutableSet *)serviceConnections;
-(void)setServiceConnections:(NSMutableSet *)arg1 ;
@end

