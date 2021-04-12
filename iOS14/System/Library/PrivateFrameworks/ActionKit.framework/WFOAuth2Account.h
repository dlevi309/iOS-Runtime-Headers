/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/WFAccount.h>

@class WFOAuth2Credential;

@interface WFOAuth2Account : WFAccount {

	WFOAuth2Credential* _credential;

}

@property (nonatomic,copy) WFOAuth2Credential * credential;              //@synthesize credential=_credential - In the implementation block
+(id)scopes;
+(id)clientID;
+(id)sessionManager;
+(id)responseType;
+(id)migrate:(id)arg1 ;
+(id)clientSecret;
+(id)redirectURI;
+(id)accountWithCredential:(id)arg1 ;
-(WFOAuth2Credential *)credential;
-(void)setCredential:(WFOAuth2Credential *)arg1 ;
-(void)refreshWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)isValid;
@end

