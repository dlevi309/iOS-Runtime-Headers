/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/


@protocol OS_dispatch_queue;
#import <Sharing/Sharing-Structs.h>
@class NSObject, NSXPCConnection;

@interface SFAppleIDClient : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	NSXPCConnection* _syncXPCCnx;
	NSXPCConnection* _xpcCnx;
	NSXPCConnection* _xpcAuthCnx;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
-(void)_invalidate;
-(id)init;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)_ensureXPCStarted;
-(void)setInterruptionHandler:(id)arg1 ;
-(void)_interrupted;
-(void)_invalidated;
-(void)invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(void)myAccountWithCompletion:(/*^block*/id)arg1 ;
-(void)personInfoWithEmailOrPhone:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestWithInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)statusInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)_copyCertificateForAppleID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)ensureSyncXPCStarted;
-(void)_copyIdentityForAppleID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)syncRemoteProxyWithError:(id*)arg1 ;
-(void)_myAccountWithCompletion:(/*^block*/id)arg1 ;
-(void)_personInfoWithEmailOrPhone:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_ensureAuthXPCStarted;
-(void)authenticateAccountWithAppleID:(id)arg1 password:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)copyCertificateForAppleID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)copyIdentityForAppleID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(SecIdentityRef)copyIdentityForAppleID:(id)arg1 error:(id*)arg2 ;
-(id)myAccountWithError:(id*)arg1 ;
-(id)interruptionHandler;
-(void)dealloc;
@end

