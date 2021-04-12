/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SocialServices.framework/SocialServices
*/

#import <Social/SLWebAuthController.h>

@class ACAccount, ACAccountStore, ASWebAuthenticationSession;

@interface SLGoogleAuthController : SLWebAuthController {

	ACAccount* _account;
	ACAccountStore* _accountStore;
	/*^block*/id _presentationBlock;
	ASWebAuthenticationSession* _authenticationSession;

}
+(void)_presentInternetOfflineError;
+(void)_presentUsernameMismatchAlert;
+(id)_identityFromUsername:(id)arg1 displayName:(id)arg2 token:(id)arg3 refreshToken:(id)arg4 ;
+(id)googleAuthControllerWithPresentationBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
+(id)googleAuthControllerWithAccount:(id)arg1 accountStore:(id)arg2 presentationBlock:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
+(id)googleAuthControllerWithYouTubeUsername:(id)arg1 presentationBlock:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)dealloc;
-(void)cancelAuthorization;
-(id)_webClient;
-(id)initWithAccountDescription:(id)arg1 presentationBlock:(/*^block*/id)arg2 ;
-(id)initWithAccount:(id)arg1 accountStore:(id)arg2 presentationBlock:(/*^block*/id)arg3 ;
-(id)_initWithAccount:(id)arg1 accountStore:(id)arg2 username:(id)arg3 youTube:(BOOL)arg4 presentationBlock:(/*^block*/id)arg5 completion:(/*^block*/id)arg6 ;
-(void)_dismissAndCompleteWithIdentity:(id)arg1 error:(id)arg2 ;
-(void)_didRedirectToURL:(id)arg1 codeVerifier:(id)arg2 ;
-(void)_completeWithIdentity:(id)arg1 error:(id)arg2 ;
-(id)_redirectPathForURI:(id)arg1 ;
@end

