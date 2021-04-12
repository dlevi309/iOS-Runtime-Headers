/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_webView:(id)arg1 contextMenuDidEndForElement:(id)arg2 ;
-(_SFBrowserContentViewController *)containerViewController;
-(id<SFReaderViewControllerDelegate>)delegate;
-(void)_webView:(id)arg1 contextMenuForElement:(id)arg2 willCommitWithAnimator:(id)arg3 ;
-(void)setContainerViewController:(_SFBrowserContentViewController *)arg1 ;
-(id)initWithOriginalWebView:(id)arg1 ;
-(void)setDelegate:(id<SFReaderViewControllerDelegate>)arg1 ;
-(WKWebView *)readerWebView;
-(void)_webView:(id)arg1 contextMenuWillPresentForElement:(id)arg2 ;
-(void)_webView:(id)arg1 contextMenuConfigurationForElement:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)loadView;
@end

