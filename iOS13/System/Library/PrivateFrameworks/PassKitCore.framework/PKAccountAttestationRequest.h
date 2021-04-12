/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class PKSecureElementCertificateSet, NSString;

@interface PKAccountAttestationRequest : NSObject {

	PKSecureElementCertificateSet* _casdCertificate;
	NSString* _anonymizationSalt;

}

@property (nonatomic,retain) PKSecureElementCertificateSet * casdCertificate;              //@synthesize casdCertificate=_casdCertificate - In the implementation block
@property (nonatomic,copy) NSString * anonymizationSalt;                                   //@synthesize anonymizationSalt=_anonymizationSalt - In the implementation block
+(id)createAnonymizationSalt;
+(id)_keychainItemWrapper;
+(id)keychainDataWithError:(id*)arg1 ;
+(id)defaultAnonymizationSaltWithError:(id*)arg1 ;
+(id)setDefaultAnonymizationSalt:(id)arg1 ;
+(void)removeAccountAttesationData;
+(void)removeLocalAccountAttesationData;
-(void)setAnonymizationSalt:(NSString *)arg1 ;
-(NSString *)anonymizationSalt;
-(PKSecureElementCertificateSet *)casdCertificate;
-(void)setCasdCertificate:(PKSecureElementCertificateSet *)arg1 ;
@end

