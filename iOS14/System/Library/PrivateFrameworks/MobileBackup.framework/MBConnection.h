/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
*/


@protocol OS_xpc_object, OS_dispatch_queue, MBConnectionHandler;
@class NSObject, NSString;

@interface MBConnection : NSObject {

	Ai _pid;
	NSObject*<OS_xpc_object> _xpcConnection;
	NSObject*<OS_dispatch_queue> _queue;
	id<MBConnectionHandler> _messageHandler;
	NSString* _processName;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> xpcConnection;                     //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                         //@synthesize queue=_queue - In the implementation block
@property (retain) NSString * processName;                                               //@synthesize processName=_processName - In the implementation block
@property (assign,nonatomic,__weak) id<MBConnectionHandler> messageHandler;              //@synthesize messageHandler=_messageHandler - In the implementation block
-(void)setProcessName:(NSString *)arg1 ;
-(void)setXpcConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(NSObject*<OS_xpc_object>)xpcConnection;
-(void)suspend;
-(void)sendMessage:(id)arg1 ;
-(NSString *)processName;
-(id<MBConnectionHandler>)messageHandler;
-(id)initWithServiceName:(id)arg1 ;
-(void)_handleXPCError:(id)arg1 ;
-(id)description;
-(void)_handleXPCEvent:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)sendMessage:(id)arg1 barrierBlock:(/*^block*/id)arg2 ;
-(id)sendMessageWithReplyAndSync:(id)arg1 error:(id*)arg2 ;
-(void)_refreshProcessInfoWithXPCConnection:(id)arg1 ;
-(void)cancel;
-(void)_setEventHandlerForXPCConnection:(id)arg1 ;
-(void)resume;
-(id)initWithXPCConnection:(id)arg1 queue:(id)arg2 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setMessageHandler:(id<MBConnectionHandler>)arg1 ;
@end

