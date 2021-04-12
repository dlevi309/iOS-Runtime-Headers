/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class EMCertificateTrustInformation, NSError;

@interface EMMessageSigner : NSObject <NSSecureCoding> {

	EMCertificateTrustInformation* _signingCertificateTrustInfo;
	EMCertificateTrustInformation* _encryptionCertificateTrustInfo;
	NSError* _error;

}

@property (nonatomic,retain) EMCertificateTrustInformation * signingCertificateTrustInfo;                 //@synthesize signingCertificateTrustInfo=_signingCertificateTrustInfo - In the implementation block
@property (nonatomic,retain) EMCertificateTrustInformation * encryptionCertificateTrustInfo;              //@synthesize encryptionCertificateTrustInfo=_encryptionCertificateTrustInfo - In the implementation block
@property (nonatomic,retain) NSError * error;                                                             //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) BOOL hasSeparateSigningAndEncryptionCertificates; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(EMCertificateTrustInformation *)signingCertificateTrustInfo;
-(EMCertificateTrustInformation *)encryptionCertificateTrustInfo;
-(id)initWithSigningTrust:(id)arg1 encryptionTrust:(id)arg2 ;
-(void)reevaluateTrustWithNetworkAccessAllowed;
-(BOOL)hasSeparateSigningAndEncryptionCertificates;
-(void)evaluateTrustsWithOptions:(unsigned long long)arg1 ;
-(void)setSigningCertificateTrustInfo:(EMCertificateTrustInformation *)arg1 ;
-(void)setEncryptionCertificateTrustInfo:(EMCertificateTrustInformation *)arg1 ;
@end

