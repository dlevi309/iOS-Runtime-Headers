/*
* Generated on Thursday, January 14, 2021 at 2:26:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
*/


#import <MessageLegacy/MessageLegacy-Structs.h>
@class MFCertificateTrustInfo, NSString, MFError;

@interface MFMessageSigner : NSObject {

	int _status;
	MFCertificateTrustInfo* _signingCertificateTrustInfo;
	MFCertificateTrustInfo* _encryptionCertificateTrustInfo;
	NSString* _sender;

}

@property (nonatomic,readonly) MFCertificateTrustInfo * signingCertificateTrustInfo;                 //@synthesize signingCertificateTrustInfo=_signingCertificateTrustInfo - In the implementation block
@property (nonatomic,readonly) MFCertificateTrustInfo * encryptionCertificateTrustInfo;              //@synthesize encryptionCertificateTrustInfo=_encryptionCertificateTrustInfo - In the implementation block
@property (nonatomic,readonly) NSString * sender;                                                    //@synthesize sender=_sender - In the implementation block
@property (nonatomic,readonly) MFError * error; 
-(NSString *)sender;
-(MFError *)error;
-(id)initWithSender:(id)arg1 signingTrust:(SecTrustRef)arg2 encryptionTrust:(SecTrustRef)arg3 verification:(int)arg4 ;
-(MFCertificateTrustInfo *)signingCertificateTrustInfo;
-(MFCertificateTrustInfo *)encryptionCertificateTrustInfo;
@end

