/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SXFormatInteractorDelegate.h>
#import <libobjc.A.dylib/SXDocumentSectionHosting.h>
#import <libobjc.A.dylib/SXPresentationDelegate.h>
#import <libobjc.A.dylib/SXScrollViewDelegate.h>
#import <libobjc.A.dylib/SXComponentHosting.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/SXTangierControllerDelegate.h>
#import <libobjc.A.dylib/SXViewportChangeListener.h>
#import <libobjc.A.dylib/SXAdControllerPresentationDelegate.h>
#import <libobjc.A.dylib/SXContextMenuManagerDelegate.h>
#import <libobjc.A.dylib/SXPresentationEnvironment.h>
#import <libobjc.A.dylib/SXKeyboardSupport.h>
#import <libobjc.A.dylib/SXScrollPositionRestoring.h>

@protocol SXComponentController, SXAdDocumentStateManager, SXTextSelectionManager, SXScrollViewControllerDelegate, SXTransitionDataSourceProvider, SXDocumentControllerContainer, SXResourceDataSourceContainer, SXAnalyticsReportingContainer, SXPresentationDelegateContainer, SXAdControllerContainer, SXAppStateMonitor, SXPresentationAttributesManager, SXScrollPositionManager, SXComponentInteractionManager, SXContextMenuManager, SXMediaSharingPolicyProvider, SXFormatInteractor, SXDocumentSectionManager, SXDocumentSectionBlueprint, SXDocumentStyleRenderer, UIViewControllerPreviewing, SXScrollReporting, SXDOMObjectProviding;
@class SXComponentAnimationController, SXComponentBehaviorController, SXPresentationAttributes, UITraitCollection, SXMediaPlaybackController, SXFullscreenVideoPlaybackManager, SXContext, UIScrollView, SXViewControllerPresentingManager, SXViewport, SXViewportDebugger, SXComponentView, SXFullscreenCanvasViewController, SXFullscreenCanvasController, SXScrollPosition, NSOrderedSet, SXTangierController, NSMutableArray, SXVideoPlayerViewControllerManager, SXFontIndex, SXDocumentProvider, UIColor, UIResponder, NSString;

@interface SXScrollViewController : UIViewController <SXFormatInteractorDelegate, SXDocumentSectionHosting, SXPresentationDelegate, SXScrollViewDelegate, SXComponentHosting, UIGestureRecognizerDelegate, SXTangierControllerDelegate, SXViewportChangeListener, SXAdControllerPresentationDelegate, SXContextMenuManagerDelegate, SXPresentationEnvironment, SXKeyboardSupport, SXScrollPositionRestoring> {

	BOOL _restoreScrollPositionOnNextLayout;
	BOOL _isPreviewing;
	BOOL _transitioning;
	SXComponentAnimationController* _animationController;
	SXComponentBehaviorController* _behaviorController;
	id<SXComponentController> _componentController;
	SXMediaPlaybackController* _mediaPlaybackController;
	SXFullscreenVideoPlaybackManager* _fullscreenVideoPlaybackManager;
	id<SXAdDocumentStateManager> _adDocumentStateManager;
	id<SXTextSelectionManager> _textSelectionManager;
	SXContext* _context;
	UIScrollView* _scrollView;
	id<SXScrollViewControllerDelegate> _delegate;
	SXPresentationAttributes* _presentationAttributes;
	id<SXTransitionDataSourceProvider> _transitionDataSourceProvider;
	id<SXDocumentControllerContainer> _documentControllerContainer;
	id<SXResourceDataSourceContainer> _resourceDataSourceContainer;
	id<SXAnalyticsReportingContainer> _analyticsReportingContainer;
	id<SXPresentationDelegateContainer> _presentationDelegateContainer;
	id<SXAdControllerContainer> _adControllerContainer;
	id<SXAppStateMonitor> _appStateMonitor;
	id<SXPresentationAttributesManager> _presentationAttributesManager;
	SXViewControllerPresentingManager* _viewControllerPresentingManager;
	id<SXScrollPositionManager> _scrollPositionManager;
	id<SXComponentInteractionManager> _componentInteractionManager;
	id<SXContextMenuManager> _contextMenuManager;
	id<SXMediaSharingPolicyProvider> _mediaSharingPolicyProvider;
	id<SXFormatInteractor> _interactor;
	id<SXDocumentSectionManager> _documentSectionManager;
	id<SXDocumentSectionBlueprint> _headerBlueprint;
	id<SXDocumentSectionBlueprint> _footerBlueprint;
	id<SXDocumentSectionBlueprint> _contentOverlayBlueprint;
	SXViewport* _viewport;
	SXViewportDebugger* _viewportDebugger;
	SXComponentView* _focussedComponentView;
	SXFullscreenCanvasViewController* _fullscreenCanvasViewController;
	SXFullscreenCanvasController* _currentCanvasController;
	SXScrollPosition* _restoredScrollPosition;
	SXScrollPosition* _previouslyRestoredScrollPosition;
	NSOrderedSet* _snapLines;
	id<SXDocumentStyleRenderer> _documentStyleRenderer;
	SXTangierController* _tangierController;
	NSMutableArray* _articleScrollEvents;
	id<UIViewControllerPreviewing> _previewingContext;
	id<SXScrollReporting> _scrollReporter;
	SXVideoPlayerViewControllerManager* _videoPlayerViewControllerManager;
	SXFontIndex* _fontIndex;
	SXDocumentProvider* _documentProvider;
	double _headerHeight;
	double _contentOverlayTopOffset;
	id<SXDOMObjectProviding> _DOMObjectProvider;

}

