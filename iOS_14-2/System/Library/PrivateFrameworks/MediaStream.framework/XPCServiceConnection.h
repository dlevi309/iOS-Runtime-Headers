/*
* Generated on Thursday, January 14, 2021 at 2:26:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
*/


@protocol XPCServiceConnectionDelegate, OS_xpc_object, NSObject, OS_dispatch_queue;
@class NSString, NSObject, XPCServiceListener;

@interface XPCServiceConnection : NSObject {

	NSString* _serviceName;
	id<XPCServiceConnectionDelegate> _delegate;
	NSObject*<OS_xpc_object> _client;
	id<NSObject> _context;
	XPCServiceListener* _serviceListener;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (nonatomic,readonly) NSObject*<OS_xpc_object> client;                             //@synthesize client=_client - In the implementation block
@property (assign,nonatomic,__weak) XPCServiceListener * serviceListener;                   //@synthesize serviceListener=_serviceListener - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                        //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain,readonly) NSString * serviceName;                               //@synthesize serviceName=_serviceName - In the implementation block
@property (assign,nonatomic,__weak) id<XPCServiceConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<NSObject> context;                                          //@synthesize context=_context - In the implementation block
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSObject*<OS_xpc_object>)client;
-(id<XPCServiceConnectionDelegate>)delegate;
-(id)debugDescription;
-(id<NSObject>)context;
-(XPCServiceListener *)serviceListener;
-(void)setDelegate:(id<XPCServiceConnectionDelegate>)arg1 ;
-(void)setServiceListener:(XPCServiceListener *)arg1 ;
-(NSString *)serviceName;
-(void)resume;
-(void)setContext:(id<NSObject>)arg1 ;
-(void)sendMessage:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)shutDownCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithServiceName:(id)arg1 client:(id)arg2 queue:(id)arg3 ;
-(void)workQueueHandleIncomingMessage:(id)arg1 ;
-(void)workQueueShutDown;
@end

