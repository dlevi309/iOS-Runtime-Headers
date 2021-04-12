/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>

@protocol PKPaymentSetupViewControllerDelegate;
@class WKWebView, PKPaymentProvisioningController, NSURL, NSString;

@interface PKPaymentCardIneligibleViewController : UIViewController <WKNavigationDelegate> {

	WKWebView* _webView;
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

@property (assign,nonatomic) long long reason;                                                           //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) long long context;                                                          //@synthesize context=_context - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaymentSetupViewControllerDelegate> setupDelegate;              //@synthesize setupDelegate=_setupDelegate - In the implementation block
@property (nonatomic,retain) PKPaymentProvisioningController * provisioningController;                   //@synthesize provisioningController=_provisioningController - In the implementation block
@property (nonatomic,retain) NSURL * learnMoreURL;                                                       //@synthesize learnMoreURL=_learnMoreURL - In the implementation block
@property (nonatomic,copy) id learnMorePresentationHandler;                                              //@synthesize learnMorePresentationHandler=_learnMorePresentationHandler - In the implementation block
@property (nonatomic,copy) id continueActionHandler;                                                     //@synthesize continueActionHandler=_continueActionHandler - In the implementation block
@property (assign) BOOL preloadLearnMoreWebView;                                                         //@synthesize preloadLearnMoreWebView=_preloadLearnMoreWebView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)webView;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(long long)context;
-(id<PKPaymentSetupViewControllerDelegate>)setupDelegate;
-(void)preflightWithCompletion:(/*^block*/id)arg1 ;
-(void)setLearnMoreURL:(NSURL *)arg1 ;
-(void)viewDidLoad;
-(long long)reason;
-(PKPaymentProvisioningController *)provisioningController;
-(void)setProvisioningController:(PKPaymentProvisioningController *)arg1 ;
-(void)setContinueActionHandler:(id)arg1 ;
-(NSURL *)learnMoreURL;
-(void)setSetupDelegate:(id<PKPaymentSetupViewControllerDelegate>)arg1 ;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2 ;
-(void)setReason:(long long)arg1 ;
-(void)handleDone:(id)arg1 ;
-(id)_alertWithReason:(long long)arg1 learnMoreURL:(id)arg2 isPreloaded:(BOOL)arg3 ;
-(void)_webViewDidLoad:(BOOL)arg1 withError:(id)arg2 ;
-(id)initWithReason:(long long)arg1 context:(long long)arg2 setupDelegate:(id)arg3 ;
-(id)learnMorePresentationHandler;
-(void)setLearnMorePresentationHandler:(id)arg1 ;
-(id)continueActionHandler;
-(BOOL)preloadLearnMoreWebView;
-(void)setPreloadLearnMoreWebView:(BOOL)arg1 ;
-(void)dealloc;
-(void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3 ;
-(void)setContext:(long long)arg1 ;
@end

