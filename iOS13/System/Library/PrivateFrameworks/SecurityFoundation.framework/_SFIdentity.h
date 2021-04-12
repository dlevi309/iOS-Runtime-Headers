/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/


@class _SFCertificate, _SFPublicKey, _SFKeyPair, SFIdentityAttributes;

@interface _SFIdentity : NSObject {

	id _identityInternal;

}

@property (nonatomic,retain) _SFCertificate * certificate; 
@property (nonatomic,readonly) _SFPublicKey * publicKey; 
@property (nonatomic,retain) _SFKeyPair * keyPair; 
@property (nonatomic,readonly) SFIdentityAttributes * attributes; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SFIdentityAttributes *)attributes;
-(_SFPublicKey *)publicKey;
-(_SFCertificate *)certificate;
-(void)setCertificate:(_SFCertificate *)arg1 ;
-(_SFKeyPair *)keyPair;
-(id)initWithPublicKey:(id)arg1 certificate:(id)arg2 ;
-(id)initWithKeyPair:(id)arg1 certificate:(id)arg2 ;
-(id)initWithPublicKey:(id)arg1 ;
-(id)initWithKeyPair:(id)arg1 ;
-(void)setKeyPair:(_SFKeyPair *)arg1 ;
@end

