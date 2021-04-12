/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SXScrollViewControllerDelegate.h>
#import <libobjc.A.dylib/SXAnalyticsReporting.h>
#import <libobjc.A.dylib/NUANFDebugSettingsObserver.h>
#import <libobjc.A.dylib/NULoadable.h>
#import <libobjc.A.dylib/NUBarCompressible.h>

@protocol NULoadingDelegate, SXAnalyticsReporting, NUArticleDataProvider, NUEndOfArticleDataProvider, NUArticleKeyCommandManager, NUDocumentSectionBlueprintProvider, NUANFDebugSettingsProvider;
@class UIScrollView, NSString, FCObservable, NFMultiDelegate, NUArticleContext, SXScrollViewController, NUArticleAdManager, NFEventManager, NSHashTable, SXVideoPlayerViewControllerManager, UIResponder;

@interface NUArticleViewController : UIViewController <SXScrollViewControllerDelegate, SXAnalyticsReporting, NUANFDebugSettingsObserver, NULoadable, NUBarCompressible> {

	BOOL _articleIsPresentingFullscreen;
	BOOL _isShowingDeferredHardPayall;
	id<NULoadingDelegate> _loadingDelegate;
	NSString* _contentSizeCategory;
	long long _contentScale;
	id<SXAnalyticsReporting> _analyticsReporting;
	FCObservable* _articleViewStyler;
	NFMultiDelegate* _multiScrollViewDelegate;
	UIScrollView* _scrollView;
	NSString* _anchorFragment;
	NUArticleContext* _articleContext;
	SXScrollViewController* _scrollViewController;
	id<NUArticleDataProvider> _articleDataProvider;
	id<NUEndOfArticleDataProvider> _endOfArticleDataProvider;
	NUArticleAdManager* _adManager;
	NFEventManager* _eventManager;
	id<NUArticleKeyCommandManager> _keyCommandManager;
	NSHashTable* _loadingListeners;
	id<NUDocumentSectionBlueprintProvider> _documentSectionBlueprintProvider;
	id<NUANFDebugSettingsProvider> _debugSettingsProvider;
	unsigned long long _presentationMode;
	SXVideoPlayerViewControllerManager* _videoPlayerViewControllerManager;

}

