/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)initWithAccount:(id)arg1 remoteEndpoint:(id)arg2 ;
-(void)_connectToRemoteOAuthSignerUsingEndpoint:(id)arg1 ;
-(void)disconnectFromRemoteOAuthSigner;
-(void)setShouldIncludeAppIdInRequest:(BOOL)arg1 ;
-(id)signedURLRequestWithURLRequest:(id)arg1 callingPID:(id)arg2 timestamp:(id)arg3 ;
-(id)initWithAccount:(id)arg1 ;
-(id)signedURLRequestWithURLRequest:(id)arg1 applicationID:(id)arg2 timestamp:(id)arg3 ;
-(id)signedURLRequestWithURLRequest:(id)arg1 ;
-(BOOL)shouldIncludeAppIdInRequest;
@end

