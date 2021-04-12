/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QLItemViewController.h>

@class WKWebView, NSLayoutConstraint;

@interface QLWebLocationItemViewController : QLItemViewController {

	WKWebView* _webView;
	/*^block*/id _loadingHandler;
	NSLayoutConstraint* _leftConstraint;
	NSLayoutConstraint* _rightConstraint;

}
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)loadView;
-(id)scrollView;
-(BOOL)canSwipeToDismiss;
-(void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)canPinchToDismiss;
-(BOOL)canEnterFullScreen;
-(void)setAppearance:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateConstraintConstants:(BOOL)arg1 ;
-(BOOL)automaticallyUpdateScrollViewContentOffset;
-(BOOL)automaticallyUpdateScrollViewContentInset;
-(BOOL)automaticallyUpdateScrollViewIndicatorInset;
@end

