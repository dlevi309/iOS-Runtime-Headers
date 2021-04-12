/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKDASession.h>

@class DAKeyManagementSession;

@interface PKAppletSubcredentialManagementSession : PKDASession

@property (nonatomic,retain) DAKeyManagementSession * session; 
+(id)createSessionWithDelegate:(id)arg1 ;
-(void)rescindInvitations:(id)arg1 onCredential:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)revokeSharedCredentials:(id)arg1 onCredential:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)listCredentialsWithSession:(id)arg1 seid:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)revokeCredential:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)trackSubcredential:(id)arg1 withReceipt:(id)arg2 ;
-(void)decryptData:(id)arg1 withCredential:(id)arg2 publicKeyHash:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)signData:(id)arg1 auth:(id)arg2 bundleIdentifier:(id)arg3 nonce:(id)arg4 credential:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)listCredentialsWithCompletion:(/*^block*/id)arg1 ;
@end

