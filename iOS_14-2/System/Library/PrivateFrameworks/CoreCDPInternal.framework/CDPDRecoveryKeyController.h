/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
*/

#import <libobjc.A.dylib/CDPDRecoveryKeyValidatorInternalDelegate.h>

@protocol CDPStateUIProviderInternal, CDPDCircleProxy, CDPDSecureBackupProxy, CDPDOctagonTrustProxy, CDPAuthProviderInternal, CDPDAuthProviderInternal;
@class CDPContext, CDPDPCSController, CDPDSecureBackupController, NSString;

@interface CDPDRecoveryKeyController : NSObject <CDPDRecoveryKeyValidatorInternalDelegate> {

	CDPContext* _context;
	CDPDPCSController* _pcsController;
	CDPDSecureBackupController* _secureBackupController;
	id<CDPStateUIProviderInternal> _uiProvider;
	id<CDPDCircleProxy> _circleProxy;
	id<CDPDSecureBackupProxy> _sbProxy;
	id<CDPDOctagonTrustProxy> _otProxy;
	id<CDPAuthProviderInternal> _recoveryAuthProvider;
	id<CDPDAuthProviderInternal> _internalAuthProvider;

}

@property (nonatomic,retain) id<CDPStateUIProviderInternal> uiProvider;                      //@synthesize uiProvider=_uiProvider - In the implementation block
@property (nonatomic,retain) id<CDPDCircleProxy> circleProxy;                                //@synthesize circleProxy=_circleProxy - In the implementation block
@property (nonatomic,retain) id<CDPDSecureBackupProxy> sbProxy;                              //@synthesize sbProxy=_sbProxy - In the implementation block
@property (nonatomic,retain) id<CDPDOctagonTrustProxy> otProxy;                              //@synthesize otProxy=_otProxy - In the implementation block
@property (nonatomic,retain) id<CDPAuthProviderInternal> recoveryAuthProvider;               //@synthesize recoveryAuthProvider=_recoveryAuthProvider - In the implementation block
@property (nonatomic,retain) id<CDPDAuthProviderInternal> internalAuthProvider;              //@synthesize internalAuthProvider=_internalAuthProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CDPDCircleProxy>)circleProxy;
-(id<CDPStateUIProviderInternal>)uiProvider;
-(id)initWithContext:(id)arg1 ;
-(void)setUiProvider:(id<CDPStateUIProviderInternal>)arg1 ;
-(void)generateNewRecoveryKey:(/*^block*/id)arg1 ;
-(id)generateRecoveryKeyWithInfo:(id)arg1 error:(id*)arg2 ;
-(id<CDPDSecureBackupProxy>)sbProxy;
-(id<CDPDOctagonTrustProxy>)otProxy;
-(void)setCircleProxy:(id<CDPDCircleProxy>)arg1 ;
-(void)deleteRecoveryKey:(/*^block*/id)arg1 ;
-(id)initWithContext:(id)arg1 uiProvider:(id)arg2 ;
-(void)generateRandomRecoveryKey:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)initWithContext:(id)arg1 uiProvider:(id)arg2 authProvider:(id)arg3 ;
-(id)initWithContext:(id)arg1 uiProvider:(id)arg2 authProvider:(id)arg3 circleProxy:(id)arg4 secureBackupProxy:(id)arg5 octagonTrustProxy:(id)arg6 pcsProxy:(id)arg7 ;
-(void)enableBackupWithRecoveryKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)recoverState:(/*^block*/id)arg1 ;
-(void)recoverAndSynchronizeStateWithServer:(/*^block*/id)arg1 ;
-(void)recoverDataUsingMasterKeyWithCompletion:(/*^block*/id)arg1 ;
-(void)setSbProxy:(id<CDPDSecureBackupProxy>)arg1 ;
-(void)setOtProxy:(id<CDPDOctagonTrustProxy>)arg1 ;
-(id<CDPAuthProviderInternal>)recoveryAuthProvider;
-(void)setRecoveryAuthProvider:(id<CDPAuthProviderInternal>)arg1 ;
-(id<CDPDAuthProviderInternal>)internalAuthProvider;
-(void)setInternalAuthProvider:(id<CDPDAuthProviderInternal>)arg1 ;
@end

