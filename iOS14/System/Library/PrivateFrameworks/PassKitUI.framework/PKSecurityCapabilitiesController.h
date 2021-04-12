/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@class AKAppleIDAuthenticationContext, PKCloudStoreService;

@interface PKSecurityCapabilitiesController : NSObject {

	AKAppleIDAuthenticationContext* _authContext;
	PKCloudStoreService* _cloudService;
	unsigned long long _feature;
	unsigned long long _securityRequirements;
	long long _context;

}

@property (nonatomic,readonly) unsigned long long feature;                           //@synthesize feature=_feature - In the implementation block
@property (nonatomic,readonly) unsigned long long securityRequirements;              //@synthesize securityRequirements=_securityRequirements - In the implementation block
@property (nonatomic,readonly) long long context;                                    //@synthesize context=_context - In the implementation block
+(id)displayableErrorForErrorCode:(unsigned long long)arg1 ;
-(unsigned long long)feature;
-(long long)context;
-(id)initWithRequirements:(unsigned long long)arg1 feature:(unsigned long long)arg2 context:(long long)arg3 ;
-(id)_createAuthContext;
-(id)_genericDisplayableError;
-(id)_authenticationReason;
-(BOOL)isHSA2Enabled;
-(void)_isEnabledForSecuirtyRequirements:(unsigned long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_presentMissingTLKsAlertWithPresentingViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_presentManateeSecurityFlowWithPresentingViewController:(id)arg1 suppressHSA2Alert:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_presentDeviceToDeviceEncryptionRepairFlow:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_presentPasswordPromptWithPresentingViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_missingTLKsAlertController;
-(void)_resetApplyPayManateeViewWithCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)securityRequirements;
-(void)_isManateeCapableWithCompletion:(/*^block*/id)arg1 ;
-(void)_isMissingTLKsWithCompletion:(/*^block*/id)arg1 ;
-(void)isEnabledForSecuirtyRequirementsWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithRequirements:(unsigned long long)arg1 context:(long long)arg2 ;
-(void)presentSecurityRepairFlowWithPresentingViewController:(id)arg1 suppressHSA2Alert:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)presentSecurityRepairFlowWithPresentingViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

