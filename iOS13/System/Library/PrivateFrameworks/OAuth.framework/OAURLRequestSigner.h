/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OAuth.framework/OAuth
*/


@class OACredential;

@interface OAURLRequestSigner : NSObject {

	OACredential* _credential;
	int _signatureMethod;

}

@property (assign,nonatomic) int signatureMethod;              //@synthesize signatureMethod=_signatureMethod - In the implementation block
-(void)dealloc;
-(id)initWithCredential:(id)arg1 ;
-(id)signedURLRequestWithRequest:(id)arg1 applicationID:(id)arg2 timestamp:(id)arg3 ;
-(id)signedURLRequestWithRequest:(id)arg1 ;
-(int)signatureMethod;
-(id)signatureMethodString;
-(id)applyApplicationID:(id)arg1 toRequest:(id)arg2 containsMultiPartData:(BOOL)arg3 ;
-(id)oauthNonce;
-(id)timestamp:(id)arg1 ;
-(id)oauthParametersWithNonce:(id)arg1 timeStamp:(id)arg2 ;
-(Class)signer;
-(id)oauthAuthorizationHeaderWithSignature:(id)arg1 nonce:(id)arg2 timestamp:(id)arg3 ;
-(void)setSignatureMethod:(int)arg1 ;
@end

