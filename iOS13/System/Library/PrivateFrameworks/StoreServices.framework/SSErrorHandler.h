/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(id<SSErrorHandlerDelegate>)delegate;
-(void)setDelegate:(id<SSErrorHandlerDelegate>)arg1 ;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_handleMessage:(id)arg1 fromServerConnection:(id)arg2 ;
-(void)_sendDisconnectMessage;
-(void)_tearDownConnections;
-(void)_reconnectToDaemonWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_openSessionWithMessage:(id)arg1 ;
-(void)_dispatchToDelegate:(/*^block*/id)arg1 ;
-(NSArray *)failureTypes;
-(void)setFailureTypes:(NSArray *)arg1 ;
-(void)stopWithCompletionBlock:(/*^block*/id)arg1 ;
@end

