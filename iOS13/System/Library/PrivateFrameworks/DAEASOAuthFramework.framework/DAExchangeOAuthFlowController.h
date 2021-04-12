/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DAEASOAuthFramework.framework/DAEASOAuthFramework
*/

#import <DAEASOAuthFramework/DAEASOAuthFlowController.h>

@class NSString;

@interface DAExchangeOAuthFlowController : DAEASOAuthFlowController {

	NSString* _redirectURI;
	NSString* _easEndPoint;

}

@property (nonatomic,copy) NSString * easEndPoint;              //@synthesize easEndPoint=_easEndPoint - In the implementation block
@property (nonatomic,copy) NSString * redirectURI;              //@synthesize redirectURI=_redirectURI - In the implementation block
-(id)_accountDescription;
-(id)authURLForUsername:(id)arg1 ;
-(id)initialRedirectURL;
-(NSString *)redirectURI;
-(void)_exchangeAuthCode:(id)arg1 forTokensAndUsernameWithCompletion:(/*^block*/id)arg2 ;
-(id)_urlRequestForOAuthTokenFromAuthCode:(id)arg1 ;
-(void)setEasEndPoint:(NSString *)arg1 ;
-(NSString *)easEndPoint;
-(id)initWithAuthURI:(id)arg1 easEndPoint:(id)arg2 username:(id)arg3 ;
-(void)exchangeAuthCode:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setRedirectURI:(NSString *)arg1 ;
@end

