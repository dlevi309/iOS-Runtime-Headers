/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/_UIScrollViewScrollObserver.h>
#import <libobjc.A.dylib/_UIScrollViewLayoutObserver.h>
#import <UIKit/UIDropInteractionDelegate_Private.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/PKRulerDelegate.h>
#import <libobjc.A.dylib/PKRulerHostingDelegate.h>
#import <libobjc.A.dylib/PKDrawableView.h>
#import <libobjc.A.dylib/PKTiledCanvasViewDelegate.h>

@protocol PKTiledViewDelegate, PKRulerHostingDelegate;
@class UIDropInteraction, PKDrawing, PKLinedPaper, UIScrollView, UIView, PKTiledCanvasView, NSObject, UITapGestureRecognizer, PKSelectionController, PKController, UITouch, PKAttachmentView, PKRulerController, NSArray, NSUUID, PKVectorTimestamp, NSMutableArray, PKInk, UIImage, NSString;

@interface PKTiledView : UIView <UIScrollViewDelegate, _UIScrollViewScrollObserver, _UIScrollViewLayoutObserver, UIDropInteractionDelegate_Private, UIGestureRecognizerDelegate, PKRulerDelegate, PKRulerHostingDelegate, PKDrawableView, PKTiledCanvasViewDelegate> {

	UIDropInteraction* _dropInteraction;
	PKDrawing* _dirtyDrawing;
	BOOL _rulerEnabled;
	BOOL _fingerDrawingEnabled;
	BOOL _showDebugOutlines;
	BOOL _isLayingOut;
	BOOL _shouldHideCanvasAfterScroll;
	BOOL _aggd_didMergeWithCollaborator;
	PKLinedPaper* _linedPaper;
	UIScrollView* _scrollView;
	UIView* _attachmentContainerView;
	PKTiledCanvasView* _canvasView;
	NSObject*<PKTiledViewDelegate> _delegate;
	UITapGestureRecognizer* _clearSelectionGestureRecognizer;
	id _drawingUndoTarget;
	SEL _drawingUndoSelector;
	PKSelectionController* _selectionController;
	PKController* _tileController;
	UITouch* _drawingTouchThatHitNothing;
	id<PKRulerHostingDelegate> _rulerHostingDelegate;
	double _tileSize;
	double _tileScale;
	long long _tileLevel;
	UIView* _gestureView;
	PKAttachmentView* _liveAttachment;
	PKDrawing* _currentDrawingBeingCopiedToCanvas;
	double _lastZoomScale;
	PKDrawing* _createdDrawingForTouchThatHitNothing;
	PKRulerController* _rulerController;
	NSArray* _cachedAdditionalStrokes;
	NSArray* _cachedVisibleStrokesWithAdditionalStrokesForDirtyDrawing;
	NSUUID* _cachedDrawingUUIDForAdditionalStrokes;
	PKVectorTimestamp* _cachedDrawingVersionForAdditionalStrokes;
	/*^block*/id _didScrollBlock;
	long long _aggd_cachedVisibleStrokeCount;
	NSMutableArray* _undoManagersRegisteredWith;
	long long __maxFileFormatVersion;
	CGPoint _lastContentOffset;
	CGPoint _liveStrokeContentOffset;

}

