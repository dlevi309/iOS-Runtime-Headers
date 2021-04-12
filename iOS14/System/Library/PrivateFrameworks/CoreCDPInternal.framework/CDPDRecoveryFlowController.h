/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
*/

#import <libobjc.A.dylib/CDPDDeviceSecretValidatorDelegate.h>

@protocol CDPRemoteDeviceSecretValidatorProtocol, CDPStateUIProviderInternal;
@class CDPDRecoveryFlowContext, CDPDCircleController, CDPDSecureBackupController, NSString;

@interface CDPDRecoveryFlowController : NSObject <CDPDDeviceSecretValidatorDelegate> {

	id<CDPRemoteDeviceSecretValidatorProtocol> _validator;
	CDPDRecoveryFlowContext* _recoveryContext;
	CDPDCircleController* _circleController;
	CDPDSecureBackupController* _secureBackupController;
	id<CDPStateUIProviderInternal> _uiProvider;

}

@property (nonatomic,retain) CDPDRecoveryFlowContext * recoveryContext;                         //@synthesize recoveryContext=_recoveryContext - In the implementation block
@property (nonatomic,retain) CDPDCircleController * circleController;                           //@synthesize circleController=_circleController - In the implementation block
@property (nonatomic,retain) CDPDSecureBackupController * secureBackupController;               //@synthesize secureBackupController=_secureBackupController - In the implementation block
@property (nonatomic,retain) id<CDPStateUIProviderInternal> uiProvider;                         //@synthesize uiProvider=_uiProvider - In the implementation block
@property (nonatomic,retain) id<CDPRemoteDeviceSecretValidatorProtocol> validator;              //@synthesize validator=_validator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CDPStateUIProviderInternal>)uiProvider;
-(void)setUiProvider:(id<CDPStateUIProviderInternal>)arg1 ;
-(id<CDPRemoteDeviceSecretValidatorProtocol>)validator;
-(void)setValidator:(id<CDPRemoteDeviceSecretValidatorProtocol>)arg1 ;
-(void)dealloc;
-(id)recoveryValidatorWithDevices:(id)arg1 forMultipleICSC:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)beginInteractiveRecoveryForDevices:(id)arg1 isUsingMultipleICSC:(BOOL)arg2 usingValidator:(id)arg3 ;
-(void)retrieveInflatedDevices:(/*^block*/id)arg1 ;
-(void)secretValidator:(id)arg1 recoverSecureBackupWithContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)secretValidator:(id)arg1 shouldContinueValidationAfterError:(id)arg2 ;
-(id)initWithContext:(id)arg1 uiProvider:(id)arg2 secureBackupController:(id)arg3 circleProxy:(id)arg4 ;
-(void)beginRecovery:(/*^block*/id)arg1 ;
-(CDPDRecoveryFlowContext *)recoveryContext;
-(void)setRecoveryContext:(CDPDRecoveryFlowContext *)arg1 ;
-(CDPDCircleController *)circleController;
-(void)setCircleController:(CDPDCircleController *)arg1 ;
-(CDPDSecureBackupController *)secureBackupController;
-(void)setSecureBackupController:(CDPDSecureBackupController *)arg1 ;
@end

