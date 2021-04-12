/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
*/

#import <libobjc.A.dylib/AASetupAssistantDelegateService.h>
#import <libobjc.A.dylib/AAAppleIDLoginPlugin.h>

@class CNFRegController, NSDictionary, IDSAccountController, NSString;

@interface FTRegAccountServiceDelegate : NSObject <AASetupAssistantDelegateService, AAAppleIDLoginPlugin> {

	CNFRegController* _regController;
	NSDictionary* _responseDictionary;
	/*^block*/id _completionHandler;
	IDSAccountController* _accountController;

}

@property (nonatomic,retain) CNFRegController * regController;                      //@synthesize regController=_regController - In the implementation block
@property (nonatomic,retain) IDSAccountController * accountController;              //@synthesize accountController=_accountController - In the implementation block
@property (nonatomic,copy) id completionHandler;                                    //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) NSDictionary * responseDictionary;                       //@synthesize responseDictionary=_responseDictionary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_cleanup;
-(id)init;
-(void)setCompletionHandler:(id)arg1 ;
-(NSDictionary *)responseDictionary;
-(id)completionHandler;
-(id)parametersForLoginRequest;
-(id)delegateServiceIdentifier;
-(id)accountSetupRequestParameters;
-(id)parametersForIdentityEstablishmentRequest;
-(void)handleLoginResponse:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)completeSetupWithResponseParameters:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)name;
-(void)setResponseDictionary:(NSDictionary *)arg1 ;
-(id)serviceIdentifier;
-(IDSAccountController *)accountController;
-(id)_logName;
-(void)setAccountController:(IDSAccountController *)arg1 ;
-(long long)serviceType;
-(id)displayName;
-(BOOL)_hasAccount;
-(CNFRegController *)regController;
-(void)setRegController:(CNFRegController *)arg1 ;
-(id)initWithRegController:(id)arg1 ;
-(void)_handleSuccess:(BOOL)arg1 error:(id)arg2 ;
-(BOOL)_account:(id)arg1 matchesSetupParameters:(id)arg2 ;
-(id)_existingOperationalAccount;
-(BOOL)serviceIsAvailable;
-(BOOL)_hasOperationalAccount;
-(id)_defaultSetupRequestParameters;
-(void)_handleFailureWithErrorCode:(long long)arg1 ;
-(BOOL)_shouldSkipAccountSetup:(id)arg1 ;
-(void)setupOperationFailed;
-(id)_existingAccountForSetupParameters:(id)arg1 ;
@end

