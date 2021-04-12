/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/


@class NSArray, NSData, NSString;

@interface IDSAuthenticationSigningResult : NSObject {

	NSArray* _authenticationCertificateSignatures;
	NSData* _inputData;
	NSData* _nonce;

}

@property (nonatomic,readonly) NSString * serverVerifiableEncoding; 
@property (nonatomic,readonly) NSArray * authenticationCertificateSignatures;              //@synthesize authenticationCertificateSignatures=_authenticationCertificateSignatures - In the implementation block
@property (nonatomic,readonly) NSData * inputData;                                         //@synthesize inputData=_inputData - In the implementation block
@property (nonatomic,readonly) NSData * nonce;                                             //@synthesize nonce=_nonce - In the implementation block
-(id)description;
-(NSData *)nonce;
-(NSString *)serverVerifiableEncoding;
-(NSArray *)authenticationCertificateSignatures;
-(id)initWithSubscriptionIdentifiers:(id)arg1 authenticationCertificates:(id)arg2 inputData:(id)arg3 nonce:(id)arg4 signature:(id)arg5 ;
-(NSData *)inputData;
@end

