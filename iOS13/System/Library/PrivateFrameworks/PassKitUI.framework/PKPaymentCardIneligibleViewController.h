/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIWebViewDelegate.h>

@protocol PKPaymentSetupViewControllerDelegate;
@class UIWebView, PKPaymentProvisioningController, NSURL, NSString;

@interface PKPaymentCardIneligibleViewController : UIViewController <UIWebViewDelegate> {

	UIWebView* _webView;
	/*^block*/id _preflightCompletion;
	BOOL _preloadLearnMoreWebView;
	long long _reason;
	long long _context;
	id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
	PKPaymentProvisioningController* _provisioningController;
	NSURL* _learnMoreURL;
	/*^block*/id _learnMorePresentationHandler;
	/*^block*/id _continueActionHandler;

}

@property (assign,nonatomic) long long reason;                                                      //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) long long context;                                                     //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) id<PKPaymentSetupViewControllerDelegate> setupDelegate;                //@synthesize setupDelegate=_setupDelegate - In the implementation block
@property (nonatomic,retain) PKPaymentProvisioningController * provisioningController;              //@synthesize provisioningController=_provisioningController - In the implementation block
@property (nonatomic,retain) NSURL * learnMoreURL;                                                  //@synthesize learnMoreURL=_learnMoreURL - In the implementation block
@property (nonatomic,copy) id learnMorePresentationHandler;                                         //@synthesize learnMorePresentationHandler=_learnMorePresentationHandler - In the implementation block
@property (nonatomic,copy) id continueActionHandler;                                                //@synthesize continueActionHandler=_continueActionHandler - In the implementation block
@property (assign) BOOL preloadLearnMoreWebView;                                                    //@synthesize preloadLearnMoreWebView=_preloadLearnMoreWebView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(long long)reason;
-(long long)context;
-(void)setContext:(long long)arg1 ;
-(void)setReason:(long long)arg1 ;
-(id)webView;
-(void)viewDidLoad;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(void)preflightWithCompletion:(/*^block*/id)arg1 ;
-(NSURL *)learnMoreURL;
-(void)setSetupDelegate:(id<PKPaymentSetupViewControllerDelegate>)arg1 ;
-(PKPaymentProvisioningController *)provisioningController;
-(id<PKPaymentSetupViewControllerDelegate>)setupDelegate;
-(void)setProvisioningController:(PKPaymentProvisioningController *)arg1 ;
-(void)setContinueActionHandler:(id)arg1 ;
-(void)handleDone:(id)arg1 ;
-(id)_alertWithReason:(long long)arg1 learnMoreURL:(id)arg2 isPreloaded:(BOOL)arg3 ;
-(void)_webViewDidLoad:(BOOL)arg1 withError:(id)arg2 ;
-(id)initWithReason:(long long)arg1 context:(long long)arg2 setupDelegate:(id)arg3 ;
-(void)setLearnMoreURL:(NSURL *)arg1 ;
-(id)learnMorePresentationHandler;
-(void)setLearnMorePresentationHandler:(id)arg1 ;
-(id)continueActionHandler;
-(BOOL)preloadLearnMoreWebView;
-(void)setPreloadLearnMoreWebView:(BOOL)arg1 ;
@end

