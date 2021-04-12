/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OAuth.framework/OAuth
*/


@class OACredential;

@interface OAURLRequestSigner : NSObject {

	OACredential* _credential;
	int _signatureMethod;

}

@property (assign,nonatomic) int signatureMethod;              //@synthesize signatureMethod=_signatureMethod - In the implementation block
-(Class)signer;
-(id)initWithCredential:(id)arg1 ;
-(void)dealloc;
-(id)signedURLRequestWithRequest:(id)arg1 applicationID:(id)arg2 timestamp:(id)arg3 ;
-(id)signedURLRequestWithRequest:(id)arg1 ;
-(int)signatureMethod;
-(id)signatureMethodString;
-(id)applyApplicationID:(id)arg1 toRequest:(id)arg2 containsMultiPartData:(BOOL)arg3 ;
-(id)oauthNonce;
-(id)timestamp:(id)arg1 ;
-(id)oauthParametersWithNonce:(id)arg1 timeStamp:(id)arg2 ;
-(id)oauthAuthorizationHeaderWithSignature:(id)arg1 nonce:(id)arg2 timestamp:(id)arg3 ;
-(void)setSignatureMethod:(int)arg1 ;
@end

