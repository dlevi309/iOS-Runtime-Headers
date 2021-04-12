/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_generateUnitTestReplyForMethod:(id)arg1 arg:(id)arg2 error:(id*)arg3 ;
-(BOOL)isCanceled;
-(id)init;
-(void)start;
-(void)stop;
-(BOOL)_unitTestsAreEnabled;
-(void)_generateUnitTestResponsesForResultArray:(id)arg1 ;
-(id)_connection;
-(void)cancel;
-(void)dealloc;
-(void)_callServicesMethod:(id)arg1 arguments:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)_simulateServicesMethod:(id)arg1 arguments:(id)arg2 callback:(/*^block*/id)arg3 ;
-(id)_handleMessageSendFailure:(id)arg1 message:(id)arg2 messageIndex:(long long)arg3 context:(inout id*)arg4 ;
-(id)_createServiceOnQueue:(id)arg1 ;
-(void)responseConnection:(id)arg1 handleError:(id)arg2 ;
-(void)_registerConnection:(id)arg1 onQueue:(id)arg2 ;
-(void)responseConnection:(id)arg1 handleResponse:(id)arg2 ;
-(void)_callServicesMethod:(id)arg1 arguments:(id)arg2 replyHandler:(/*^block*/id)arg3 ;
-(id)_createMessageForService:(id)arg1 arguments:(id)arg2 index:(long long*)arg3 ;
-(void)setupResponseConnectionOnQueue:(id)arg1 ;
@end

