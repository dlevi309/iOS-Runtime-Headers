/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/WFAccount.h>

@class WFOAuth2Credential;

@interface WFOAuth2Account : WFAccount {

	WFOAuth2Credential* _credential;

}

@property (nonatomic,copy) WFOAuth2Credential * credential;              //@synthesize credential=_credential - In the implementation block
+(id)clientID;
+(id)responseType;
+(id)scopes;
+(id)sessionManager;
+(id)clientSecret;
+(id)redirectURI;
+(id)migrate:(id)arg1 ;
+(id)accountWithCredential:(id)arg1 ;
-(BOOL)isValid;
-(WFOAuth2Credential *)credential;
-(void)setCredential:(WFOAuth2Credential *)arg1 ;
-(void)refreshWithCompletionHandler:(/*^block*/id)arg1 ;
@end

