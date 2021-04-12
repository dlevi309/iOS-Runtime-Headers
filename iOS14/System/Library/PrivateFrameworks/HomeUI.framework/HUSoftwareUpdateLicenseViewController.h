/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSFileManager *)fileManager;
-(WKWebView *)webView;
-(void)setFileManager:(NSFileManager *)arg1 ;
-(void)viewWillLayoutSubviews;
-(id)initWithURL:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)hu_preloadContent;
-(HUWebViewController *)webViewController;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(id)initWithDocument:(id)arg1 ;
-(void)viewDidLoad;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3 ;
-(NSURL *)URL;
-(NSString *)license;
-(void)loadView;
-(HMHTMLDocument *)document;
-(UIScrollView *)scrollView;
-(void)viewDidLayoutSubviews;
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

