/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
*/


@class ACAccount, ACAccountStore, AAGrandSlamSigner, AIDAServiceOwnersManager, AKAppleIDSigningController, AKAppleIDServerResourceLoadDelegate, NSData, AKAppleIDAuthenticationContext;

@interface FARequestConfigurator : NSObject {

	ACAccount* _account;
	ACAccountStore* _accountStore;
	ACAccount* _grandSlamAccount;
	AAGrandSlamSigner* _grandSlamSigner;
	AAGrandSlamSigner* _familyGrandSlamSigner;
	AIDAServiceOwnersManager* _serviceOwnersManager;
	AKAppleIDSigningController* _akSigningController;
	AKAppleIDServerResourceLoadDelegate* _resourceLoadDelegate;
	NSData* _pushToken;
	BOOL _attachSetupHeader;
	AKAppleIDAuthenticationContext* _authContext;

}

@property (assign,nonatomic) BOOL attachSetupHeader;                                    //@synthesize attachSetupHeader=_attachSetupHeader - In the implementation block
@property (nonatomic,retain) AKAppleIDAuthenticationContext * authContext;              //@synthesize authContext=_authContext - In the implementation block
-(id)_accountStore;
-(id)_grandSlamSigner;
-(id)initWithAccount:(id)arg1 ;
-(id)_familyGrandSlamSigner;
-(void)pushTokenWithCompletion:(/*^block*/id)arg1 ;
-(void)_resourceLoadDelegate:(/*^block*/id)arg1 ;
-(void)addFresnoHeadersToRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)_fresnoPayloadWithAdditionalPayload:(id)arg1 ;
-(id)_grandSlamAccount;
-(id)_authContext;
-(void)_addAccountForServiceType:(id)arg1 toPayload:(id)arg2 forKey:(id)arg3 ;
-(id)_serviceOwnersManager;
-(id)_familyTokenForGrandSlamAccount:(id)arg1 andTokenID:(id)arg2 ;
-(void)addFresnoHeadersToRequest:(id)arg1 ;
-(void)addPayload:(id)arg1 toRequest:(id)arg2 ;
-(AKAppleIDAuthenticationContext *)authContext;
-(void)addFresnoPayloadToRequest:(id)arg1 additionalPayload:(id)arg2 ;
-(void)renewCredentialsWithCompletion:(/*^block*/id)arg1 ;
-(id)_akSigningController;
-(BOOL)attachSetupHeader;
-(void)setAuthContext:(AKAppleIDAuthenticationContext *)arg1 ;
-(void)setAttachSetupHeader:(BOOL)arg1 ;
-(id)_account;
@end

