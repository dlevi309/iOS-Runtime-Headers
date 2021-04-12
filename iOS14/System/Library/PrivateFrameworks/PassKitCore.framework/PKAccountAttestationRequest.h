/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class PKSecureElementCertificateSet, NSString;

@interface PKAccountAttestationRequest : NSObject {

	PKSecureElementCertificateSet* _casdCertificate;
	NSString* _anonymizationSalt;

}

@property (nonatomic,retain) PKSecureElementCertificateSet * casdCertificate;              //@synthesize casdCertificate=_casdCertificate - In the implementation block
@property (nonatomic,copy) NSString * anonymizationSalt;                                   //@synthesize anonymizationSalt=_anonymizationSalt - In the implementation block
+(id)_keychainItemWrapper;
+(id)keychainDataWithError:(id*)arg1 ;
+(id)defaultAnonymizationSaltWithError:(id*)arg1 ;
+(id)setDefaultAnonymizationSalt:(id)arg1 ;
+(void)removeAccountAttesationData;
+(void)removeLocalAccountAttesationData;
+(id)createAnonymizationSalt;
-(PKSecureElementCertificateSet *)casdCertificate;
-(void)setCasdCertificate:(PKSecureElementCertificateSet *)arg1 ;
-(NSString *)anonymizationSalt;
-(void)setAnonymizationSalt:(NSString *)arg1 ;
@end

