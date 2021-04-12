/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
*/


@protocol OS_xpc_object, OS_dispatch_queue, BSServiceDispatchingQueue;
#import <BoardServices/BoardServices-Structs.h>
@class BSObjCProtocol, BSXPCServiceConnection, NSObject;

@interface BSXPCServiceConnectionProxy : NSObject {

	BSObjCProtocol* _remoteProtocol;
	BSObjCProtocol* _localProtocol;
	BSXPCServiceConnection* _connection;
	NSObject*<OS_xpc_object> _XPCConnection;
	NSObject*<OS_dispatch_queue> _XPCConnectionTargetQueue;
	id<BSServiceDispatchingQueue> _replyQueue;

}

@property (nonatomic,retain) BSObjCProtocol * localProtocol;                                     //@synthesize localProtocol=_localProtocol - In the implementation block
@property (nonatomic,retain) BSObjCProtocol * remoteProtocol;                                    //@synthesize remoteProtocol=_remoteProtocol - In the implementation block
@property (nonatomic,retain) BSXPCServiceConnection * connection;                                //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> XPCConnection;                             //@synthesize XPCConnection=_XPCConnection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> XPCConnectionTargetQueue;              //@synthesize XPCConnectionTargetQueue=_XPCConnectionTargetQueue - In the implementation block
@property (nonatomic,retain) id<BSServiceDispatchingQueue> replyQueue;                           //@synthesize replyQueue=_replyQueue - In the implementation block
+(void)createImplementationForProtocol:(id)arg1 ;
+(void)invokeMethod:(id)arg1 onTarget:(id)arg2 withMessage:(id)arg3 forConnection:(id)arg4 ;
+(id)concreteArgumentsForArguments:(id)arg1 ;
+(void)encodeArguments:(id)arg1 inArgs:(n[10@])arg2 toMessage:(id)arg3 forConnection:(id)arg4 ;
+(void)decodeArguments:(id)arg1 outArgs:(out id)arg2 fromMessage:(id)arg3 forConnection:(id)arg4 ;
+(SCD_Struct_BS1)invokeMethod:(id)arg1 onTarget:(id)arg2 withObjects:(n[10@])arg3 ;
+(id)proxyForConnection:(id)arg1 withInterface:(id)arg2 activeXPCConnection:(id)arg3 xpcConnectionTargetQueue:(id)arg4 replyQueue:(id)arg5 ;
+(void)invokeReplyBlock:(/*^block*/id)arg1 withArguments:(id)arg2 andPayload:(id)arg3 error:(id)arg4 forConnection:(id)arg5 ;
-(void)dealloc;
-(BSXPCServiceConnection *)connection;
-(void)setConnection:(BSXPCServiceConnection *)arg1 ;
-(NSObject*<OS_xpc_object>)XPCConnection;
-(void)setXPCConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(void)setLocalProtocol:(BSObjCProtocol *)arg1 ;
-(void)setRemoteProtocol:(BSObjCProtocol *)arg1 ;
-(void)setXPCConnectionTargetQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setReplyQueue:(id<BSServiceDispatchingQueue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)XPCConnectionTargetQueue;
-(id<BSServiceDispatchingQueue>)replyQueue;
-(BOOL)invokeMessage:(id)arg1 onTarget:(id)arg2 ;
-(BSObjCProtocol *)remoteProtocol;
-(BSObjCProtocol *)localProtocol;
@end

