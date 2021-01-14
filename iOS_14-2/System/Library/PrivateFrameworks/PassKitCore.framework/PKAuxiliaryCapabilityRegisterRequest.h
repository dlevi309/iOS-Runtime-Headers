/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKAuxiliaryCapabilityWebServiceRequest.h>

@class NSArray, NSData, PKPaymentPass;

@interface PKAuxiliaryCapabilityRegisterRequest : PKAuxiliaryCapabilityWebServiceRequest {

	NSArray* _dpanIdentifiers;
	NSData* _deviceSignatureKeyAttestation;
	NSData* _deviceDecryptionKeyAttestation;
	NSArray* _validCertificatesOnDevice;
	PKPaymentPass* _pass;

}

@property (nonatomic,copy) NSArray * dpanIdentifiers;                            //@synthesize dpanIdentifiers=_dpanIdentifiers - In the implementation block
@property (nonatomic,copy) NSData * deviceSignatureKeyAttestation;               //@synthesize deviceSignatureKeyAttestation=_deviceSignatureKeyAttestation - In the implementation block
@property (nonatomic,copy) NSData * deviceDecryptionKeyAttestation;              //@synthesize deviceDecryptionKeyAttestation=_deviceDecryptionKeyAttestation - In the implementation block
@property (nonatomic,copy) NSArray * validCertificatesOnDevice;                  //@synthesize validCertificatesOnDevice=_validCertificatesOnDevice - In the implementation block
@property (nonatomic,retain) PKPaymentPass * pass;                               //@synthesize pass=_pass - In the implementation block
-(void)setPass:(PKPaymentPass *)arg1 ;
-(void)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 webService:(id)arg4 completion:(/*^block*/id)arg5 ;
-(PKPaymentPass *)pass;
-(NSArray *)dpanIdentifiers;
-(void)setDpanIdentifiers:(NSArray *)arg1 ;
-(NSData *)deviceSignatureKeyAttestation;
-(void)setDeviceSignatureKeyAttestation:(NSData *)arg1 ;
-(NSData *)deviceDecryptionKeyAttestation;
-(void)setDeviceDecryptionKeyAttestation:(NSData *)arg1 ;
-(NSArray *)validCertificatesOnDevice;
-(void)setValidCertificatesOnDevice:(NSArray *)arg1 ;
@end

