/*
* Generated on Thursday, January 14, 2021 at 2:20:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

