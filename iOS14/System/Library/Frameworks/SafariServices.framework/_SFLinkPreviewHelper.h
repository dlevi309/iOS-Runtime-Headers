/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <libobjc.A.dylib/_SFAdaptivePreviewViewControllerDelegate.h>

@protocol _SFLinkPreviewHandler;
@class WBSAppLink, UIViewController, NSURL, _WKActivatedElementInfo, WKWebView, _SFLinkPreviewHeader, NSString;

@interface _SFLinkPreviewHelper : NSObject <_SFAdaptivePreviewViewControllerDelegate> {

	WBSAppLink* _appLink;
	UIViewController* _cachedPreviewViewController;
	NSURL* _fallbackURL;
	id<_SFLinkPreviewHandler> _handler;
	_WKActivatedElementInfo* _elementInfo;
	WKWebView* _webView;
	_SFLinkPreviewHeader* _activeLinkPreviewHeader;

}

@property (nonatomic,readonly) _WKActivatedElementInfo * elementInfo;                            //@synthesize elementInfo=_elementInfo - In the implementation block
@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,readonly) WKWebView * webView;                                              //@synthesize webView=_webView - In the implementation block
@property (nonatomic,readonly) UIViewController * previewContentViewController; 
@property (assign,nonatomic,__weak) _SFLinkPreviewHeader * activeLinkPreviewHeader;              //@synthesize activeLinkPreviewHeader=_activeLinkPreviewHeader - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(void)commitPreviewViewController:(id)arg1 ;
+(/*^block*/id)openInNewTabAnalyticsHandler;
+(void)setOpenInNewTabAnalyticsHandler:(/*^block*/id)arg1 ;
+(id)contextMenuConfigurationForWebView:(id)arg1 elementInfo:(id)arg2 handler:(id)arg3 ;
+(id)linkPreviewHelperForWebView:(id)arg1 ;
+(void)invalidateLinkPreviewHelperForWebView:(id)arg1 ;
+(id)previewViewControllerWebView:(id)arg1 url:(id)arg2 handler:(id)arg3 ;
-(WKWebView *)webView;
-(void)setActiveLinkPreviewHeader:(_SFLinkPreviewHeader *)arg1 ;
-(id)adaptivePreviewViewController:(id)arg1 requestLinkPreviewViewControllerWithURL:(id)arg2 ;
-(double)headerViewHeightForAdaptivePreviewViewController:(id)arg1 ;
-(NSURL *)url;
-(void)invalidate;
-(id)initWithWebView:(id)arg1 elementInfo:(id)arg2 orURL:(id)arg3 handler:(id)arg4 ;
-(id)makeContextMenuConfiguration;
-(void)commitPreviewViewController;
-(BOOL)_previewViewControllerIsLinkPreview;
-(void)invalidateElementInfo;
-(id)previewViewController;
-(id)menuWithSuggestedActions:(id)arg1 ;
-(id)makePreviewViewController;
-(id)previewViewControllerForURL:(id)arg1 ;
-(id)menuElementsForSuggestedActions:(id)arg1 ;
-(_SFLinkPreviewHeader *)activeLinkPreviewHeader;
-(id)openActionForRedirectToExternalNavigationResult:(id)arg1 ;
-(id)downloadActionForURL:(id)arg1 ;
-(id)openActionForAlternateURL:(id)arg1 ;
-(id)openInNewTabActionForURL:(id)arg1 preActionHandler:(/*^block*/id)arg2 ;
-(id)openInNewWindowActionForURL:(id)arg1 ;
-(void)openURL:(id)arg1 forAction:(long long)arg2 ;
-(id)addToReadingListActionForURL:(id)arg1 ;
-(void)dealloc;
-(UIViewController *)previewContentViewController;
-(_WKActivatedElementInfo *)elementInfo;
@end

