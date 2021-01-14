/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DAEASOAuthFramework.framework/DAEASOAuthFramework
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIWebViewDelegate.h>

@class ACAccount, ACAccountStore, UIViewController, NSExtension, NSError, NSString;

@interface DAEASOAuthWebViewController : UIViewController <UIWebViewDelegate> {

	ACAccount* _account;
	ACAccountStore* _accountStore;
	/*^block*/id _presentationBlock;
	UIViewController* _serviceViewController;
	NSExtension* _extension;
	NSError* _extensionCancellationError;
	BOOL _extensionRequestDidComplete;
	NSString* _authURI;
	unsigned long long _oauthType;
	BOOL _isFirstTimeSetup;
	/*^block*/id _completion;

}

@property (nonatomic,copy) id completion;                           //@synthesize completion=_completion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)presentInternetOfflineError;
+(void)presentUsernameMismatchAlert;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)initWithAccountDescription:(id)arg1 presentationBlock:(/*^block*/id)arg2 ;
-(id)initWithAccount:(id)arg1 accountStore:(id)arg2 presentationBlock:(/*^block*/id)arg3 ;
-(void)_extensionRequestDidCancelWithError:(id)arg1 ;
-(void)_extensionRequestDidCompleteWithTokens:(id)arg1 extensionCompletion:(/*^block*/id)arg2 ;
-(void)_didInstantiateRemoteViewController;
-(void)_dismissAndCompleteWithIdentity:(id)arg1 error:(id)arg2 extensionCompletion:(/*^block*/id)arg3 ;
-(void)_commonInitializationWithAccount:(id)arg1 accountStore:(id)arg2 username:(id)arg3 accountDescription:(id)arg4 presentationBlock:(/*^block*/id)arg5 ;
-(id)initWithAccount:(id)arg1 accountStore:(id)arg2 authURI:(id)arg3 accountType:(unsigned long long)arg4 userName:(id)arg5 accountDescription:(id)arg6 isFirstTimeSetup:(BOOL)arg7 presentationBlock:(/*^block*/id)arg8 ;
@end