@property (nonatomic,readonly) SXScrollViewController * scrollViewController;                                        //@synthesize scrollViewController=_scrollViewController - In the implementation block
@property (nonatomic,readonly) id<NUArticleDataProvider> articleDataProvider;                                        //@synthesize articleDataProvider=_articleDataProvider - In the implementation block
@property (nonatomic,readonly) id<NUEndOfArticleDataProvider> endOfArticleDataProvider;                              //@synthesize endOfArticleDataProvider=_endOfArticleDataProvider - In the implementation block
@property (nonatomic,readonly) NUArticleAdManager * adManager;                                                       //@synthesize adManager=_adManager - In the implementation block
@property (nonatomic,readonly) NFEventManager * eventManager;                                                        //@synthesize eventManager=_eventManager - In the implementation block
@property (nonatomic,readonly) id<NUArticleKeyCommandManager> keyCommandManager;                                     //@synthesize keyCommandManager=_keyCommandManager - In the implementation block
@property (nonatomic,readonly) NSHashTable * loadingListeners;                                                       //@synthesize loadingListeners=_loadingListeners - In the implementation block
@property (nonatomic,readonly) id<NUDocumentSectionBlueprintProvider> documentSectionBlueprintProvider;              //@synthesize documentSectionBlueprintProvider=_documentSectionBlueprintProvider - In the implementation block
@property (nonatomic,readonly) id<NUANFDebugSettingsProvider> debugSettingsProvider;                                 //@synthesize debugSettingsProvider=_debugSettingsProvider - In the implementation block
@property (assign,nonatomic) BOOL articleIsPresentingFullscreen;                                                     //@synthesize articleIsPresentingFullscreen=_articleIsPresentingFullscreen - In the implementation block
@property (assign,nonatomic) unsigned long long presentationMode;                                                    //@synthesize presentationMode=_presentationMode - In the implementation block
@property (assign,nonatomic) BOOL isShowingDeferredHardPayall;                                                       //@synthesize isShowingDeferredHardPayall=_isShowingDeferredHardPayall - In the implementation block
@property (nonatomic,readonly) SXVideoPlayerViewControllerManager * videoPlayerViewControllerManager;                //@synthesize videoPlayerViewControllerManager=_videoPlayerViewControllerManager - In the implementation block
@property (assign,nonatomic,__weak) id<SXAnalyticsReporting> analyticsReporting;                                     //@synthesize analyticsReporting=_analyticsReporting - In the implementation block
@property (nonatomic,readonly) FCObservable * articleViewStyler;                                                     //@synthesize articleViewStyler=_articleViewStyler - In the implementation block
@property (nonatomic,readonly) NFMultiDelegate * multiScrollViewDelegate;                                            //@synthesize multiScrollViewDelegate=_multiScrollViewDelegate - In the implementation block
@property (nonatomic,readonly) UIScrollView * scrollView;                                                            //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,copy) NSString * anchorFragment;                                                                //@synthesize anchorFragment=_anchorFragment - In the implementation block
@property (nonatomic,retain) NSString * contentSizeCategory;                                                         //@synthesize contentSizeCategory=_contentSizeCategory - In the implementation block
@property (assign,nonatomic) long long contentScale;                                                                 //@synthesize contentScale=_contentScale - In the implementation block
@property (nonatomic,retain) NUArticleContext * articleContext;                                                      //@synthesize articleContext=_articleContext - In the implementation block
@property (nonatomic,readonly) UIResponder * responder; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<NULoadingDelegate> loadingDelegate;                                           //@synthesize loadingDelegate=_loadingDelegate - In the implementation block
+(id)_parentOrPresentingViewControllerFor:(id)arg1 ;
-(void)setContentSizeCategory:(NSString *)arg1 ;
-(NSString *)contentSizeCategory;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)becomeFirstResponder;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)resignFirstResponder;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(UIResponder *)responder;
-(long long)preferredStatusBarStyle;
-(UIScrollView *)scrollView;
-(void)viewSafeAreaInsetsDidChange;
-(BOOL)prefersStatusBarHidden;
-(long long)contentScale;
-(void)setContentScale:(long long)arg1 ;
-(void)scrollToTopAnimated:(BOOL)arg1 ;
-(unsigned long long)presentationMode;
-(void)reportEvent:(id)arg1 ;
-(SXScrollViewController *)scrollViewController;
-(id<NUArticleKeyCommandManager>)keyCommandManager;
-(NSHashTable *)loadingListeners;
-(id)initWithArticleDataProvider:(id)arg1 scrollViewController:(id)arg2 articleAdManager:(id)arg3 appStateMonitor:(id)arg4 keyCommandManager:(id)arg5 loadingListeners:(id)arg6 headerBlueprintProvider:(id)arg7 debugSettingsProvider:(id)arg8 videoPlayerViewControllerManager:(id)arg9 ;
-(id<NULoadingDelegate>)loadingDelegate;
-(void)setLoadingDelegate:(id<NULoadingDelegate>)arg1 ;
-(NFEventManager *)eventManager;
-(id<NUArticleDataProvider>)articleDataProvider;
-(id<NUDocumentSectionBlueprintProvider>)documentSectionBlueprintProvider;
-(void)updateScrollViewControllerWithHeaderBlueprint:(id)arg1 ;
-(void)updateScrollViewControllerWithContentOverlayBlueprint:(id)arg1 topOffset:(double)arg2 ;
-(void)updateScrollViewControllerWithFooterBlueprint:(id)arg1 ;
-(NUArticleContext *)articleContext;
-(SXVideoPlayerViewControllerManager *)videoPlayerViewControllerManager;
-(void)setArticleContext:(NUArticleContext *)arg1 ;
-(NUArticleAdManager *)adManager;
-(FCObservable *)articleViewStyler;
-(void)updatePresentationAttributes;
-(void)restoreScrollPositionIfNeeded;
-(void)setArticleIsPresentingFullscreen:(BOOL)arg1 ;
-(BOOL)articleIsPresentingFullscreen;
-(void)setPresentationMode:(unsigned long long)arg1 ;
-(void)updateTextSelectionForPaywallPresentation;
-(id<SXAnalyticsReporting>)analyticsReporting;
-(NSString *)anchorFragment;
-(id)currentPresentationAttributes;
-(void)setIsShowingDeferredHardPayall:(BOOL)arg1 ;
-(id<NUANFDebugSettingsProvider>)debugSettingsProvider;
-(BOOL)isPreviewingOrShowingHardPaywall;
-(BOOL)isShowingDeferredHardPayall;
-(void)scrollViewControllerDidLayoutContent:(id)arg1 ;
-(void)scrollViewController:(id)arg1 didApplyDocumentStyle:(id)arg2 ;
-(void)scrollViewControllerRequestsFullscreen:(id)arg1 ;
-(double)navigationBarHeightForScrollViewController:(id)arg1 ;
-(double)toolBarHeightForScrollViewController:(id)arg1 ;
-(void)scrollViewControllerDismissFullscreen:(id)arg1 ;
-(void)scrollViewController:(id)arg1 enableNavigation:(BOOL)arg2 ;
-(BOOL)scrollViewController:(id)arg1 shouldOccludeAccessibilityElement:(id)arg2 ;
-(BOOL)accessibilityShouldScrollForScrollViewController:(id)arg1 defaultValue:(BOOL)arg2 ;
-(void)viewportDebuggingEnabled:(BOOL)arg1 ;
-(void)testingConditionEnabled:(BOOL)arg1 ;
-(void)setAnchorFragment:(NSString *)arg1 ;
-(void)setAnalyticsReporting:(id<SXAnalyticsReporting>)arg1 ;
-(NFMultiDelegate *)multiScrollViewDelegate;
-(id<NUEndOfArticleDataProvider>)endOfArticleDataProvider;
@end

