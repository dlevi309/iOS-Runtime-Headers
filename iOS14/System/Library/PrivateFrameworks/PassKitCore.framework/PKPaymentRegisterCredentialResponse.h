/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSURL, NSData;

@interface PKPaymentRegisterCredentialResponse : PKPaymentWebServiceResponse {

	NSURL* _passURL;
	NSData* _credentialAttestation;

}

@property (nonatomic,readonly) NSURL * passURL;                             //@synthesize passURL=_passURL - In the implementation block
@property (nonatomic,readonly) NSData * credentialAttestation;              //@synthesize credentialAttestation=_credentialAttestation - In the implementation block
-(NSURL *)passURL;
-(id)initWithData:(id)arg1 ;
-(NSData *)credentialAttestation;
@end

