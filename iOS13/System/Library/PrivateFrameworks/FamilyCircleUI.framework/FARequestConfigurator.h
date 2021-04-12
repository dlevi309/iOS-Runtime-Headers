/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
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
-(id)_account;
-(id)_accountStore;
-(id)initWithAccount:(id)arg1 ;
-(id)_grandSlamAccount;
-(id)_familyGrandSlamSigner;
-(id)_grandSlamSigner;
-(AKAppleIDAuthenticationContext *)authContext;
-(void)setAuthContext:(AKAppleIDAuthenticationContext *)arg1 ;
-(id)_authContext;
-(id)_serviceOwnersManager;
-(void)renewCredentialsWithCompletion:(/*^block*/id)arg1 ;
-(void)addFresnoPayloadToRequest:(id)arg1 additionalPayload:(id)arg2 ;
-(void)addFresnoHeadersToRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)requestForContext:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setAttachSetupHeader:(BOOL)arg1 ;
-(void)addFresnoHeadersToRequest:(id)arg1 ;
-(void)pushTokenWithCompletion:(/*^block*/id)arg1 ;
-(void)_resourceLoadDelegate:(/*^block*/id)arg1 ;
-(id)_fresnoPayloadWithAdditionalPayload:(id)arg1 ;
-(void)_urlForEventType:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)_urlEndpointForEventType:(id)arg1 ;
-(void)_addAccountForServiceType:(id)arg1 toPayload:(id)arg2 forKey:(id)arg3 ;
-(id)_familyTokenForGrandSlamAccount:(id)arg1 andTokenID:(id)arg2 ;
-(void)addPayload:(id)arg1 toRequest:(id)arg2 ;
-(id)_akSigningController;
-(BOOL)attachSetupHeader;
@end

