/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKAuxiliaryCapabilityWebServiceResponse.h>

@class NSArray;

@interface PKAuxiliaryCapabilityRegisterResponse : PKAuxiliaryCapabilityWebServiceResponse {

	NSArray* _deviceSignatureCertificateChain;
	NSArray* _deviceDecryptionCertificateChain;
	NSArray* _serverDecryptionCertificateChain;
	NSArray* _serverSignatureCertificateChain;

}

@property (nonatomic,readonly) NSArray * deviceSignatureCertificateChain;               //@synthesize deviceSignatureCertificateChain=_deviceSignatureCertificateChain - In the implementation block
@property (nonatomic,readonly) NSArray * deviceDecryptionCertificateChain;              //@synthesize deviceDecryptionCertificateChain=_deviceDecryptionCertificateChain - In the implementation block
@property (nonatomic,readonly) NSArray * serverDecryptionCertificateChain;              //@synthesize serverDecryptionCertificateChain=_serverDecryptionCertificateChain - In the implementation block
@property (nonatomic,readonly) NSArray * serverSignatureCertificateChain;               //@synthesize serverSignatureCertificateChain=_serverSignatureCertificateChain - In the implementation block
-(id)initWithData:(id)arg1 ;
-(id)_retrieveCertificateChainFromJSONObject:(id)arg1 withParameterName:(id)arg2 ;
-(NSArray *)deviceSignatureCertificateChain;
-(NSArray *)deviceDecryptionCertificateChain;
-(NSArray *)serverDecryptionCertificateChain;
-(NSArray *)serverSignatureCertificateChain;
@end

