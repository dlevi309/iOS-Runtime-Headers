/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

