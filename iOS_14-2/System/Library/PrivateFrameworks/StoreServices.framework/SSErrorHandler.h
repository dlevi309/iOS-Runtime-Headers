/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@protocol SSErrorHandlerDelegate, OS_dispatch_queue;
@class SSXPCConnection, NSObject, NSArray;

@interface SSErrorHandler : NSObject {

	SSXPCConnection* _controlConnection;
	id<SSErrorHandlerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSArray* _failureTypes;
	SSXPCConnection* _observerConnection;

}

@property (assign) id<SSErrorHandlerDelegate> delegate; 
@property (copy) NSArray * failureTypes; 
-(void)_handleMessage:(id)arg1 fromServerConnection:(id)arg2 ;
-(id)init;
-(id<SSErrorHandlerDelegate>)delegate;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_sendDisconnectMessage;
-(void)setDelegate:(id<SSErrorHandlerDelegate>)arg1 ;
-(void)_tearDownConnections;
-(void)_reconnectToDaemonWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_openSessionWithMessage:(id)arg1 ;
-(NSArray *)failureTypes;
-(void)_dispatchToDelegate:(/*^block*/id)arg1 ;
-(void)setFailureTypes:(NSArray *)arg1 ;
-(void)stopWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

