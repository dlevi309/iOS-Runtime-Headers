/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXTextTangierInteractiveCanvasControllerDelegate.h>
#import <libobjc.A.dylib/SXTextTangierInteractiveCanvasControllerDataSource.h>
#import <libobjc.A.dylib/SXViewportChangeListener.h>
#import <libobjc.A.dylib/TSDiOSCanvasViewControllerDelegate.h>
#import <libobjc.A.dylib/SXTextComponentLayoutHosting.h>
#import <libobjc.A.dylib/SXTextSelecting.h>

@protocol SXTangierControllerDelegate, SXComponentActionHandler, SXTangierDragItemProvider, SXComponentController, SXComponentInteractionManager, SXDOMObjectProviding;
@class SXTextTangierDocumentRoot, SXTextTangierCanvasViewController, SXTextTangierInteractiveCanvasController, SXViewport, SXScrollView, SXTangierTextRenderCollector, SXTangierRepDirectLayerHostProvider, UIView, TSWPSelection, NSMutableSet, TSKDocumentRoot, NSString;

@interface SXTangierController : NSObject <SXTextTangierInteractiveCanvasControllerDelegate, SXTextTangierInteractiveCanvasControllerDataSource, SXViewportChangeListener, TSDiOSCanvasViewControllerDelegate, SXTextComponentLayoutHosting, SXTextSelecting> {

	SXTextTangierDocumentRoot* _documentRoot;
	BOOL _enclosingCanvasScrolling;
	BOOL _rebuildFlows;
	BOOL _preventScrollViewDidScrollReentrance;
	BOOL _disableClippingForTiles;
	BOOL _performedInitialLayoutAndRender;
	os_unfair_lock_s _unfairLock;
	id<SXTangierControllerDelegate> _delegate;
	SXTextTangierCanvasViewController* _cvc;
	SXTextTangierInteractiveCanvasController* _icc;
	unsigned long long _initialSubviewCount;
	SXViewport* _viewport;
	SXScrollView* _scrollView;
	id<SXComponentActionHandler> _componentActionHandler;
	id<SXTangierDragItemProvider> _dragItemProvider;
	id<SXComponentController> _componentController;
	id<SXComponentInteractionManager> _componentInteractionManager;
	id<SXDOMObjectProviding> _DOMObjectProvider;
	SXTangierTextRenderCollector* _textRenderCollector;
	SXTangierRepDirectLayerHostProvider* _directLayerHostProvider;
	UIView* _underRepsHost;
	UIView* _aboveRepsHost;
	UIView* _overlayRepsHost;
	TSWPSelection* _storedSelection;
	NSMutableSet* _presentedTextViews;

}

