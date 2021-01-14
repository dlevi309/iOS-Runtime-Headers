/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
*/


#import <WelcomeKitCore/WelcomeKitCore-Structs.h>
@interface WLAuthenticationCredentials : NSObject {

	SecKeyRef _privateKey;
	SecKeyRef _publicKey;
	SecCertificateRef _localCertificate;
	SecCertificateRef _remoteCertificate;

}

@property (assign,nonatomic) SecKeyRef privateKey;                             //@synthesize privateKey=_privateKey - In the implementation block
@property (assign,nonatomic) SecKeyRef publicKey;                              //@synthesize publicKey=_publicKey - In the implementation block
@property (assign,nonatomic) SecCertificateRef localCertificate;               //@synthesize localCertificate=_localCertificate - In the implementation block
@property (assign,nonatomic) SecCertificateRef remoteCertificate;              //@synthesize remoteCertificate=_remoteCertificate - In the implementation block
+(id)generateAuthenticationCredentialsContainingSelfSignedCertificate;
-(SecKeyRef)publicKey;
-(void)setPublicKey:(SecKeyRef)arg1 ;
-(SecKeyRef)privateKey;
-(void)setPrivateKey:(SecKeyRef)arg1 ;
-(void)setLocalCertificate:(SecCertificateRef)arg1 ;
-(SecCertificateRef)localCertificate;
-(SecCertificateRef)remoteCertificate;
-(void)setRemoteCertificate:(SecCertificateRef)arg1 ;
@end

