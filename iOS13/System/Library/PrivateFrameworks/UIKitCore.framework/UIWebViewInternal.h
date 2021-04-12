/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UIWebViewDelegate;
@class UIScrollView, UIWebBrowserView, UICheckeredPatternView, NSURLRequest, UIWebViewWebViewDelegate, UIWebPDFViewHandler;

@interface UIWebViewInternal : NSObject {

	UIScrollView* scroller;
	UIWebBrowserView* browserView;
	UICheckeredPatternView* checkeredPatternView;
	id<UIWebViewDelegate> delegate;
	unsigned scalesPageToFit : 1;
	unsigned isLoading : 1;
	unsigned hasOverriddenOrientationChangeEventHandling : 1;
	unsigned drawsCheckeredPattern : 1;
	unsigned webSelectionEnabled : 1;
	unsigned drawInWebThread : 1;
	unsigned inRotation : 1;
	unsigned didRotateEnclosingScrollView : 1;
	unsigned safeAreaShouldAffectObscuredInsets : 1;
	NSURLRequest* request;
	long long clickedAlertButtonIndex;
	UIWebViewWebViewDelegate* webViewDelegate;
	UIWebPDFViewHandler* pdfHandler;

}
@end

