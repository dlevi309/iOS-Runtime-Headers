/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@interface PKPaymentSetupAssistantRegistrationUtilities : NSObject
+(BOOL)setupAssistantNeedsToRun:(unsigned long long)arg1 returningRequirements:(unsigned long long*)arg2 ;
+(BOOL)_phoneNeedsToRun:(unsigned long long*)arg1 ;
+(BOOL)_bridgeNeedsToRun:(unsigned long long*)arg1 ;
+(BOOL)_macNeedsToRun:(unsigned long long*)arg1 ;
+(BOOL)_shouldCheckMacNeedsToRun;
+(BOOL)_macNeedsToRun:(unsigned long long*)arg1 secureElementOwnershipState:(unsigned long long)arg2 ;
+(void)_phonePreflight:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
+(void)_bridgePreflight:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
+(void)_macPreflight:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
+(id)_peerPaymentCredentialFromPeerPaymentWebService:(id)arg1 ;
+(void)_handlePreflightFinishedWithSuccess:(BOOL)arg1 paymentCredentials:(id)arg2 provisioningController:(id)arg3 completion:(/*^block*/id)arg4 ;
+(id)retrieveLocalAppletSubcredentialPassCredentials;
+(id)_bridgeContextDefaultLocalCredential;
+(void)preflightPaymentSetupProvisioningController:(id)arg1 forSetupAssistant:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3 ;
@end

