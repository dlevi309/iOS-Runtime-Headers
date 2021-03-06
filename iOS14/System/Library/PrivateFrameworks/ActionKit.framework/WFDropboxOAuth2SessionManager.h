/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/WFOAuth2SessionManager.h>
#import <libobjc.A.dylib/WFOAuth2ProviderSessionManager.h>
#import <libobjc.A.dylib/WFOAuth2RevocableSessionManager.h>

@class NSString;

@interface WFDropboxOAuth2SessionManager : WFOAuth2SessionManager <WFOAuth2ProviderSessionManager, WFOAuth2RevocableSessionManager>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithClientID:(id)arg1 clientSecret:(id)arg2 ;
-(id)initWithSessionConfiguration:(id)arg1 clientID:(id)arg2 clientSecret:(id)arg3 ;
-(void)revokeCredential:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)authorizationSessionWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)appAuthorizationSessionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)authenticateWithLegacyAccessToken:(id)arg1 accessTokenSecret:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

