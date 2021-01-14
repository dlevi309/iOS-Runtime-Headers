/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
*/


@protocol ACDOAuthSignerProtocol;
@class NSXPCConnection, ACAccount;

@interface ACOAuthSigner : NSObject {

	NSXPCConnection* _connection;
	ACAccount* _account;
	id<ACDOAuthSignerProtocol> _proxyShim;
	BOOL _shouldIncludeAppIdInRequest;

}

@property (assign,nonatomic) BOOL shouldIncludeAppIdInRequest;              //@synthesize shouldIncludeAppIdInRequest=_shouldIncludeAppIdInRequest - In the implementation block
-(id)signedURLRequestWithURLRequest:(id)arg1 applicationID:(id)arg2 timestamp:(id)arg3 ;
-(id)signedURLRequestWithURLRequest:(id)arg1 callingPID:(id)arg2 timestamp:(id)arg3 ;
-(void)_connectToRemoteOAuthSignerUsingEndpoint:(id)arg1 ;
-(void)setShouldIncludeAppIdInRequest:(BOOL)arg1 ;
-(id)initWithAccount:(id)arg1 remoteEndpoint:(id)arg2 ;
-(void)disconnectFromRemoteOAuthSigner;
-(id)signedURLRequestWithURLRequest:(id)arg1 ;
-(BOOL)shouldIncludeAppIdInRequest;
-(id)initWithAccount:(id)arg1 ;
-(void)dealloc;
@end

