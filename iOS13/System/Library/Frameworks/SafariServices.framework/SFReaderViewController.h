/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WKUIDelegate.h>

@protocol SFReaderViewControllerDelegate;
@class WKWebView, _SFBrowserContentViewController, NSString;

@interface SFReaderViewController : UIViewController <WKUIDelegate> {

	WKWebView* _originalWebView;
	_SFBrowserContentViewController* _containerViewController;
	id<SFReaderViewControllerDelegate> _delegate;

}

@property (nonatomic,readonly) WKWebView * readerWebView; 
@property (assign,nonatomic,__weak) _SFBrowserContentViewController * containerViewController;              //@synthesize containerViewController=_containerViewController - In the implementation block
@property (assign,nonatomic,__weak) id<SFReaderViewControllerDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SFReaderViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SFReaderViewControllerDelegate>)arg1 ;
-(void)loadView;
-(void)_webView:(id)arg1 contextMenuConfigurationForElement:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_webView:(id)arg1 contextMenuWillPresentForElement:(id)arg2 ;
-(void)_webView:(id)arg1 contextMenuForElement:(id)arg2 willCommitWithAnimator:(id)arg3 ;
-(void)_webView:(id)arg1 contextMenuDidEndForElement:(id)arg2 ;
-(id)initWithOriginalWebView:(id)arg1 ;
-(WKWebView *)readerWebView;
-(_SFBrowserContentViewController *)containerViewController;
-(void)setContainerViewController:(_SFBrowserContentViewController *)arg1 ;
@end

