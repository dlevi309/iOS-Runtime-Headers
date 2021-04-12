/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString, NSDictionary;

@interface PKPaymentRevokeSharedCredentialRequest : PKPaymentWebServiceRequest {

	NSString* _credentialIdentifier;
	NSDictionary* _revocationAttestation;

}
-(id)initWithCredential:(id)arg1 revocationAttestation:(id)arg2 ;
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 ;
-(id)requestBody;
@end

