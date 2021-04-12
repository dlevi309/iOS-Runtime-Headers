/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <libobjc.A.dylib/CDPUIDeviceToDeviceEncryptionHelperDelegate.h>

@class AKAppleIDAuthenticationContext, PKCloudStoreService, NSString;

@interface PKSecurityCapabilitiesController : NSObject <CDPUIDeviceToDeviceEncryptionHelperDelegate> {

	AKAppleIDAuthenticationContext* _authContext;
	PKCloudStoreService* _cloudService;
	unsigned long long _feature;
	unsigned long long _securityRequirements;
	long long _context;

}

@property (nonatomic,readonly) unsigned long long feature;                           //@synthesize feature=_feature - In the implementation block
@property (nonatomic,readonly) unsigned long long securityRequirements;              //@synthesize securityRequirements=_securityRequirements - In the implementation block
@property (nonatomic,readonly) long long context;                                    //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)displayableErrorForErrorCode:(unsigned long long)arg1 ;
-(long long)context;
-(unsigned long long)feature;
-(void)deviceToDeviceEncryptionHelper:(id)arg1 shouldContinueUpgradingUserToHSA2WithCompletion:(/*^block*/id)arg2 ;
-(id)initWithRequirements:(unsigned long long)arg1 feature:(unsigned long long)arg2 context:(long long)arg3 ;
-(void)presentSecurityRepairFlowWithPresentingViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithRequirements:(unsigned long long)arg1 context:(long long)arg2 ;
-(BOOL)isHSA2Enabled;
-(id)_createAuthContext;
-(id)_genericDisplayableError;
-(void)_isEnabledForSecuirtyRequirements:(unsigned long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_presentMissingTLKsAlertWithPresentingViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_presentManateeSecurityFlowWithPresentingViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_presentDeviceToDeviceEncryptionRepairFlow:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_presentPasswordPromptWithPresentingViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_missingTLKsAlertController;
-(void)_resetApplyPayManateeViewWithCompletion:(/*^block*/id)arg1 ;
-(id)_authenticationReason;
-(void)_isManateeCapableWithCompletion:(/*^block*/id)arg1 ;
-(void)_isMissingTLKsWithCompletion:(/*^block*/id)arg1 ;
-(void)isEnabledForSecuirtyRequirementsWithCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)securityRequirements;
@end