@property (nonatomic,retain) SXViewport * viewport;                                                               //@synthesize viewport=_viewport - In the implementation block
@property (nonatomic,retain) SXScrollView * scrollView;                                                           //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,readonly) id<SXComponentActionHandler> componentActionHandler;                               //@synthesize componentActionHandler=_componentActionHandler - In the implementation block
@property (nonatomic,readonly) id<SXTangierDragItemProvider> dragItemProvider;                                    //@synthesize dragItemProvider=_dragItemProvider - In the implementation block
@property (nonatomic,__weak,readonly) id<SXComponentController> componentController;                              //@synthesize componentController=_componentController - In the implementation block
@property (nonatomic,__weak,readonly) id<SXComponentInteractionManager> componentInteractionManager;              //@synthesize componentInteractionManager=_componentInteractionManager - In the implementation block
@property (nonatomic,readonly) id<SXDOMObjectProviding> DOMObjectProvider;                                        //@synthesize DOMObjectProvider=_DOMObjectProvider - In the implementation block
@property (nonatomic,readonly) SXTangierTextRenderCollector * textRenderCollector;                                //@synthesize textRenderCollector=_textRenderCollector - In the implementation block
@property (nonatomic,readonly) SXTangierRepDirectLayerHostProvider * directLayerHostProvider;                     //@synthesize directLayerHostProvider=_directLayerHostProvider - In the implementation block
@property (nonatomic,readonly) UIView * underRepsHost;                                                            //@synthesize underRepsHost=_underRepsHost - In the implementation block
@property (nonatomic,readonly) UIView * aboveRepsHost;                                                            //@synthesize aboveRepsHost=_aboveRepsHost - In the implementation block
@property (nonatomic,readonly) UIView * overlayRepsHost;                                                          //@synthesize overlayRepsHost=_overlayRepsHost - In the implementation block
@property (assign,nonatomic) BOOL preventScrollViewDidScrollReentrance;                                           //@synthesize preventScrollViewDidScrollReentrance=_preventScrollViewDidScrollReentrance - In the implementation block
@property (assign,nonatomic) BOOL disableClippingForTiles;                                                        //@synthesize disableClippingForTiles=_disableClippingForTiles - In the implementation block
@property (nonatomic,retain) TSWPSelection * storedSelection;                                                     //@synthesize storedSelection=_storedSelection - In the implementation block
@property (assign,nonatomic) BOOL performedInitialLayoutAndRender;                                                //@synthesize performedInitialLayoutAndRender=_performedInitialLayoutAndRender - In the implementation block
@property (nonatomic,readonly) NSMutableSet * presentedTextViews;                                                 //@synthesize presentedTextViews=_presentedTextViews - In the implementation block
@property (nonatomic,readonly) os_unfair_lock_s unfairLock;                                                       //@synthesize unfairLock=_unfairLock - In the implementation block
@property (assign,getter=isEnclosingCanvasScrolling,nonatomic) BOOL enclosingCanvasScrolling;                     //@synthesize enclosingCanvasScrolling=_enclosingCanvasScrolling - In the implementation block
@property (assign,nonatomic,__weak) id<SXTangierControllerDelegate> delegate;                                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) SXTextTangierCanvasViewController * cvc;                                           //@synthesize cvc=_cvc - In the implementation block
@property (nonatomic,readonly) SXTextTangierInteractiveCanvasController * icc;                                    //@synthesize icc=_icc - In the implementation block
@property (assign,nonatomic) BOOL selectionEnabled; 
@property (assign,nonatomic) BOOL rebuildFlows;                                                                   //@synthesize rebuildFlows=_rebuildFlows - In the implementation block
@property (assign,nonatomic) unsigned long long initialSubviewCount;                                              //@synthesize initialSubviewCount=_initialSubviewCount - In the implementation block
@property (nonatomic,readonly) BOOL interactiveCanvasControllerAllowsHyperlinkInteraction; 
@property (nonatomic,retain,readonly) TSKDocumentRoot * documentRoot;                                             //@synthesize documentRoot=_documentRoot - In the implementation block
@property (nonatomic,readonly) BOOL isCanvasInteractive; 
@property (nonatomic,readonly) BOOL isPrintingCanvas; 
@property (nonatomic,readonly) BOOL spellCheckingSupported; 
@property (nonatomic,readonly) BOOL spellCheckingSuppressed; 
@property (nonatomic,readonly) BOOL shouldResizeCanvasToScrollView; 
@property (nonatomic,readonly) BOOL shouldClipToScrollViewBoundsInVisibleBounds; 
@property (nonatomic,readonly) BOOL shouldShowTextOverflowGlyphs; 
@property (nonatomic,readonly) BOOL shouldShowInstructionalText; 
@property (nonatomic,readonly) BOOL shouldPopKnobsOutsideEnclosingScrollView; 
@property (nonatomic,readonly) CGSize sizeOfScrollViewEnclosingCanvas; 
@property (nonatomic,readonly) BOOL allowEditMenuToAppear; 
@property (nonatomic,readonly) BOOL allowTextEditingToBegin; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXDOMObjectProviding>)DOMObjectProvider;
-(os_unfair_lock_s)unfairLock;
-(CGRect)visibleBounds;
-(SXViewport *)viewport;
-(void)setViewport:(SXViewport *)arg1 ;
-(void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2 ;
-(SXTangierRepDirectLayerHostProvider *)directLayerHostProvider;
-(void)didTransitionToPresented;
-(BOOL)rebuildFlows;
-(void)_fixLayoutOffsets;
-(id<SXTangierControllerDelegate>)delegate;
-(UIView *)aboveRepsHost;
-(id)topLevelRepsForInteractiveCanvasController:(id)arg1 ;
-(CGRect)interactiveCanvasController:(id)arg1 expandVisibleBoundsForClippingReps:(CGRect)arg2 ;
-(NSMutableSet *)presentedTextViews;
-(void)setUnscaledCanvasRect:(CGRect)arg1 ;
-(SXTextTangierInteractiveCanvasController *)icc;
-(void)interactiveCanvasController:(id)arg1 scrollViewWillBeginDragging:(id)arg2 ;
-(SXTangierTextRenderCollector *)textRenderCollector;
-(void)updateCanvasSize:(CGSize)arg1 forComponentViews:(id)arg2 ;
-(BOOL)isEnclosingCanvasScrolling;
-(void)didStartPresentingTextView:(id)arg1 ;
-(void)setPreventScrollViewDidScrollReentrance:(BOOL)arg1 ;
-(id)initWithViewport:(id)arg1 scrollView:(id)arg2 componentActionHandler:(id)arg3 dragItemProvider:(id)arg4 componentController:(id)arg5 componentInteractionManager:(id)arg6 DOMObjectProvider:(id)arg7 adIgnorableViewFactory:(id)arg8 ;
-(void)interactiveCanvasControllerDidLayoutAndRenderOnBackgroundThread:(id)arg1 ;
-(BOOL)disableClippingForTiles;
-(BOOL)selectionEnabled;
-(UIView *)underRepsHost;
-(void)endSelection;
-(void)setDelegate:(id<SXTangierControllerDelegate>)arg1 ;
-(id)visibleBoundsClipViewForInteractiveCanvasController:(id)arg1 ;
-(void)setSelectionEnabled:(BOOL)arg1 ;
-(id)interactiveCanvasController:(id)arg1 delegateConformingToProtocol:(id)arg2 forRep:(id)arg3 ;
-(void)updateInfosWithBlock:(/*^block*/id)arg1 ;
-(id)layoutDescriptionForComponent:(id)arg1 ;
-(void)interactiveCanvasControllerDidStopScrolling:(id)arg1 ;
-(CGPoint)pointForCharacterAtIndex:(unsigned long long)arg1 inComponentWithIdentifier:(id)arg2 ;
-(void)setPerformedInitialLayoutAndRender:(BOOL)arg1 ;
-(void)interactiveCanvasControllerDidScroll:(id)arg1 ;
-(void)interactiveCanvasController:(id)arg1 scrollViewWillEndDragging:(id)arg2 withVelocity:(CGPoint)arg3 targetContentOffset:(inout CGPoint*)arg4 ;
-(id<SXComponentActionHandler>)componentActionHandler;
-(SXTextTangierCanvasViewController *)cvc;
-(void)setScrollView:(SXScrollView *)arg1 ;
-(id)interactiveCanvasController:(id)arg1 dragItemForSmartField:(id)arg2 interaction:(id)arg3 session:(id)arg4 ;
-(void)setInitialSubviewCount:(unsigned long long)arg1 ;
-(id)topLevelLayersForInteractiveCanvasController:(id)arg1 ;
-(id<SXTangierDragItemProvider>)dragItemProvider;
-(BOOL)shouldClipToScrollViewBoundsInVisibleBounds;
-(void)clearSelection;
-(void)setDisableClippingForTiles:(BOOL)arg1 ;
-(void)teardown;
-(UIView *)overlayRepsHost;
-(unsigned long long)initialSubviewCount;
-(void)interactiveCanvasControllerWillStartInteraction:(id)arg1 ;
-(BOOL)preventScrollViewDidScrollReentrance;
-(void)interactiveCanvasController:(id)arg1 scrollViewDidEndDragging:(id)arg2 willDecelerate:(BOOL)arg3 ;
-(TSWPSelection *)storedSelection;
-(id)backgroundColorForDragUIPlatter;
-(void)setEnclosingCanvasScrolling:(BOOL)arg1 ;
-(BOOL)interactiveCanvasController:(id)arg1 shouldBeginInteraction:(id)arg2 atPoint:(CGPoint)arg3 ;
-(void)setRebuildFlows:(BOOL)arg1 ;
-(BOOL)performedInitialLayoutAndRender;
-(void)setStoredSelection:(TSWPSelection *)arg1 ;
-(id)scrollPositionForRect:(CGRect)arg1 componentRect:(CGRect)arg2 componentIdentifier:(id)arg3 canvasWidth:(double)arg4 relativePageOffset:(double)arg5 ;
-(SXScrollView *)scrollView;
-(id<SXComponentController>)componentController;
-(BOOL)interactiveCanvasControllerIsRelatedCanvasScrolling:(id)arg1 ;
-(void)updatePresentationState;
-(id<SXComponentInteractionManager>)componentInteractionManager;
-(CGRect)interactiveCanvasController:(id)arg1 expandVisibleBoundsForTiling:(CGRect)arg2 ;
-(TSKDocumentRoot *)documentRoot;
-(void)didStopPresentingTextView:(id)arg1 ;
-(void)willTransitionToPresented;
-(void)dealloc;
-(void)interactiveCanvasController:(id)arg1 interactedWithHyperlink:(id)arg2 info:(id)arg3 range:(NSRange)arg4 touchPoint:(CGPoint)arg5 touchAndHold:(BOOL)arg6 ;
-(id)interactiveCanvasController:(id)arg1 infoForModel:(id)arg2 withSelection:(id)arg3 ;
-(BOOL)isCanvasInteractive;
@end