@property (nonatomic,readonly) id<SXDocumentControllerContainer> documentControllerContainer;                      //@synthesize documentControllerContainer=_documentControllerContainer - In the implementation block
@property (nonatomic,readonly) id<SXResourceDataSourceContainer> resourceDataSourceContainer;                      //@synthesize resourceDataSourceContainer=_resourceDataSourceContainer - In the implementation block
@property (nonatomic,readonly) id<SXAnalyticsReportingContainer> analyticsReportingContainer;                      //@synthesize analyticsReportingContainer=_analyticsReportingContainer - In the implementation block
@property (nonatomic,readonly) id<SXPresentationDelegateContainer> presentationDelegateContainer;                  //@synthesize presentationDelegateContainer=_presentationDelegateContainer - In the implementation block
@property (nonatomic,readonly) id<SXAdControllerContainer> adControllerContainer;                                  //@synthesize adControllerContainer=_adControllerContainer - In the implementation block
@property (nonatomic,readonly) id<SXAppStateMonitor> appStateMonitor;                                              //@synthesize appStateMonitor=_appStateMonitor - In the implementation block
@property (nonatomic,readonly) id<SXPresentationAttributesManager> presentationAttributesManager;                  //@synthesize presentationAttributesManager=_presentationAttributesManager - In the implementation block
@property (nonatomic,readonly) SXViewControllerPresentingManager * viewControllerPresentingManager;                //@synthesize viewControllerPresentingManager=_viewControllerPresentingManager - In the implementation block
@property (nonatomic,readonly) id<SXScrollPositionManager> scrollPositionManager;                                  //@synthesize scrollPositionManager=_scrollPositionManager - In the implementation block
@property (nonatomic,readonly) id<SXComponentInteractionManager> componentInteractionManager;                      //@synthesize componentInteractionManager=_componentInteractionManager - In the implementation block
@property (nonatomic,readonly) id<SXContextMenuManager> contextMenuManager;                                        //@synthesize contextMenuManager=_contextMenuManager - In the implementation block
@property (nonatomic,readonly) id<SXMediaSharingPolicyProvider> mediaSharingPolicyProvider;                        //@synthesize mediaSharingPolicyProvider=_mediaSharingPolicyProvider - In the implementation block
@property (nonatomic,readonly) id<SXFormatInteractor> interactor;                                                  //@synthesize interactor=_interactor - In the implementation block
@property (nonatomic,readonly) id<SXDocumentSectionManager> documentSectionManager;                                //@synthesize documentSectionManager=_documentSectionManager - In the implementation block
@property (nonatomic,readonly) id<SXDocumentSectionBlueprint> headerBlueprint;                                     //@synthesize headerBlueprint=_headerBlueprint - In the implementation block
@property (nonatomic,readonly) id<SXDocumentSectionBlueprint> footerBlueprint;                                     //@synthesize footerBlueprint=_footerBlueprint - In the implementation block
@property (nonatomic,readonly) id<SXDocumentSectionBlueprint> contentOverlayBlueprint;                             //@synthesize contentOverlayBlueprint=_contentOverlayBlueprint - In the implementation block
@property (nonatomic,retain) SXViewport * viewport;                                                                //@synthesize viewport=_viewport - In the implementation block
@property (nonatomic,retain) SXViewportDebugger * viewportDebugger;                                                //@synthesize viewportDebugger=_viewportDebugger - In the implementation block
@property (nonatomic,retain) SXComponentView * focussedComponentView;                                              //@synthesize focussedComponentView=_focussedComponentView - In the implementation block
@property (nonatomic,retain) SXFullscreenCanvasViewController * fullscreenCanvasViewController;                    //@synthesize fullscreenCanvasViewController=_fullscreenCanvasViewController - In the implementation block
@property (nonatomic,retain) SXFullscreenCanvasController * currentCanvasController;                               //@synthesize currentCanvasController=_currentCanvasController - In the implementation block
@property (nonatomic,retain) SXScrollPosition * restoredScrollPosition;                                            //@synthesize restoredScrollPosition=_restoredScrollPosition - In the implementation block
@property (nonatomic,retain) SXScrollPosition * previouslyRestoredScrollPosition;                                  //@synthesize previouslyRestoredScrollPosition=_previouslyRestoredScrollPosition - In the implementation block
@property (assign,nonatomic) BOOL restoreScrollPositionOnNextLayout;                                               //@synthesize restoreScrollPositionOnNextLayout=_restoreScrollPositionOnNextLayout - In the implementation block
@property (nonatomic,retain) NSOrderedSet * snapLines;                                                             //@synthesize snapLines=_snapLines - In the implementation block
@property (nonatomic,readonly) id<SXDocumentStyleRenderer> documentStyleRenderer;                                  //@synthesize documentStyleRenderer=_documentStyleRenderer - In the implementation block
@property (nonatomic,retain) SXTangierController * tangierController;                                              //@synthesize tangierController=_tangierController - In the implementation block
@property (nonatomic,retain) NSMutableArray * articleScrollEvents;                                                 //@synthesize articleScrollEvents=_articleScrollEvents - In the implementation block
@property (nonatomic,retain) id<UIViewControllerPreviewing> previewingContext;                                     //@synthesize previewingContext=_previewingContext - In the implementation block
@property (assign,nonatomic) BOOL isPreviewing;                                                                    //@synthesize isPreviewing=_isPreviewing - In the implementation block
@property (nonatomic,readonly) id<SXScrollReporting> scrollReporter;                                               //@synthesize scrollReporter=_scrollReporter - In the implementation block
@property (nonatomic,readonly) SXVideoPlayerViewControllerManager * videoPlayerViewControllerManager;              //@synthesize videoPlayerViewControllerManager=_videoPlayerViewControllerManager - In the implementation block
@property (nonatomic,readonly) SXFontIndex * fontIndex;                                                            //@synthesize fontIndex=_fontIndex - In the implementation block
@property (nonatomic,readonly) SXDocumentProvider * documentProvider;                                              //@synthesize documentProvider=_documentProvider - In the implementation block
@property (assign,nonatomic) double headerHeight;                                                                  //@synthesize headerHeight=_headerHeight - In the implementation block
@property (assign,nonatomic) double contentOverlayTopOffset;                                                       //@synthesize contentOverlayTopOffset=_contentOverlayTopOffset - In the implementation block
@property (assign,nonatomic) BOOL transitioning;                                                                   //@synthesize transitioning=_transitioning - In the implementation block
@property (nonatomic,readonly) id<SXDOMObjectProviding> DOMObjectProvider;                                         //@synthesize DOMObjectProvider=_DOMObjectProvider - In the implementation block
@property (nonatomic,readonly) SXContext * context;                                                                //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) UIColor * documentBackgroundColor; 
@property (nonatomic,readonly) UIScrollView * scrollView;                                                          //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic,__weak) id<SXScrollViewControllerDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL isPresentingFullscreenCanvas; 
@property (nonatomic,readonly) SXPresentationAttributes * presentationAttributes;                                  //@synthesize presentationAttributes=_presentationAttributes - In the implementation block
@property (nonatomic,readonly) id<SXTransitionDataSourceProvider> transitionDataSourceProvider;                    //@synthesize transitionDataSourceProvider=_transitionDataSourceProvider - In the implementation block
@property (assign,nonatomic) BOOL textSelectionEnabled; 
@property (nonatomic,readonly) UIResponder * responder; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<SXComponentController> componentController;                                      //@synthesize componentController=_componentController - In the implementation block
@property (nonatomic,readonly) SXComponentAnimationController * animationController;                               //@synthesize animationController=_animationController - In the implementation block
@property (nonatomic,readonly) SXComponentBehaviorController * behaviorController;                                 //@synthesize behaviorController=_behaviorController - In the implementation block
@property (nonatomic,readonly) SXFullscreenVideoPlaybackManager * fullscreenVideoPlaybackManager;                  //@synthesize fullscreenVideoPlaybackManager=_fullscreenVideoPlaybackManager - In the implementation block
@property (nonatomic,readonly) SXMediaPlaybackController * mediaPlaybackController;                                //@synthesize mediaPlaybackController=_mediaPlaybackController - In the implementation block
@property (nonatomic,readonly) id<SXAdDocumentStateManager> adDocumentStateManager;                                //@synthesize adDocumentStateManager=_adDocumentStateManager - In the implementation block
@property (nonatomic,readonly) id<SXTextSelectionManager> textSelectionManager;                                    //@synthesize textSelectionManager=_textSelectionManager - In the implementation block
@property (nonatomic,readonly) CGSize viewportSize; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsets; 
@property (nonatomic,readonly) UITraitCollection * presentationTraitCollection; 
@property (nonatomic,readonly) unsigned long long viewingLocation; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(SXDocumentProvider *)documentProvider;
-(id<SXDOMObjectProviding>)DOMObjectProvider;
-(void)showScrollViewIfNeeded;
-(BOOL)resignFirstResponder;
-(UIEdgeInsets)safeAreaInsets;
-(void)tangierController:(id)arg1 scrollViewDidEndDragging:(id)arg2 willDecelerate:(BOOL)arg3 ;
-(SXViewport *)viewport;
-(BOOL)becomeFirstResponder;
-(void)setViewport:(SXViewport *)arg1 ;
-(void)tangierControllerDidStopScrolling:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(id)scrollPosition;
-(void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2 ;
-(SXPresentationAttributes *)presentationAttributes;
-(SXComponentAnimationController *)animationController;
-(SXTangierController *)tangierController;
-(void)tangierController:(id)arg1 scrollViewWillBeginDragging:(id)arg2 ;
-(SXFullscreenCanvasViewController *)fullscreenCanvasViewController;
-(void)setFullscreenCanvasViewController:(SXFullscreenCanvasViewController *)arg1 ;
-(BOOL)isPreviewing;
-(id)requestFullScreenCanvasViewControllerForComponent:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(BOOL)isPresentingFullscreenCanvas;
-(BOOL)allowInteractivityFocusForComponent:(id)arg1 ;
-(void)displayContentsAfterLayoutWithInteractor:(id)arg1 ;
-(id<SXScrollViewControllerDelegate>)delegate;
-(id<SXScrollReporting>)scrollReporter;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id<SXScrollPositionManager>)scrollPositionManager;
-(BOOL)textSelectionEnabled;
-(void)updateViewportForBlueprint:(id)arg1 ;
-(id<SXAdDocumentStateManager>)adDocumentStateManager;
-(id<SXDocumentSectionBlueprint>)footerBlueprint;
-(id<SXMediaSharingPolicyProvider>)mediaSharingPolicyProvider;
-(void)addComponentView:(id)arg1 ;
-(void)willDismissFullscreenCanvasForComponent:(id)arg1 ;
-(UITraitCollection *)presentationTraitCollection;
-(id)sectionHostingViewController;
-(void)willReturnToFullscreenForComponent:(id)arg1 ;
-(void)setCurrentCanvasController:(SXFullscreenCanvasController *)arg1 ;
-(id)headlineAccessibilityElement;
-(void)setRestoreScrollPositionOnNextLayout:(BOOL)arg1 ;
-(SXViewportDebugger *)viewportDebugger;
-(void)tangierController:(id)arg1 scrollViewWillEndDragging:(id)arg2 withVelocity:(CGPoint)arg3 targetContentOffset:(inout CGPoint*)arg4 ;
-(SXContext *)context;
-(id)scrollPositionForPlayingVideoComponentInComponentViews:(id)arg1 ;
-(void)setSnapLines:(NSOrderedSet *)arg1 ;
-(BOOL)scrollView:(id)arg1 shouldOccludeAccessibilityElement:(id)arg2 ;
-(void)setTextSelectionEnabled:(BOOL)arg1 ;
-(CGSize)viewportSize;
-(id)textScrollPositionForComponentViews:(id)arg1 ;
-(BOOL)addInteractivityFocusForComponent:(id)arg1 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(id)videoComponentViewForVideoPlayerViewController:(id)arg1 ;
-(CGRect)frameOfComponentWithVideoPlayerViewController:(id)arg1 ;
-(void)setTransitioning:(BOOL)arg1 ;
-(id<SXAppStateMonitor>)appStateMonitor;
-(UIResponder *)responder;
-(id)scrollViewForStripGalleryWithComponentIdentifier:(id)arg1 ;
-(void)setIsPreviewing:(BOOL)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(BOOL)shouldPreventDraggingForScrollView:(id)arg1 ;
-(id<SXDocumentSectionBlueprint>)contentOverlayBlueprint;
-(void)setArticleScrollEvents:(NSMutableArray *)arg1 ;
-(void)setDelegate:(id<SXScrollViewControllerDelegate>)arg1 ;
-(SXViewControllerPresentingManager *)viewControllerPresentingManager;
-(id)canvasViewController;
-(void)screenTraitCollectionDidChange:(id)arg1 ;
-(void)setRestoredScrollPosition:(SXScrollPosition *)arg1 ;
-(void)setViewportDebugger:(SXViewportDebugger *)arg1 ;
-(UIColor *)documentBackgroundColor;
-(void)scrollToRect:(CGRect)arg1 animated:(BOOL)arg2 ;
-(SXScrollPosition *)restoredScrollPosition;
-(void)applyHeaderBlueprint:(id)arg1 ;
-(id<UIViewControllerPreviewing>)previewingContext;
-(void)interactor:(id)arg1 willIntegrateBlueprint:(id)arg2 ;
-(void)updatePresentationWithAttributes:(id)arg1 ;
-(void)setPreviewingContext:(id<UIViewControllerPreviewing>)arg1 ;
-(void)setContentOverlayTopOffset:(double)arg1 ;
-(void)hideContentsForLayoutWithInteractor:(id)arg1 ;
-(void)dictionaryWithComponentOffsets:(id)arg1 forComponentViews:(id)arg2 ;
-(void)updateBehaviorForComponentView:(id)arg1 ;
-(void)viewDidLoad;
-(id)initWithScrollView:(id)arg1 documentControllerContainer:(id)arg2 resourceDataSourceContainer:(id)arg3 analyticsReportingContainer:(id)arg4 presentationDelegateContainer:(id)arg5 adControllerContainer:(id)arg6 presentationAttributeManager:(id)arg7 viewport:(id)arg8 tangierController:(id)arg9 componentController:(id)arg10 interactor:(id)arg11 appStateMonitor:(id)arg12 viewControllerPresentingManager:(id)arg13 scrollPositionManager:(id)arg14 documentStyleRenderer:(id)arg15 componentInteractionManager:(id)arg16 contextMenuManager:(id)arg17 scrollReporter:(id)arg18 videoPlayerViewControllerManager:(id)arg19 mediaSharingPolicyProvider:(id)arg20 fontIndex:(id)arg21 documentProvider:(id)arg22 transitionDataSourceProvider:(id)arg23 DOMObjectProvider:(id)arg24 ;
-(void)willEndPreviewingForContextMenuManager:(id)arg1 ;
-(void)tangierControllerDidScroll:(id)arg1 ;
-(BOOL)shouldRestoreScrollPositionForLayoutBlueprint:(id)arg1 ;
-(SXMediaPlaybackController *)mediaPlaybackController;
-(void)applyContentOverlayBlueprint:(id)arg1 topOffset:(double)arg2 ;
-(SXComponentBehaviorController *)behaviorController;
-(id)sectionHostingView;
-(void)removeComponentView:(id)arg1 ;
-(BOOL)shouldStartPreviewForContextMenuManager:(id)arg1 ;
-(void)setHeaderHeight:(double)arg1 ;
-(SXVideoPlayerViewControllerManager *)videoPlayerViewControllerManager;
-(id<SXContextMenuManager>)contextMenuManager;
-(id)presentingViewControllerForAdController:(id)arg1 ;
-(id)requestFullScreenCanvasViewControllerForComponent:(id)arg1 canvasController:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(id)scrollViewForFullscreenGalleryWithComponentIdentifier:(id)arg1 ;
-(void)interactor:(id)arg1 willLayoutWithOptions:(id)arg2 ;
-(BOOL)transitioning;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id<SXTransitionDataSourceProvider>)transitionDataSourceProvider;
-(BOOL)isScrolling;
-(void)spacebarPressedWithModifierFlags:(long long)arg1 ;
-(void)setFocussedComponentView:(SXComponentView *)arg1 ;
-(id<SXAnalyticsReportingContainer>)analyticsReportingContainer;
-(double)contentOverlayTopOffset;
-(id<SXTextSelectionManager>)textSelectionManager;
-(SXFullscreenVideoPlaybackManager *)fullscreenVideoPlaybackManager;
-(void)updateScrollPosition:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)accessibilityShouldScrollForScrollView:(id)arg1 defaultValue:(BOOL)arg2 ;
-(NSMutableArray *)articleScrollEvents;
-(void)setPreviouslyRestoredScrollPosition:(SXScrollPosition *)arg1 ;
-(id)scrollPositionForComponentViews:(id)arg1 ;
-(void)updateStickyHeaders;
-(id)interactiveCanvasController;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)willStartPreviewingForContextMenuManager:(id)arg1 ;
-(void)assistiveTechnologyStatusDidChange:(id)arg1 ;
-(id<SXDocumentSectionManager>)documentSectionManager;
-(void)applyFooterBlueprint:(id)arg1 ;
-(void)removeInteractivityFocusForComponent:(id)arg1 ;
-(id<SXDocumentStyleRenderer>)documentStyleRenderer;
-(SXFontIndex *)fontIndex;
-(void)tangierControllerWillStartScrolling:(id)arg1 ;
-(BOOL)restoreScrollPositionOnNextLayout;
-(id<SXPresentationAttributesManager>)presentationAttributesManager;
-(BOOL)isValidBlueprintForCurrentSize:(id)arg1 ;
-(void)setTangierController:(SXTangierController *)arg1 ;
-(void)interactor:(id)arg1 didIntegrateBlueprint:(id)arg2 ;
-(void)presentFullscreenGalleryWithComponentIdentifier:(id)arg1 ;
-(NSOrderedSet *)snapLines;
-(SXFullscreenCanvasController *)currentCanvasController;
-(void)dismissFullscreenCanvasForComponent:(id)arg1 ;
-(double)headerHeight;
-(SXScrollPosition *)previouslyRestoredScrollPosition;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id<SXAdControllerContainer>)adControllerContainer;
-(UIScrollView *)scrollView;
-(id<SXFormatInteractor>)interactor;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(id<SXComponentController>)componentController;
-(void)finishArticleScrollEvents;
-(id<SXPresentationDelegateContainer>)presentationDelegateContainer;
-(void)viewDidLayoutSubviews;
-(id<SXComponentInteractionManager>)componentInteractionManager;
-(id<SXResourceDataSourceContainer>)resourceDataSourceContainer;
-(id<SXDocumentControllerContainer>)documentControllerContainer;
-(void)dealloc;
-(id)presentingContentViewController;
-(SXComponentView *)focussedComponentView;
-(id<SXDocumentSectionBlueprint>)headerBlueprint;
-(void)loadContext:(id)arg1 analyticsReporting:(id)arg2 adControllerFactory:(id)arg3 ;
-(double)snaplineForContentOffset:(double)arg1 velocity:(double)arg2 ;
@end

