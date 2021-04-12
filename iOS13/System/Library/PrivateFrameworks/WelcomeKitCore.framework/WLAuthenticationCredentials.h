/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(SecKeyRef)privateKey;
-(void)setPublicKey:(SecKeyRef)arg1 ;
-(void)setPrivateKey:(SecKeyRef)arg1 ;
-(void)setLocalCertificate:(SecCertificateRef)arg1 ;
-(SecCertificateRef)localCertificate;
-(SecCertificateRef)remoteCertificate;
-(void)setRemoteCertificate:(SecCertificateRef)arg1 ;
@end

