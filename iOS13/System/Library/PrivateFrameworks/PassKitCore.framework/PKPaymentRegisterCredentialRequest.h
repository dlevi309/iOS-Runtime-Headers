/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString, NSDictionary, PKAppletSubcredential;

@interface PKPaymentRegisterCredentialRequest : PKPaymentWebServiceRequest {

	NSString* _credentialIdentifier;
	NSDictionary* _metadata;
	NSDictionary* _registrationData;
	PKAppletSubcredential* _credential;

}

@property (nonatomic,retain) PKAppletSubcredential * credential;              //@synthesize credential=_credential - In the implementation block
+(id)requestMetadataFromCarKeyRegistrationMetadata:(id)arg1 withPartnerIdentifier:(id)arg2 ;
+(id)requestMetadataFromRegistrationMetadata:(id)arg1 withPartnerIdentifier:(id)arg2 ;
+(id)requestRegistrationDataFromRegistrationData:(id)arg1 ;
-(PKAppletSubcredential *)credential;
-(void)setCredential:(PKAppletSubcredential *)arg1 ;
-(id)initWithCredential:(id)arg1 registrationData:(id)arg2 metadata:(id)arg3 ;
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 ;
-(id)requestBody;
@end

