/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SFFormAutoFillControllerDelegate.h>
#import <libobjc.A.dylib/WKNavigationDelegatePrivate.h>
#import <libobjc.A.dylib/WKUIDelegatePrivate.h>
#import <libobjc.A.dylib/_SFDialogControllerDelegate.h>
#import <libobjc.A.dylib/_SFDialogViewControllerPresenting.h>
#import <libobjc.A.dylib/_SFWebViewDelegate.h>
#import <libobjc.A.dylib/_WKInputDelegate.h>
#import <libobjc.A.dylib/_WKWebAuthenticationPanelDelegate.h>
#import <libobjc.A.dylib/_SFDialogPresenting.h>

@protocol SFWebViewControllerDelegate;
@class _SFFormAutoFillController, NSString, WKWebViewConfiguration, _SFDialogController, NSUUID, WKWebView, _SFAuthenticationContext;

@interface SFWebViewController : UIViewController <SFFormAutoFillControllerDelegate, WKNavigationDelegatePrivate, WKUIDelegatePrivate, _SFDialogControllerDelegate, _SFDialogViewControllerPresenting, _SFWebViewDelegate, _WKInputDelegate, _WKWebAuthenticationPanelDelegate, _SFDialogPresenting> {

	_SFFormAutoFillController* _autoFillController;
	BOOL _didFirstLayout;
	BOOL _didFinishDocumentLoad;
	BOOL _shouldSuppressDialogsThatBlockWebProcess;
	NSString* _domainWhereUserDeclinedAutomaticStrongPassword;
	BOOL _loading;
	BOOL _didFirstVisuallyNonEmptyLayout;
	BOOL _didFirstPaint;
	BOOL _hasFocusedInputFieldOnCurrentPage;
	BOOL _hasFormControlInteraction;
	id<SFWebViewControllerDelegate> _delegate;
	WKWebViewConfiguration* _webViewConfiguration;
	_SFDialogController* _dialogController;
	NSUUID* _UUID;

}

