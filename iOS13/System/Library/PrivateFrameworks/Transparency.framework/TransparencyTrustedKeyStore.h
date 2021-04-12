/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/


@class TransparencySignatureVerifier, NSDictionary;

@interface TransparencyTrustedKeyStore : NSObject {

	TransparencySignatureVerifier* _signatureVerifier;
	NSDictionary* _trustedKeys;

}

@property (retain) NSDictionary * trustedKeys;                                     //@synthesize trustedKeys=_trustedKeys - In the implementation block
@property (retain) TransparencySignatureVerifier * signatureVerifier;              //@synthesize signatureVerifier=_signatureVerifier - In the implementation block
-(TransparencySignatureVerifier *)signatureVerifier;
-(void)setTrustedKeys:(NSDictionary *)arg1 ;
-(id)initWithTrustedKeys:(id)arg1 ;
-(void)setSignatureVerifier:(TransparencySignatureVerifier *)arg1 ;
-(NSDictionary *)trustedKeys;
@end

