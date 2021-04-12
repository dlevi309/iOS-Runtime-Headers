/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
*/


@protocol OS_dispatch_queue, OS_xpc_object;
@class NSObject;

@interface MSService : NSObject {

	int _canceled;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	NSObject*<OS_dispatch_queue> _replyQueue;
	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_xpc_object> _responseListener;
	NSObject*<OS_xpc_object> _responseHandler;

}

@property (getter=isCanceled,readonly) BOOL canceled; 
-(id)init;
-(void)dealloc;
-(id)_connection;
-(void)cancel;
-(void)stop;
-(void)start;
-(BOOL)isCanceled;
-(void)_callServicesMethod:(id)arg1 arguments:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)_simulateServicesMethod:(id)arg1 arguments:(id)arg2 callback:(/*^block*/id)arg3 ;
-(id)_handleMessageSendFailure:(id)arg1 message:(id)arg2 messageIndex:(long long)arg3 context:(inout id*)arg4 ;
-(id)_createServiceOnQueue:(id)arg1 ;
-(BOOL)_unitTestsAreEnabled;
-(id)_generateUnitTestReplyForMethod:(id)arg1 arg:(id)arg2 error:(id*)arg3 ;
-(void)_generateUnitTestResponsesForResultArray:(id)arg1 ;
-(void)responseConnection:(id)arg1 handleError:(id)arg2 ;
-(void)_registerConnection:(id)arg1 onQueue:(id)arg2 ;
-(void)responseConnection:(id)arg1 handleResponse:(id)arg2 ;
-(void)_callServicesMethod:(id)arg1 arguments:(id)arg2 replyHandler:(/*^block*/id)arg3 ;
-(id)_createMessageForService:(id)arg1 arguments:(id)arg2 index:(long long*)arg3 ;
-(void)setupResponseConnectionOnQueue:(id)arg1 ;
@end

