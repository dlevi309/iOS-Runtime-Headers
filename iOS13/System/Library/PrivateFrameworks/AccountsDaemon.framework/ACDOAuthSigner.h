/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
*/

#import <libobjc.A.dylib/ACDOAuthSignerProtocol.h>

@class ACDClient, ACDDatabaseConnection, ACDClientAuthorizationManager, NSString;

@interface ACDOAuthSigner : NSObject <ACDOAuthSignerProtocol> {

	ACDClient* _client;
	ACDDatabaseConnection* _databaseConnection;
	ACDClientAuthorizationManager* _authorizationManager;
	BOOL _shouldIncludeAppIdInRequest;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
-(id)init;
-(void)setClientBundleID:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)setShouldIncludeAppIdInRequest:(BOOL)arg1 ;
-(void)signURLRequest:(id)arg1 withAccount:(id)arg2 callingPID:(id)arg3 timestamp:(id)arg4 handler:(/*^block*/id)arg5 ;
-(void)signURLRequest:(id)arg1 withAccount:(id)arg2 applicationID:(id)arg3 timestamp:(id)arg4 handler:(/*^block*/id)arg5 ;
-(id)initWithClient:(id)arg1 databaseConnection:(id)arg2 ;
-(id)ckForAccountType:(id)arg1 ;
-(id)csForAccountType:(id)arg1 ;
-(BOOL)_permissionGrantedForBundleID:(id)arg1 onAccountType:(id)arg2 ;
-(id)_signedRequest:(id)arg1 withAccountObject:(id)arg2 applicationID:(id)arg3 timestamp:(id)arg4 ;
-(id)signedRequest:(id)arg1 withAccount:(id)arg2 applicationID:(id)arg3 timestamp:(id)arg4 ;
@end

