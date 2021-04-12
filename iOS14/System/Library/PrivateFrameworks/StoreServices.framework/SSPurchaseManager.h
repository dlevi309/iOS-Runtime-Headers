/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_connectToDaemon;
-(id)init;
-(id<SSPurchaseManagerDelegate>)delegate;
-(void)_sendCompletionBlock:(/*^block*/id)arg1 forGetPurchasesReply:(id)arg2 ;
-(void)_sendMessage:(long long)arg1 withPurchaseIdentifiers:(id)arg2 afterPurchase:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(BOOL)_resultForReply:(id)arg1 error:(id*)arg2 ;
-(void)insertPurchases:(id)arg1 afterPurchase:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)setDelegate:(id<SSPurchaseManagerDelegate>)arg1 ;
-(void)_sendMessage:(long long)arg1 withPurchases:(id)arg2 afterPurchase:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_handlePurchasesFinished:(id)arg1 fromConnection:(id)arg2 ;
-(void)cancelPurchases:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)_handleAuthenticateRequest:(id)arg1 fromConnection:(id)arg2 ;
-(void)movePurchases:(id)arg1 afterPurchase:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)getPurchasesUsingBlock:(/*^block*/id)arg1 ;
-(id)_requestConnection;
-(void)_handleMessage:(id)arg1 fromConnection:(id)arg2 ;
-(void)addPurchases:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(id)_newEncodedArrayWithPurchaseIdentifiers:(id)arg1 ;
-(id)initWithManagerIdentifier:(id)arg1 ;
-(NSString *)managerIdentifier;
-(void)_sendCompletionBlock:(/*^block*/id)arg1 forStandardReply:(id)arg2 ;
-(BOOL)_shouldInvalidateSubscriptionStatusForPurchaseResponse:(id)arg1 ;
-(void)dealloc;
-(id)_newEncodedArrayWithPurchases:(id)arg1 ;
-(id)_responseConnection;
-(void)_reconnectForDaemonLaunch;
@end

