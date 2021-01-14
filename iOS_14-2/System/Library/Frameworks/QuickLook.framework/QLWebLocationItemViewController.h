/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setAppearance:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateConstraintConstants:(BOOL)arg1 ;
-(void)loadView;
-(void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)canPinchToDismiss;
-(BOOL)canEnterFullScreen;
-(id)scrollView;
-(BOOL)canSwipeToDismiss;
-(BOOL)automaticallyUpdateScrollViewContentOffset;
-(BOOL)automaticallyUpdateScrollViewContentInset;
-(BOOL)automaticallyUpdateScrollViewIndicatorInset;
-(void)dealloc;
@end

