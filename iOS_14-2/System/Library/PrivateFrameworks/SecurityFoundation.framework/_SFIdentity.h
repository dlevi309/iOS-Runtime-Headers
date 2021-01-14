/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(_SFPublicKey *)publicKey;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setCertificate:(_SFCertificate *)arg1 ;
-(SFIdentityAttributes *)attributes;
-(_SFCertificate *)certificate;
-(_SFKeyPair *)keyPair;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPublicKey:(id)arg1 certificate:(id)arg2 ;
-(id)initWithKeyPair:(id)arg1 certificate:(id)arg2 ;
-(id)initWithPublicKey:(id)arg1 ;
-(id)initWithKeyPair:(id)arg1 ;
-(void)setKeyPair:(_SFKeyPair *)arg1 ;
@end

