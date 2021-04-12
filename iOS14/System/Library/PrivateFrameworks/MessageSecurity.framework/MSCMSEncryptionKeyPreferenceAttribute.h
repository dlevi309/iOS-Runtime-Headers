/*
* Generated on Thursday, January 14, 2021 at 2:27:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity
*/

#import <MessageSecurity/MessageSecurity-Structs.h>
#import <libobjc.A.dylib/MSCMSAttributeCoder.h>

@interface MSCMSEncryptionKeyPreferenceAttribute : NSObject <MSCMSAttributeCoder> {

	SecCertificateRef _encryptionCertificate;

}

@property (readonly) SecCertificateRef encryptionCertificate;              //@synthesize encryptionCertificate=_encryptionCertificate - In the implementation block
-(id)initWithIdentity:(SecIdentityRef)arg1 ;
-(id)initWithEmailAddress:(id)arg1 ;
-(id)initWithCertificate:(SecCertificateRef)arg1 ;
-(void)dealloc;
-(id)encodeAttributeWithError:(id*)arg1 ;
-(id)initWithAttribute:(id)arg1 error:(id*)arg2 ;
-(SecCertificateRef)encryptionCertificate;
@end

