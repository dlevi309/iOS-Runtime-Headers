/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/

#import <UIKitCore/UIViewController.h>

@protocol SLWebClient;
@class ACAccount, ACAccountStore, UIViewController, NSExtension, NSError, NSString;

@interface SLWebAuthController : UIViewController {

	ACAccount* _account;
	ACAccountStore* _accountStore;
	/*^block*/id _presentationBlock;
	UIViewController* _serviceViewController;
	NSExtension* _extension;
	NSError* _extensionCancellationError;
	BOOL _extensionRequestDidComplete;
	/*^block*/id _completion;
	id<SLWebClient> __webClient;
	NSString* __extentionIdentifier;

}

@property (readonly) id<SLWebClient> _webClient;                   //@synthesize _webClient=__webClient - In the implementation block
@property (readonly) NSString * _extentionIdentifier;              //@synthesize _extentionIdentifier=__extentionIdentifier - In the implementation block
@property (nonatomic,copy) id completion;                          //@synthesize completion=_completion - In the implementation block
-(void)setCompletion:(id)arg1 ;
-(id)init;
-(id)completion;
-(id)_init;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id<SLWebClient>)_webClient;
-(id)initWithAccountDescription:(id)arg1 presentationBlock:(/*^block*/id)arg2 ;
-(id)initWithAccount:(id)arg1 accountStore:(id)arg2 presentationBlock:(/*^block*/id)arg3 ;
-(void)_commonInitializationWithAccount:(id)arg1 accountStore:(id)arg2 username:(id)arg3 accountDescription:(id)arg4 youTube:(BOOL)arg5 presentationBlock:(/*^block*/id)arg6 ;
-(NSString *)_extentionIdentifier;
-(void)_extensionRequestDidCancelWithError:(id)arg1 ;
-(void)_extensionRequestDidCompleteWithTokens:(id)arg1 extensionCompletion:(/*^block*/id)arg2 ;
-(id)_extensionItemForAccount:(id)arg1 accountDescription:(id)arg2 username:(id)arg3 youTube:(BOOL)arg4 ;
-(void)_didInstantiateRemoteViewController;
-(void)_presentInternetOfflineError;
-(void)_dismissAndCompleteWithIdentity:(id)arg1 error:(id)arg2 extensionCompletion:(/*^block*/id)arg3 ;
-(void)_presentUsernameMismatchAlert;
@end

