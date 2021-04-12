/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/WKUIDelegate.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>
#import <libobjc.A.dylib/MFMailComposeViewControllerDelegate.h>
#import <libobjc.A.dylib/HUPreloadableViewController.h>

@class NSURL, HMHTMLDocument, UIScrollView, UIButton, NSString, NSFileManager, HUWebViewController, WKWebView;

@interface HUSoftwareUpdateLicenseViewController : UIViewController <UIScrollViewDelegate, WKUIDelegate, WKNavigationDelegate, MFMailComposeViewControllerDelegate, HUPreloadableViewController> {

	NSURL* _URL;
	HMHTMLDocument* _document;
	/*^block*/id _agreeHandler;
	/*^block*/id _disagreeHandler;
	UIScrollView* _scrollView;
	UIButton* _retainCopyOfTermsButton;
	NSString* _license;
	NSFileManager* _fileManager;
	HUWebViewController* _webViewController;

}

@property (nonatomic,readonly) UIScrollView * scrollView;                            //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,readonly) UIButton * retainCopyOfTermsButton;                   //@synthesize retainCopyOfTermsButton=_retainCopyOfTermsButton - In the implementation block
@property (nonatomic,readonly) WKWebView * webView; 
@property (nonatomic,readonly) NSString * license;                                   //@synthesize license=_license - In the implementation block
@property (nonatomic,retain) NSFileManager * fileManager;                            //@synthesize fileManager=_fileManager - In the implementation block
@property (nonatomic,readonly) HUWebViewController * webViewController;              //@synthesize webViewController=_webViewController - In the implementation block
@property (nonatomic,copy,readonly) NSURL * URL;                                     //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy,readonly) HMHTMLDocument * document;                       //@synthesize document=_document - In the implementation block
@property (nonatomic,copy) id agreeHandler;                                          //@synthesize agreeHandler=_agreeHandler - In the implementation block
@property (nonatomic,copy) id disagreeHandler;                                       //@synthesize disagreeHandler=_disagreeHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithURL:(id)arg1 ;
-(NSURL *)URL;
-(NSString *)license;
-(void)loadView;
-(WKWebView *)webView;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(UIScrollView *)scrollView;
-(id)initWithDocument:(id)arg1 ;
-(HMHTMLDocument *)document;
-(NSFileManager *)fileManager;
-(void)setFileManager:(NSFileManager *)arg1 ;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3 ;
-(HUWebViewController *)webViewController;
-(id)hu_preloadContent;
-(void)setAgreeHandler:(id)arg1 ;
-(void)setDisagreeHandler:(id)arg1 ;
-(id)_initWithWebViewController:(id)arg1 ;
-(void)_emailTermsAndConditions:(id)arg1 ;
-(UIButton *)retainCopyOfTermsButton;
-(id)loadLicense;
-(id)_evaluateHeight:(id)arg1 ;
-(void)_disagreeToTerms:(id)arg1 ;
-(void)_agreeToTerms:(id)arg1 ;
-(id)agreeHandler;
-(id)disagreeHandler;
@end

