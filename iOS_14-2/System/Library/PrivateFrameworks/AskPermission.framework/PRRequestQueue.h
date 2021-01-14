/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AskPermission.framework/AskPermission
*/


@protocol PRRequestDelegate;
@class NSString;

@interface PRRequestQueue : NSObject {

	id<PRRequestDelegate> _delegate;
	NSString* _identifier;

}

@property (assign,nonatomic,__weak) id<PRRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NSString * identifier;                                      //@synthesize identifier=_identifier - In the implementation block
+(id)_requestQueueForIdentifier:(id)arg1 ;
+(id)defaultRequestQueue;
-(id)_pushToken;
-(id<PRRequestDelegate>)delegate;
-(void)setDelegate:(id<PRRequestDelegate>)arg1 ;
-(NSString *)identifier;
-(void)_attemptLocalApprovalForStorePurchaseRequestWithItemIdentifier:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)askPermissionTo:(id)arg1 withRequestInfo:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)pendingRequestsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)attemptLocalApprovalForRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_didStartNewPurchaseRequestWithInfo:(id)arg1 ;
-(void)_didReceiveStorePushNotificationWithPayload:(id)arg1 ;
-(void)_pendingStorePurchaseRequestForItemIdentifier:(unsigned long long)arg1 replyBlock:(/*^block*/id)arg2 ;
-(void)_attemptLocalApprovalForStorePurchaseRequestWithAdamID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_requestToBePresentedWithReply:(/*^block*/id)arg1 ;
-(void)_userDidApproveRequestWithRequestID:(id)arg1 ;
-(void)_userDidDenyRequestWithRequestID:(id)arg1 ;
-(void)_clearCachedRequests;
-(void)_registerPushToken;
-(void)_readTestValueFromTouchIDKeychain;
-(void)_writeTestValueToTouchIDKeychain;
-(void)_deleteTestValueFromTouchIDKeychain;
@end

