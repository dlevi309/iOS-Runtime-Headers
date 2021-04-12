/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
*/


@class MFConnection, MFAuthScheme, MFAccount;

@interface MFSASLAuthenticator : NSObject {

	MFConnection* _connection;
	MFAuthScheme* _authScheme;
	MFAccount* _account;
	int _authenticationState;

}
-(void)dealloc;
-(id)account;
-(void)setMissingPasswordError;
-(id)saslName;
-(id)securityLayer;
-(id)responseForServerData:(id)arg1 ;
-(void)setAuthenticationState:(int)arg1 ;
-(int)authenticationState;
-(BOOL)justSentPlainTextPassword;
-(id)authScheme;
-(BOOL)supportsInitialClientResponse;
-(BOOL)isUsingSSL;
-(BOOL)couldRetry;
-(id)initWithAuthScheme:(id)arg1 account:(id)arg2 connection:(id)arg3 ;
-(BOOL)base64EncodeResponseData;
@end

