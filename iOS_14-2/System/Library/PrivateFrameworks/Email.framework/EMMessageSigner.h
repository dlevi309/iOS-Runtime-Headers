/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)reevaluateTrustWithNetworkAccessAllowed;
-(id)initWithSigningTrust:(id)arg1 encryptionTrust:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(BOOL)hasSeparateSigningAndEncryptionCertificates;
-(void)evaluateTrustsWithOptions:(unsigned long long)arg1 ;
-(void)setSigningCertificateTrustInfo:(EMCertificateTrustInformation *)arg1 ;
-(void)setEncryptionCertificateTrustInfo:(EMCertificateTrustInformation *)arg1 ;
-(EMCertificateTrustInformation *)signingCertificateTrustInfo;
-(EMCertificateTrustInformation *)encryptionCertificateTrustInfo;
-(id)initWithCoder:(id)arg1 ;
@end