@property (assign,nonatomic,__weak) UIScrollView * scrollView;                                              //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic) double tileSize;                                                               //@synthesize tileSize=_tileSize - In the implementation block
@property (assign,nonatomic) double tileScale;                                                              //@synthesize tileScale=_tileScale - In the implementation block
@property (assign,nonatomic) long long tileLevel;                                                           //@synthesize tileLevel=_tileLevel - In the implementation block
@property (nonatomic,retain) UIView * gestureView;                                                          //@synthesize gestureView=_gestureView - In the implementation block
@property (nonatomic,retain) PKAttachmentView * liveAttachment;                                             //@synthesize liveAttachment=_liveAttachment - In the implementation block
@property (assign,nonatomic,__weak) PKDrawing * currentDrawingBeingCopiedToCanvas;                          //@synthesize currentDrawingBeingCopiedToCanvas=_currentDrawingBeingCopiedToCanvas - In the implementation block
@property (assign,nonatomic) CGPoint lastContentOffset;                                                     //@synthesize lastContentOffset=_lastContentOffset - In the implementation block
@property (assign,nonatomic) double lastZoomScale;                                                          //@synthesize lastZoomScale=_lastZoomScale - In the implementation block
@property (nonatomic,retain) UITouch * drawingTouchThatHitNothing;                                          //@synthesize drawingTouchThatHitNothing=_drawingTouchThatHitNothing - In the implementation block
@property (nonatomic,retain) PKDrawing * createdDrawingForTouchThatHitNothing;                              //@synthesize createdDrawingForTouchThatHitNothing=_createdDrawingForTouchThatHitNothing - In the implementation block
@property (assign,nonatomic) BOOL isLayingOut;                                                              //@synthesize isLayingOut=_isLayingOut - In the implementation block
@property (assign,nonatomic) BOOL shouldHideCanvasAfterScroll;                                              //@synthesize shouldHideCanvasAfterScroll=_shouldHideCanvasAfterScroll - In the implementation block
@property (assign,nonatomic) CGPoint liveStrokeContentOffset;                                               //@synthesize liveStrokeContentOffset=_liveStrokeContentOffset - In the implementation block
@property (nonatomic,readonly) PKRulerController * rulerController;                                         //@synthesize rulerController=_rulerController - In the implementation block
@property (nonatomic,copy) NSArray * cachedAdditionalStrokes;                                               //@synthesize cachedAdditionalStrokes=_cachedAdditionalStrokes - In the implementation block
@property (nonatomic,copy) NSArray * cachedVisibleStrokesWithAdditionalStrokesForDirtyDrawing;              //@synthesize cachedVisibleStrokesWithAdditionalStrokesForDirtyDrawing=_cachedVisibleStrokesWithAdditionalStrokesForDirtyDrawing - In the implementation block
@property (nonatomic,copy) NSUUID * cachedDrawingUUIDForAdditionalStrokes;                                  //@synthesize cachedDrawingUUIDForAdditionalStrokes=_cachedDrawingUUIDForAdditionalStrokes - In the implementation block
@property (nonatomic,copy) PKVectorTimestamp * cachedDrawingVersionForAdditionalStrokes;                    //@synthesize cachedDrawingVersionForAdditionalStrokes=_cachedDrawingVersionForAdditionalStrokes - In the implementation block
@property (nonatomic,copy) id didScrollBlock;                                                               //@synthesize didScrollBlock=_didScrollBlock - In the implementation block
@property (assign,nonatomic) long long aggd_cachedVisibleStrokeCount;                                       //@synthesize aggd_cachedVisibleStrokeCount=_aggd_cachedVisibleStrokeCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * undoManagersRegisteredWith;                                   //@synthesize undoManagersRegisteredWith=_undoManagersRegisteredWith - In the implementation block
@property (assign,nonatomic) BOOL aggd_didMergeWithCollaborator;                                            //@synthesize aggd_didMergeWithCollaborator=_aggd_didMergeWithCollaborator - In the implementation block
@property (assign,nonatomic) long long _maxFileFormatVersion;                                               //@synthesize _maxFileFormatVersion=__maxFileFormatVersion - In the implementation block
@property (assign,nonatomic) BOOL insertSpaceEnabled; 
@property (nonatomic,copy) PKInk * ink; 
@property (nonatomic,copy) PKLinedPaper * linedPaper;                                                       //@synthesize linedPaper=_linedPaper - In the implementation block
@property (assign,nonatomic,__weak) UIView * attachmentContainerView;                                       //@synthesize attachmentContainerView=_attachmentContainerView - In the implementation block
@property (nonatomic,retain) PKTiledCanvasView * canvasView;                                                //@synthesize canvasView=_canvasView - In the implementation block
@property (assign,getter=isFingerDrawingEnabled,nonatomic) BOOL fingerDrawingEnabled;                       //@synthesize fingerDrawingEnabled=_fingerDrawingEnabled - In the implementation block
@property (nonatomic,readonly) BOOL _hasSelection; 
@property (assign,nonatomic) BOOL rulerEnabled; 
@property (assign,nonatomic) BOOL showDebugOutlines;                                                        //@synthesize showDebugOutlines=_showDebugOutlines - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<PKTiledViewDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIImage * paperTexture; 
@property (nonatomic,readonly) UITapGestureRecognizer * clearSelectionGestureRecognizer;                    //@synthesize clearSelectionGestureRecognizer=_clearSelectionGestureRecognizer - In the implementation block
@property (assign,nonatomic,__weak) id drawingUndoTarget;                                                   //@synthesize drawingUndoTarget=_drawingUndoTarget - In the implementation block
@property (assign,nonatomic) SEL drawingUndoSelector;                                                       //@synthesize drawingUndoSelector=_drawingUndoSelector - In the implementation block
@property (nonatomic,readonly) PKSelectionController * selectionController;                                 //@synthesize selectionController=_selectionController - In the implementation block
@property (nonatomic,retain) PKController * tileController;                                                 //@synthesize tileController=_tileController - In the implementation block
@property (assign,nonatomic,__weak) id<PKRulerHostingDelegate> rulerHostingDelegate;                        //@synthesize rulerHostingDelegate=_rulerHostingDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)showDebugOutlines;
+(id)newInlineDrawing;
-(void)dealloc;
-(NSObject*<PKTiledViewDelegate>)delegate;
-(void)setDelegate:(NSObject*<PKTiledViewDelegate>)arg1 ;
-(id)attachments;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)layoutSubviews;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(void)setCanvasView:(PKTiledCanvasView *)arg1 ;
-(PKTiledCanvasView *)canvasView;
-(void)cut:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(BOOL)dropInteraction:(id)arg1 canHandleSession:(id)arg2 ;
-(id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2 ;
-(void)dropInteraction:(id)arg1 performDrop:(id)arg2 ;
-(long long)_dropInteraction:(id)arg1 dataOwnerForSession:(id)arg2 ;
-(void)_observeScrollViewDidScroll:(id)arg1 ;
-(UIScrollView *)scrollView;
-(id)topView;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(CGPoint)lastContentOffset;
-(void)setLastContentOffset:(CGPoint)arg1 ;
-(void)delete:(id)arg1 ;
-(PKSelectionController *)selectionController;
-(double)drawingScale;
-(void)_scrollViewDidLayoutSubviews:(id)arg1 ;
-(void)_layoutSubviews;
-(void)setTileSize:(double)arg1 ;
-(double)tileSize;
-(double)tileScale;
-(void)setRulerHostingDelegate:(id<PKRulerHostingDelegate>)arg1 ;
-(id)rulerHostingView;
-(BOOL)rulerHostWantsSharedRuler;
-(BOOL)_hasSelection;
-(void)_flushCaches;
-(PKInk *)ink;
-(void)setInk:(PKInk *)arg1 ;
-(void)setDrawingUndoTarget:(id)arg1 ;
-(void)setFingerDrawingEnabled:(BOOL)arg1 ;
-(id)drawingUndoTarget;
-(void)performUndo:(id)arg1 ;
-(void)setDrawingUndoSelector:(SEL)arg1 ;
-(BOOL)isFingerDrawingEnabled;
-(id)drawingGestureRecognizer;
-(void)canvasViewDidBeginDrawing:(id)arg1 ;
-(void)canvasViewDidEndDrawing:(id)arg1 ;
-(id<PKRulerHostingDelegate>)rulerHostingDelegate;
-(CGAffineTransform)strokeTransform;
-(void)duplicate:(id)arg1 ;
-(id)_currentStroke;
-(id)rulerView;
-(BOOL)_isValidDropPointForStrokes:(CGPoint)arg1 ;
-(void)_setAdditionalStrokes:(id)arg1 inDrawing:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)invertColors;
-(BOOL)showDebugOutlines;
-(void)setInsertSpaceEnabled:(BOOL)arg1 ;
-(void)newCanvasView;
-(void)set_maxFileFormatVersion:(long long)arg1 ;
-(void)_addGestureToClearSelection;
-(void)_toggleDebugPane:(id)arg1 ;
-(void)_hideCanvas;
-(UIView *)gestureView;
-(void)insertCanvasView:(id)arg1 intoScrollView:(id)arg2 ;
-(void)_updateAllowedTouchesForDrawingGestureRecognizer;
-(long long)_totalVisibleStrokes;
-(BOOL)aggd_didMergeWithCollaborator;
-(void)setAggd_didMergeWithCollaborator:(BOOL)arg1 ;
-(void)setPaperTexture:(UIImage *)arg1 ;
-(UIImage *)paperTexture;
-(void)setLinedPaper:(PKLinedPaper *)arg1 ;
-(BOOL)needToUpdateViewFrame;
-(PKController *)tileController;
-(void)cancelTileGenerationInvalidateTiles:(BOOL)arg1 ;
-(void)purgeNonVisibleTiles;
-(BOOL)shouldHideCanvasAfterScroll;
-(void)setShouldHideCanvasAfterScroll:(BOOL)arg1 ;
-(double)lastZoomScale;
-(void)setLastZoomScale:(double)arg1 ;
-(void)updateTilesForVisibleRect;
-(BOOL)isLayingOut;
-(id)_tilesForAttachment:(id)arg1 bounds:(CGRect)arg2 invert:(BOOL)arg3 ;
-(UIView *)attachmentContainerView;
-(void)setCreatedDrawingForTouchThatHitNothing:(PKDrawing *)arg1 ;
-(PKDrawing *)createdDrawingForTouchThatHitNothing;
-(id)standInAttachmentView;
-(void)renderAttachment:(id)arg1 intoCanvas:(id)arg2 showing:(BOOL)arg3 ;
-(id)hitAttachment:(CGPoint)arg1 ;
-(void)setLiveStrokeContentOffset:(CGPoint)arg1 ;
-(void)startedDrawingInBlankSpaceWithTouch:(id)arg1 ;
-(UITouch *)drawingTouchThatHitNothing;
-(void)getAttachment:(id)arg1 tileTransform:(CGAffineTransform*)arg2 strokeTransform:(CGAffineTransform*)arg3 paperTransform:(CGAffineTransform*)arg4 ;
-(void)setLiveAttachment:(PKAttachmentView *)arg1 ;
-(PKAttachmentView *)liveAttachment;
-(void)_layoutSubviewsUpdateTilesForRendering:(BOOL)arg1 ;
-(void)_canvasViewWillBeginDrawing:(id)arg1 ;
-(void)canvasView:(id)arg1 beganStroke:(id)arg2 ;
-(void)canvasView:(id)arg1 endedStroke:(id)arg2 ;
-(void)canvasView:(id)arg1 cancelledStroke:(id)arg2 ;
-(BOOL)isDrawing;
-(id)attachmentForUUID:(id)arg1 ;
-(BOOL)_updateHeightOfAttachmentIfNecessary:(id)arg1 ;
-(void)updateTilesForVisibleRectRendering:(BOOL)arg1 offscreen:(BOOL)arg2 ;
-(void)_copyFromCanvas:(id)arg1 intoAttachment:(id)arg2 hideCanvas:(BOOL)arg3 stroke:(id)arg4 ;
-(BOOL)canvasView:(id)arg1 shouldBeginDrawingWithTouch:(id)arg2 ;
-(SEL)drawingUndoSelector;
-(void)registerUndoCommand:(id)arg1 ;
-(void)cancelSelection;
-(void)updateTilesForVisibleRectOffscreenWithCallback:(/*^block*/id)arg1 ;
-(void)setCurrentDrawingBeingCopiedToCanvas:(PKDrawing *)arg1 ;
-(void)canvasViewWillBeginNewStroke:(id)arg1 withTouch:(id)arg2 ;
-(void)setIsLayingOut:(BOOL)arg1 ;
-(void)setTileLevel:(long long)arg1 ;
-(long long)tileLevel;
-(void)setTileScale:(double)arg1 ;
-(void)resizeTiles;
-(void)getAttachment:(id)arg1 tileTransform:(CGAffineTransform*)arg2 strokeTransform:(CGAffineTransform*)arg3 paperTransform:(CGAffineTransform*)arg4 scrollViewContentOffset:(CGPoint)arg5 ;
-(id)hitAttachment:(CGPoint)arg1 includeStandinAttachment:(BOOL)arg2 ;
-(id)visibleAttachments;
-(BOOL)rulerEnabled;
-(PKRulerController *)rulerController;
-(BOOL)canAddStroke;
-(BOOL)insertAttachmentIfInBlankSpace:(CGPoint)arg1 ;
-(PKDrawing *)currentDrawingBeingCopiedToCanvas;
-(id)_visibleTilesForAttachment:(id)arg1 includePartiallyVisible:(BOOL)arg2 ;
-(CGPoint)liveStrokeContentOffset;
-(void)blitOldTilesIntoNewTiles;
-(BOOL)_shouldUpdateHeightOfAttachments;
-(void)swapOffscreenCallback:(/*^block*/id)arg1 ;
-(BOOL)tileIsVisibleForOffset:(CGPoint)arg1 inAttachment:(id)arg2 distanceToMiddle:(double*)arg3 ;
-(id)generateTile:(CGPoint)arg1 inAttachment:(id)arg2 rendering:(BOOL)arg3 offscreen:(BOOL)arg4 ;
-(id)tileForOffset:(CGPoint)arg1 inAttachment:(id)arg2 offscreen:(BOOL)arg3 ;
-(void)setCachedAdditionalStrokes:(NSArray *)arg1 ;
-(void)setCachedVisibleStrokesWithAdditionalStrokesForDirtyDrawing:(NSArray *)arg1 ;
-(void)setCachedDrawingUUIDForAdditionalStrokes:(NSUUID *)arg1 ;
-(void)setCachedDrawingVersionForAdditionalStrokes:(PKVectorTimestamp *)arg1 ;
-(void)_updateAttachmentHeightIfNecessaryForDrawing:(id)arg1 ;
-(CGPoint)pointInStrokeSpace:(CGPoint)arg1 inDrawing:(id)arg2 ;
-(CGRect)boundsForDrawing:(id)arg1 ;
-(CGRect)visibleOnscreenBoundsForDrawing:(id)arg1 ;
-(void)_selectionRefreshWithChangeToDrawings:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)insertSpaceEnabled;
-(void)_clearSelectionIfNecessary;
-(void)replaceInkTexture:(id)arg1 image:(CGImageRef)arg2 ;
-(id)drawingController;
-(void)setRulerEnabled:(BOOL)arg1 ;
-(void)canvasView:(id)arg1 drawingDidChange:(id)arg2 ;
-(void)_canvasView:(id)arg1 didFinishRenderingStrokeOnRenderQueue:(id)arg2 inDrawing:(id)arg3 ;
-(void)_canvasViewDidEraseStrokes:(id)arg1 ;
-(void)canvasView:(id)arg1 registerUndoCommand:(id)arg2 ;
-(void)_canvasView:(id)arg1 showEditMenuFromLocation:(CGPoint)arg2 ;
-(id)initInScrollView:(id)arg1 ;
-(void)_resetDrawingState;
-(void)setSelectedStrokesColor:(id)arg1 ;
-(id)_drawingForUUID:(id)arg1 ;
-(void)_didAddDrawingAttachmentView;
-(void)_transientlyUpdateHeightOfAttachment:(id)arg1 delta:(double)arg2 ;
-(void)updateTilesForVisibleRectForceIfZooming:(BOOL)arg1 ;
-(id)visibleStrokesOnscreen:(id)arg1 forDrawing:(id)arg2 ;
-(void)_resetSelectedStrokeStateForRenderer;
-(PKLinedPaper *)linedPaper;
-(void)setAttachmentContainerView:(UIView *)arg1 ;
-(void)setShowDebugOutlines:(BOOL)arg1 ;
-(UITapGestureRecognizer *)clearSelectionGestureRecognizer;
-(void)setTileController:(PKController *)arg1 ;
-(void)setDrawingTouchThatHitNothing:(UITouch *)arg1 ;
-(void)setGestureView:(UIView *)arg1 ;
-(NSArray *)cachedAdditionalStrokes;
-(NSArray *)cachedVisibleStrokesWithAdditionalStrokesForDirtyDrawing;
-(NSUUID *)cachedDrawingUUIDForAdditionalStrokes;
-(PKVectorTimestamp *)cachedDrawingVersionForAdditionalStrokes;
-(id)didScrollBlock;
-(void)setDidScrollBlock:(id)arg1 ;
-(long long)aggd_cachedVisibleStrokeCount;
-(void)setAggd_cachedVisibleStrokeCount:(long long)arg1 ;
-(NSMutableArray *)undoManagersRegisteredWith;
-(void)setUndoManagersRegisteredWith:(NSMutableArray *)arg1 ;
-(long long)_maxFileFormatVersion;
@end

