/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@protocol OS_dispatch_queue, SSPurchaseManagerDelegate;
@class NSObject, NSString, SSXPCConnection;

@interface SSPurchaseManager : NSObject {

	NSObject*<OS_dispatch_queue> _completionBlockQueue;
	id<SSPurchaseManagerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _managerIdentifier;
	SSXPCConnection* _requestConnection;
	SSXPCConnection* _responseConnection;

}

@property (readonly) NSString * managerIdentifier; 
@property (assign) id<SSPurchaseManagerDelegate> delegate; 
-(id)init;
-(void)dealloc;
-(id<SSPurchaseManagerDelegate>)delegate;
-(void)setDelegate:(id<SSPurchaseManagerDelegate>)arg1 ;
-(void)movePurchases:(id)arg1 afterPurchase:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)cancelPurchases:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)addPurchases:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)getPurchasesUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithManagerIdentifier:(id)arg1 ;
-(void)_connectToDaemon;
-(id)_requestConnection;
-(id)_responseConnection;
-(void)_sendMessage:(long long)arg1 withPurchases:(id)arg2 afterPurchase:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_sendMessage:(long long)arg1 withPurchaseIdentifiers:(id)arg2 afterPurchase:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_sendCompletionBlock:(/*^block*/id)arg1 forGetPurchasesReply:(id)arg2 ;
-(void)_handleAuthenticateRequest:(id)arg1 fromConnection:(id)arg2 ;
-(void)_handlePurchasesFinished:(id)arg1 fromConnection:(id)arg2 ;
-(BOOL)_shouldInvalidateSubscriptionStatusForPurchaseResponse:(id)arg1 ;
-(void)_handleMessage:(id)arg1 fromConnection:(id)arg2 ;
-(BOOL)_resultForReply:(id)arg1 error:(id*)arg2 ;
-(id)_newEncodedArrayWithPurchaseIdentifiers:(id)arg1 ;
-(void)_sendCompletionBlock:(/*^block*/id)arg1 forStandardReply:(id)arg2 ;
-(id)_newEncodedArrayWithPurchases:(id)arg1 ;
-(void)insertPurchases:(id)arg1 afterPurchase:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(NSString *)managerIdentifier;
-(void)_reconnectForDaemonLaunch;
@end

