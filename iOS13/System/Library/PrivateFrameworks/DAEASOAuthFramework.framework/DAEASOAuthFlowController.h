/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DAEASOAuthFramework.framework/DAEASOAuthFramework
*/

#import <libobjc.A.dylib/SL_OOPAuthFlowDelegate.h>
#import <UIKit/UIWebViewDelegate.h>

@class NSString;

@interface DAEASOAuthFlowController : NSObject <SL_OOPAuthFlowDelegate, UIWebViewDelegate> {

	/*^block*/id _completion;
	unsigned long long _oauthType;
	NSString* _oauthURI;
	NSString* _tokenRequestURI;
	NSString* _username;

}

@property (assign,nonatomic) unsigned long long oauthType;              //@synthesize oauthType=_oauthType - In the implementation block
@property (nonatomic,copy) NSString * oauthURI;                         //@synthesize oauthURI=_oauthURI - In the implementation block
@property (nonatomic,retain) NSString * tokenRequestURI;                //@synthesize tokenRequestURI=_tokenRequestURI - In the implementation block
@property (nonatomic,copy) NSString * username;                         //@synthesize username=_username - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)username;
-(id)_accountDescription;
-(void)setUsername:(NSString *)arg1 ;
-(void)setAuthFlowCompletion:(/*^block*/id)arg1 ;
-(id)authURLForUsername:(id)arg1 ;
-(id)requestForAuthURL:(id)arg1 ;
-(id)initialRedirectURL;
-(BOOL)shouldHideWebViewForLoadWithRequest:(id)arg1 ;
-(void)webViewDidFinishLoadWithPageTitleSupplier:(/*^block*/id)arg1 ;
-(NSString *)tokenRequestURI;
-(void)setTokenRequestURI:(NSString *)arg1 ;
-(void)setOauthType:(unsigned long long)arg1 ;
-(void)setOauthURI:(NSString *)arg1 ;
-(unsigned long long)oauthType;
-(void)_exchangeAuthCode:(id)arg1 forTokensAndUsernameWithCompletion:(/*^block*/id)arg2 ;
-(void)_exchangeAuthCode:(id)arg1 forTokensWithCompletion:(/*^block*/id)arg2 ;
-(id)_urlRequestForOAuthTokenFromAuthCode:(id)arg1 ;
-(id)initWithOAuthType:(unsigned long long)arg1 authURI:(id)arg2 username:(id)arg3 ;
-(NSString *)oauthURI;
@end

