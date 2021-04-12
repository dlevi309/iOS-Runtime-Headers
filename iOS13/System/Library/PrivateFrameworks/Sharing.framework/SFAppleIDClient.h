/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)_invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(id)interruptionHandler;
-(id)invalidationHandler;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_invalidated;
-(void)_interrupted;
-(void)_ensureXPCStarted;
-(void)myAccountWithCompletion:(/*^block*/id)arg1 ;
-(void)personInfoWithEmailOrPhone:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestWithInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)statusInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)_copyCertificateForAppleID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_copyIdentityForAppleID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)ensureSyncXPCStarted;
-(id)syncRemoteProxyWithError:(id*)arg1 ;
-(void)_myAccountWithCompletion:(/*^block*/id)arg1 ;
-(void)_personInfoWithEmailOrPhone:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_ensureAuthXPCStarted;
-(void)authenticateAccountWithAppleID:(id)arg1 password:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)copyCertificateForAppleID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)copyIdentityForAppleID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(SecIdentityRef)copyIdentityForAppleID:(id)arg1 error:(id*)arg2 ;
-(id)myAccountWithError:(id*)arg1 ;
@end

