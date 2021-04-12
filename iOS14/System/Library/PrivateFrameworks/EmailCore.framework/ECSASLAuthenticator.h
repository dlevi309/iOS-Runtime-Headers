/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
*/


@protocol ECAuthenticatableConnection, ECAuthenticatableAccount;
@class ECAuthenticationScheme, NSString;

@interface ECSASLAuthenticator : NSObject {

	id<ECAuthenticatableConnection> _connection;
	ECAuthenticationScheme* _authenticationScheme;
	id<ECAuthenticatableAccount> _account;
	long long _authenticationState;

}

@property (nonatomic,readonly) ECAuthenticationScheme * authenticationScheme;              //@synthesize authenticationScheme=_authenticationScheme - In the implementation block
@property (nonatomic,readonly) id<ECAuthenticatableAccount> account; 
@property (nonatomic,readonly) NSString * saslName; 
@property (nonatomic,readonly) BOOL supportsInitialClientResponse; 
@property (assign,nonatomic) long long authenticationState; 
@property (nonatomic,readonly) BOOL justSentPlainTextPassword; 
@property (nonatomic,readonly) id<ECSASLSecurityLayer> securityLayer; 
@property (getter=isUsingSSL,nonatomic,readonly) BOOL usingSSL; 
@property (nonatomic,readonly) BOOL usesBase64EncodeResponseData; 
@property (nonatomic,readonly) BOOL couldRetry; 
-(id<ECAuthenticatableAccount>)account;
-(BOOL)usesBase64EncodeResponseData;
-(BOOL)justSentPlainTextPassword;
-(id)initWithAuthenticationScheme:(id)arg1 account:(id)arg2 connection:(id)arg3 ;
-(void)setMissingPasswordError;
-(id<ECSASLSecurityLayer>)securityLayer;
-(id)responseForServerData:(id)arg1 ;
-(NSString *)saslName;
-(void)setAuthenticationState:(long long)arg1 ;
-(long long)authenticationState;
-(ECAuthenticationScheme *)authenticationScheme;
-(id)authScheme;
-(BOOL)supportsInitialClientResponse;
-(BOOL)isUsingSSL;
-(BOOL)couldRetry;
@end

