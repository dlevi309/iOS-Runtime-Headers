/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QuickLook-Structs.h>
#import <QuickLook/QLItemViewController.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>
#import <libobjc.A.dylib/QLPrintingProtocol.h>
#import <libobjc.A.dylib/QLScrubViewDataSource.h>
#import <libobjc.A.dylib/QLScrubViewDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol QLWebKitThumbnailGenerator, QLWebKitPaginator;
@class NSString, UIPrintPageRenderer, QLScrubView, NSLayoutConstraint, NSOperationQueue, NSCache, WKWebView;

@interface QLWKWebItemViewController : QLItemViewController <WKNavigationDelegate, QLPrintingProtocol, QLScrubViewDataSource, QLScrubViewDelegate, UIScrollViewDelegate> {

	NSString* _previewContentType;
	CGPoint _scrollViewTopOffset;
	/*^block*/id _completionHandler;
	UIPrintPageRenderer* _renderer;
	BOOL _fullScreen;
	id<QLWebKitThumbnailGenerator> _thumbnailGenerator;
	id<QLWebKitPaginator> _paginator;
	CGSize _pageSize;
	QLScrubView* _scrubView;
	long long _thumbnailCount;
	CGSize _thumbnailSize;
	NSLayoutConstraint* _scrubberRightConstraint;
	NSLayoutConstraint* _leftConstraint;
	NSLayoutConstraint* _rightConstraint;
	NSOperationQueue* _operationQueue;
	NSCache* _indexToThumbnailsCache;
	WKWebView* _webView;

}

@property (nonatomic,retain) NSOperationQueue * operationQueue;              //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain) NSCache * indexToThumbnailsCache;               //@synthesize indexToThumbnailsCache=_indexToThumbnailsCache - In the implementation block
@property (nonatomic,retain) WKWebView * webView;                            //@synthesize webView=_webView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_shouldDisableJavaScriptForContentType:(id)arg1 ;
-(NSOperationQueue *)operationQueue;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)loadView;
-(WKWebView *)webView;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(long long)preferredWhitePointAdaptivityStyle;
-(id)scrollView;
-(id)transitioningView;
-(id)scrubView;
-(id)printer;
-(void)setWebView:(WKWebView *)arg1 ;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3 ;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2 ;
-(void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3 ;
-(void)webViewWebContentProcessDidTerminate:(id)arg1 ;
-(void)_webViewDidRequestPasswordForQuickLookDocument:(id)arg1 ;
-(unsigned long long)currentPageNumber;
-(id)_renderer;
-(BOOL)shouldAcceptTouch:(id)arg1 ofGestureRecognizer:(id)arg2 ;
-(BOOL)canSwipeToDismiss;
-(void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)canPinchToDismiss;
-(void)setAppearance:(id)arg1 animated:(BOOL)arg2 ;
-(void)transitionWillFinish:(BOOL)arg1 didComplete:(BOOL)arg2 ;
-(void)transitionDidStart:(BOOL)arg1 ;
-(void)previewWillAppear:(BOOL)arg1 ;
-(void)previewDidAppear:(BOOL)arg1 ;
-(long long)numberOfPagesInScrubView:(id)arg1 ;
-(void)scrubView:(id)arg1 didSelectPageAtIndex:(unsigned long long)arg2 ;
-(CGSize)scrubView:(id)arg1 pageSizeAtIndex:(unsigned long long)arg2 ;
-(void)scrubView:(id)arg1 thumbnailForPage:(long long)arg2 size:(CGSize)arg3 withCompletionBlock:(/*^block*/id)arg4 ;
-(void)_registerRemoteProxy;
-(void)_updateScrubberVisibilityAnimated:(BOOL)arg1 ;
-(void)previewBecameFullScreen:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateConstraintConstants:(BOOL)arg1 ;
-(void)_updateScrubberVisibilityAnimated:(BOOL)arg1 reloadThumbnailsIfNeeded:(BOOL)arg2 ;
-(void)_updateScrubberForTraitCollection:(id)arg1 animated:(BOOL)arg2 reloadThumbnailsIfNeeded:(BOOL)arg3 ;
-(void)_showScrubberIfNeeded:(BOOL)arg1 reloadThumbnails:(BOOL)arg2 ;
-(void)_hideScrubberIfNeeded:(BOOL)arg1 ;
-(void)_prepareThumbnailView;
-(id)_thumbnailAtIndex:(unsigned long long)arg1 ;
-(void)_addThumbnailToCache:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_scrollToPage:(long long)arg1 ;
-(void)numberOfPagesWithSize:(CGSize)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)prepareForDrawingPages:(NSRange)arg1 ofSize:(CGSize)arg2 ;
-(void)pdfDataForPageAtIndex:(long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)provideCurrentPageAndVisibleRectWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)automaticallyUpdateScrollViewContentOffset;
-(BOOL)automaticallyUpdateScrollViewContentInset;
-(BOOL)automaticallyUpdateScrollViewIndicatorInset;
-(BOOL)canClickToToggleFullscreen;
-(NSCache *)indexToThumbnailsCache;
-(void)setIndexToThumbnailsCache:(NSCache *)arg1 ;
@end