@property (nonatomic,readonly) WKWebView * webView; 
@property (assign,nonatomic,__weak) id<SFWebViewControllerDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isLoading,nonatomic) BOOL loading;                                           //@synthesize loading=_loading - In the implementation block
@property (nonatomic,readonly) BOOL didFirstVisuallyNonEmptyLayout;                                   //@synthesize didFirstVisuallyNonEmptyLayout=_didFirstVisuallyNonEmptyLayout - In the implementation block
@property (nonatomic,readonly) WKWebViewConfiguration * webViewConfiguration;                         //@synthesize webViewConfiguration=_webViewConfiguration - In the implementation block
@property (nonatomic,readonly) _SFDialogController * dialogController;                                //@synthesize dialogController=_dialogController - In the implementation block
@property (nonatomic,readonly) _SFAuthenticationContext * autoFillAuthenticationContext; 
@property (nonatomic,readonly) BOOL didFirstPaint;                                                    //@synthesize didFirstPaint=_didFirstPaint - In the implementation block
@property (nonatomic,readonly) BOOL hasFocusedInputFieldOnCurrentPage;                                //@synthesize hasFocusedInputFieldOnCurrentPage=_hasFocusedInputFieldOnCurrentPage - In the implementation block
@property (nonatomic,readonly) BOOL hasFormControlInteraction;                                        //@synthesize hasFormControlInteraction=_hasFormControlInteraction - In the implementation block
@property (nonatomic,copy) NSUUID * UUID;                                                             //@synthesize UUID=_UUID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(WKWebView *)webView;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSUUID *)UUID;
-(void)_webView:(id)arg1 contextMenuDidEndForElement:(id)arg2 ;
-(void)setLoading:(BOOL)arg1 ;
-(BOOL)isLoading;
-(id<SFWebViewControllerDelegate>)delegate;
-(void)_webViewDidCancelClientRedirect:(id)arg1 ;
-(void)_webViewWebProcessDidCrash:(id)arg1 ;
-(void)_webView:(id)arg1 contextMenuForElement:(id)arg2 willCommitWithAnimator:(id)arg3 ;
-(void)_webView:(id)arg1 willPerformClientRedirectToURL:(id)arg2 delay:(double)arg3 ;
-(void)_webView:(id)arg1 navigationDidFinishDocumentLoad:(id)arg2 ;
-(void)_webView:(id)arg1 navigation:(id)arg2 didSameDocumentNavigation:(long long)arg3 ;
-(void)_webView:(id)arg1 renderingProgressDidChange:(unsigned long long)arg2 ;
-(void)_webView:(id)arg1 authenticationChallenge:(id)arg2 shouldAllowLegacyTLS:(/*^block*/id)arg3 ;
-(void)_webView:(id)arg1 didNegotiateModernTLS:(id)arg2 ;
-(void)_webViewWillEndNavigationGesture:(id)arg1 withNavigationToBackForwardListItem:(id)arg2 ;
-(void)_webViewDidEndNavigationGesture:(id)arg1 withNavigationToBackForwardListItem:(id)arg2 ;
-(void)_webView:(id)arg1 didFinishLoadForQuickLookDocumentInMainFrame:(id)arg2 ;
-(void)_webView:(id)arg1 didStartLoadForQuickLookDocumentInMainFrameWithFileName:(id)arg2 uti:(id)arg3 ;
-(void)_webView:(id)arg1 willGoToBackForwardListItem:(id)arg2 inPageCache:(BOOL)arg3 ;
-(void)_webView:(id)arg1 decidePolicyForSOAuthorizationLoadWithCurrentPolicy:(long long)arg2 forExtension:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)webViewDidClose:(id)arg1 ;
-(void)_webView:(id)arg1 printFrame:(id)arg2 ;
-(void)presentDialog:(id)arg1 sender:(id)arg2 ;
-(void)_webView:(id)arg1 didPresentFocusedElementViewController:(id)arg2 ;
-(void)_webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_presentingViewControllerForWebView:(id)arg1 ;
-(void)_webView:(id)arg1 mediaCaptureStateDidChange:(unsigned long long)arg2 ;
-(void)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_webView:(id)arg1 requestStorageAccessPanelForDomain:(id)arg2 underCurrentDomain:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_webView:(id)arg1 didResignInputElementStrongPasswordAppearanceWithUserInfo:(id)arg2 ;
-(void)_webViewDidExitFullscreen:(id)arg1 ;
-(void)_webViewDidEnterFullscreen:(id)arg1 ;
-(void)setDelegate:(id<SFWebViewControllerDelegate>)arg1 ;
-(void)willActivateWebViewController;
-(void)_webView:(id)arg1 requestUserMediaAuthorizationForDevices:(unsigned long long)arg2 url:(id)arg3 mainFrameURL:(id)arg4 decisionHandler:(/*^block*/id)arg5 ;
-(void)_webView:(id)arg1 checkUserMediaPermissionForURL:(id)arg2 mainFrameURL:(id)arg3 frameIdentifier:(unsigned long long)arg4 decisionHandler:(/*^block*/id)arg5 ;
-(void)_webView:(id)arg1 runWebAuthenticationPanel:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(WKWebViewConfiguration *)webViewConfiguration;
-(void)_webView:(id)arg1 willSubmitFormValues:(id)arg2 userObject:(id)arg3 submissionHandler:(/*^block*/id)arg4 ;
-(void)panel:(id)arg1 updateWebAuthenticationPanel:(long long)arg2 ;
-(void)panel:(id)arg1 dismissWebAuthenticationPanelWithResult:(long long)arg2 ;
-(void)panel:(id)arg1 requestPINWithRemainingRetries:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)panel:(id)arg1 selectAssertionResponse:(id)arg2 source:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)panel:(id)arg1 decidePolicyForLocalAuthenticatorWithCompletionHandler:(/*^block*/id)arg2 ;
-(int)_analyticsClient;
-(void)_webView:(id)arg1 accessoryViewCustomButtonTappedInFormInputSession:(id)arg2 ;
-(void)_webView:(id)arg1 insertTextSuggestion:(id)arg2 inInputSession:(id)arg3 ;
-(void)_automaticPasswordInputViewNotification:(id)arg1 ;
-(void)_webView:(id)arg1 contextMenuWillPresentForElement:(id)arg2 ;
-(long long)_webView:(id)arg1 decidePolicyForFocusedElement:(id)arg2 ;
-(BOOL)_webView:(id)arg1 focusRequiresStrongPasswordAssistance:(id)arg2 ;
-(id)_webViewAdditionalContextForStrongPasswordAssistance:(id)arg1 ;
-(void)_webView:(id)arg1 willStartInputSession:(id)arg2 ;
-(void)_userDeclinedAutomaticStrongPasswordForCurrentDomainOnTabWithUUID:(id)arg1 ;
-(void)_webView:(id)arg1 didStartInputSession:(id)arg2 ;
-(BOOL)_webView:(id)arg1 fileUploadPanelContentIsManagedWithInitiatingFrame:(id)arg2 ;
-(id)formAutoFillControllerURLForFormAutoFill:(id)arg1 ;
-(void)_webView:(id)arg1 requestGeolocationAuthorizationForURL:(id)arg2 frame:(id)arg3 decisionHandler:(/*^block*/id)arg4 ;
-(BOOL)formAutoFillControllerCanPrefillForm:(id)arg1 ;
-(BOOL)formAutoFillControllerShouldShowIconsInPasswordPicker:(id)arg1 ;
-(void)_webView:(id)arg1 contextMenuConfigurationForElement:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)_webView:(id)arg1 shouldIncludeAppLinkActionsForElement:(id)arg2 ;
-(_SFAuthenticationContext *)autoFillAuthenticationContext;
-(void)formAutoFillControllerGetAuthenticationForAutoFill:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)formAutoFillControllerShouldDisableStreamlinedLogin:(id)arg1 ;
-(void)formAutoFillControllerUserChoseToUseGeneratedPassword:(id)arg1 ;
-(BOOL)didFirstVisuallyNonEmptyLayout;
-(long long)_webView:(id)arg1 dataOwnerForDragSession:(id)arg2 ;
-(long long)_webView:(id)arg1 dataOwnerForDropSession:(id)arg2 ;
-(BOOL)didFirstPaint;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3 ;
-(BOOL)formAutoFillControllerDidUserDeclineAutomaticStrongPasswordForCurrentDomain:(id)arg1 ;
-(void)formAutoFillControllerDidFocusSensitiveFormField:(id)arg1 ;
-(long long)dialogController:(id)arg1 presentationPolicyForDialog:(id)arg2 ;
-(void)dialogController:(id)arg1 willPresentDialog:(id)arg2 ;
-(void)dialogController:(id)arg1 presentViewController:(id)arg2 withAdditionalAnimations:(/*^block*/id)arg3 ;
-(void)dialogController:(id)arg1 dismissViewController:(id)arg2 withAdditionalAnimations:(/*^block*/id)arg3 ;
-(void)loadView;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 preferences:(id)arg3 decisionHandler:(/*^block*/id)arg4 ;
-(void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2 ;
-(void)webView:(id)arg1 didReceiveServerRedirectForProvisionalNavigation:(id)arg2 ;
-(void)webView:(id)arg1 didCommitNavigation:(id)arg2 ;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2 ;
-(void)webView:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setUUID:(NSUUID *)arg1 ;
-(void)_webView:(id)arg1 didChangeSafeAreaShouldAffectObscuredInsets:(BOOL)arg2 ;
-(void)sfWebViewDidChangeSafeAreaInsets:(id)arg1 ;
-(void)sfWebViewDidBecomeFirstResponder:(id)arg1 ;
-(void)sfWebViewDidStartFormControlInteraction:(id)arg1 ;
-(void)sfWebViewDidEndFormControlInteraction:(id)arg1 ;
-(id)sfWebView:(id)arg1 didStartDownload:(id)arg2 ;
-(BOOL)sfWebViewCanPromptForAccountSecurityRecommendation;
-(id)initWithWebViewConfiguration:(id)arg1 ;
-(void)willBeginUserInitiatedNavigation;
-(BOOL)hasFocusedInputFieldOnCurrentPage;
-(BOOL)hasFormControlInteraction;
-(_SFDialogController *)dialogController;
-(void)dealloc;
-(void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3 ;
@end

