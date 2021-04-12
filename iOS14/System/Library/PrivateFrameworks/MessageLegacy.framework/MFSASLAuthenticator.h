/*
* Generated on Thursday, January 14, 2021 at 2:26:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
*/


@class MFConnection, MFAuthScheme, MFAccount;

@interface MFSASLAuthenticator : NSObject {

	MFConnection* _connection;
	MFAuthScheme* _authScheme;
	MFAccount* _account;
	int _authenticationState;

}
-(id)account;
-(BOOL)justSentPlainTextPassword;
-(void)setMissingPasswordError;
-(id)securityLayer;
-(id)responseForServerData:(id)arg1 ;
-(id)saslName;
-(void)setAuthenticationState:(int)arg1 ;
-(int)authenticationState;
-(void)dealloc;
-(id)authScheme;
-(BOOL)supportsInitialClientResponse;
-(BOOL)isUsingSSL;
-(BOOL)couldRetry;
-(id)initWithAuthScheme:(id)arg1 account:(id)arg2 connection:(id)arg3 ;
-(BOOL)base64EncodeResponseData;
@end

