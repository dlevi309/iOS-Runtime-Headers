/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@protocol OS_dispatch_queue;
@class SSXPCConnection, NSObject;

@interface SSKeychain : NSObject {

	SSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}
-(void)createAttestationDataForAccountIdentifier:(id)arg1 purpose:(long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_sendMessage:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)signData:(id)arg1 context:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)getPublicKeyDataForAccountIdentifier:(id)arg1 purpose:(long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)createAttestationDataForAccountIdentifier:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)deleteKeychainTokensForAccountIdentifier:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)createX509CertChainDataForAccountIdentifier:(id)arg1 purpose:(long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)getPublicKeyDataForAccountIdentifier:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)keyCountForAccountIdentifier:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)signData:(id)arg1 reason:(id)arg2 fallback:(id)arg3 cancel:(id)arg4 forAccountIdentifier:(id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)x509CertChainDataForAccountIdentifier:(id)arg1 purpose:(long long)arg2 regenerateCerts:(BOOL)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)init;
@end

