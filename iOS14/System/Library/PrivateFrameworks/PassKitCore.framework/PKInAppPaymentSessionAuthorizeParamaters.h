/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSData;

@interface PKInAppPaymentSessionAuthorizeParamaters : NSObject {

	NSData* _nonce;
	NSData* _authenticationCredential;
	NSData* _networkMerchantIdentifier;
	long long _cryptogramType;
	BOOL* _isFeatureNotSupportedError;

}

@property (nonatomic,retain) NSData * nonce;                                  //@synthesize nonce=_nonce - In the implementation block
@property (nonatomic,retain) NSData * authenticationCredential;               //@synthesize authenticationCredential=_authenticationCredential - In the implementation block
@property (nonatomic,retain) NSData * networkMerchantIdentifier;              //@synthesize networkMerchantIdentifier=_networkMerchantIdentifier - In the implementation block
@property (assign,nonatomic) long long cryptogramType;                        //@synthesize cryptogramType=_cryptogramType - In the implementation block
@property (assign,nonatomic) BOOL* isFeatureNotSupportedError;                //@synthesize isFeatureNotSupportedError=_isFeatureNotSupportedError - In the implementation block
-(void)setNonce:(NSData *)arg1 ;
-(long long)cryptogramType;
-(void)setCryptogramType:(long long)arg1 ;
-(NSData *)networkMerchantIdentifier;
-(id)initWithNonce:(id)arg1 authenticationCredential:(id)arg2 networkMerchantIdentifier:(id)arg3 cryptogramType:(long long)arg4 ;
-(void)setIsFeatureNotSupportedError:(BOOL*)arg1 ;
-(void)setNetworkMerchantIdentifier:(NSData *)arg1 ;
-(NSData *)authenticationCredential;
-(void)setAuthenticationCredential:(NSData *)arg1 ;
-(BOOL*)isFeatureNotSupportedError;
-(NSData *)nonce;
@end

