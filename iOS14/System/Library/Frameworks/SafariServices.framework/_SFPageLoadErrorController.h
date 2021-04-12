/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <libobjc.A.dylib/WBSCertificateWarningPageHandler.h>

@protocol OS_dispatch_queue, WBSCertificateWarningPagePresenter, _SFPageLoadErrorControllerDelegate, _SFDialogPresenting;
@class WKWebView, NSTimer, NSObject, _WKRemoteObjectInterface, NSURL, UINavigationController, WBSCertificateWarningPageContext, NSURLRequest, NSString;

@interface _SFPageLoadErrorController : NSObject <WBSCertificateWarningPageHandler> {

	BOOL _reloadAfterResume;
	WKWebView* _webView;
	NSTimer* _crashCountResetTimer;
	NSObject*<OS_dispatch_queue> _certManagerQueue;
	id<WBSCertificateWarningPagePresenter> _certificateWarningPagePresenterProxy;
	_WKRemoteObjectInterface* _certificateWarningPageHandlerInterface;
	BOOL _certificateWarningPageHandlerInterfaceInvalidated;
	SecTrustRef _certificateTrust;
	/*^block*/id _certificateRecoveryAttempter;
	NSURL* _certificateFailingURL;
	UINavigationController* _certificateNavigationViewController;
	WBSCertificateWarningPageContext* _legacyTLSWarningPageContext;
	NSURL* _clickThroughURL;
	BOOL _reloadingFailedRequest;
	id<_SFPageLoadErrorControllerDelegate> _delegate;
	NSURLRequest* _failedRequest;
	unsigned long long _crashesSinceLastSuccessfulLoad;
	id<_SFDialogPresenting> _dialogPresenter;

}

@property (assign,nonatomic,__weak) id<_SFPageLoadErrorControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL reloadingFailedRequest;                                       //@synthesize reloadingFailedRequest=_reloadingFailedRequest - In the implementation block
@property (nonatomic,readonly) NSURLRequest * failedRequest;                                      //@synthesize failedRequest=_failedRequest - In the implementation block
@property (nonatomic,readonly) unsigned long long crashesSinceLastSuccessfulLoad;                 //@synthesize crashesSinceLastSuccessfulLoad=_crashesSinceLastSuccessfulLoad - In the implementation block
@property (assign,nonatomic,__weak) id<_SFDialogPresenting> dialogPresenter;                      //@synthesize dialogPresenter=_dialogPresenter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)visitInsecureWebsiteWithTemporaryBypass;
-(void)_loadCertificateWarningPageForContext:(id)arg1 ;
-(void)goBackButtonClicked;
-(void)showCertificateInformation;
-(void)addFormAlertWithTitle:(id)arg1 decisionHandler:(/*^block*/id)arg2 ;
-(void)_continueWithoutCredentialsUsingAlertContext:(id)arg1 ;
-(void)addDialog:(id)arg1 ;
-(void)_continueAfterCertificateAlertWithURL:(id)arg1 trust:(SecTrustRef)arg2 recoveryAttempter:(/*^block*/id)arg3 ;
-(id<_SFPageLoadErrorControllerDelegate>)delegate;
-(NSURLRequest *)failedRequest;
-(void)_showRepeatedWebProcessCrashError:(id)arg1 URLString:(id)arg2 ;
-(void)handleLegacyTLSWithFailingURL:(id)arg1 clickThroughURL:(id)arg2 authenticationChallenge:(id)arg3 ;
-(id)_certificateWarningPagePresenterProxy;
-(void)setDialogPresenter:(id<_SFDialogPresenting>)arg1 ;
-(void)_setFailedRequest:(id)arg1 ;
-(void)addAlert:(id)arg1 ;
-(void)openClockSettings;
-(void)clearFailedRequest;
-(void)addInvalidURLAlert;
-(void)scheduleResetCrashCount;
-(void)setDelegate:(id<_SFPageLoadErrorControllerDelegate>)arg1 ;
-(void)_resetCrashCount:(id)arg1 ;
-(void)visitInsecureWebsite;
-(id<_SFDialogPresenting>)dialogPresenter;
-(void)performAction:(int)arg1 forAlert:(id)arg2 ;
-(void)_reachabilityChanged:(id)arg1 ;
-(void)reloadAfterError;
-(void)_dismissCertificateViewButtonTapped;
-(id)initWithWebView:(id)arg1 ;
-(void)showErrorPageWithTitle:(id)arg1 bodyText:(id)arg2 learnMoreLink:(id)arg3 forError:(id)arg4 ;
-(void)_handleFrameLoadError:(id)arg1 forURL:(id)arg2 recoveryAttempter:(/*^block*/id)arg3 ;
-(void)handleClientCertificateAuthenticationChallenge:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addDownloadFailedAlertWithDescription:(id)arg1 ;
-(void)addAlertWithTitle:(id)arg1 bodyText:(id)arg2 ;
-(id)_specializedMessageForError:(id)arg1 URL:(id)arg2 ;
-(void)handleFrameLoadError:(id)arg1 ;
-(void)addInvalidProfileAlert;
-(id)_genericMessageForError:(id)arg1 ;
-(void)invalidate;
-(void)showErrorPageWithTitle:(id)arg1 bodyText:(id)arg2 forError:(id)arg3 ;
-(void)clearCrashCountResetTimer;
-(void)_resetCrashCountSoon;
-(void)_clearCertificateWarningPageHandlerInterface;
-(void)_setUpCertificateWarningPageHandlerInterface;
-(unsigned long long)crashesSinceLastSuccessfulLoad;
-(void)addDisallowedUseOfJavaScriptAlert;
-(void)_handleCertificateError:(id)arg1 forURL:(id)arg2 isMainFrame:(BOOL)arg3 recoveryAttempter:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(BOOL)updateCrashesAndShowCrashError:(id)arg1 URLString:(id)arg2 ;
-(void)addDisallowedFileURLAlert;
-(BOOL)reloadingFailedRequest;
-(id)_titleForError:(id)arg1 ;
-(void)dealloc;
-(void)handleSubframeCertificateError:(id)arg1 ;
@end
