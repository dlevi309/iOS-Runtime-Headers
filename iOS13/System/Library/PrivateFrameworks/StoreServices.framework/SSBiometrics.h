/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@protocol OS_dispatch_queue;
@class NSObject, SSXPCConnection;

@interface SSBiometrics : NSObject {

	NSObject*<OS_dispatch_queue> _clientQueue;
	SSXPCConnection* _connection;

}
-(id)init;
-(void)_sendMessage:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)setEnabled:(BOOL)arg1 withAuthToken:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)getAllCachedBiometricHTTPHeadersWithToken:(id)arg1 accountID:(id)arg2 evict:(BOOL)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)getCachedBiometricAuthenticationContextWithToken:(id)arg1 evict:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)getCachedBiometricHTTPHeadersWithToken:(id)arg1 accountID:(id)arg2 evict:(BOOL)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)getConstraintsDictionaryForPurpose:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)getCurrentACLVersionWithCompletion:(/*^block*/id)arg1 ;
-(void)getStateWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)renewPurchaseTokenWithAuthToken:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)resetAccount:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)resetWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setEnabled:(BOOL)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)setAllowed:(BOOL)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)tokenUpdateDidFinishWithLogKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)tokenUpdateShouldStartWithLogKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)tokenUpdateStateWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)getIdentityMapCountWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)isIdentityMapValidForAccountIdentifier:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)saveIdentityMapForAccountIdentifier:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

