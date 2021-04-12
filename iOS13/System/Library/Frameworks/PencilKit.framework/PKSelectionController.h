/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKit/UIDropInteractionDelegate_Private.h>

@protocol OS_dispatch_queue;
@class NSUUID, PKSpaceInsertionController, UIDropInteraction, PKTiledView, PKStrokeSelection, NSObject, PKSelectionView, NSString;

@interface PKSelectionController : NSObject <UIDropInteractionDelegate_Private> {

	CGPoint _dropPosition;
	NSUUID* _previousDrawingUUIDForSelection;
	int _selectionViewCount;
	double _cachedStrokeImageScale;
	PKSpaceInsertionController* _spaceInsertionController;
	UIDropInteraction* _dropInteraction;
	BOOL _hasCurrentSelection;
	BOOL _isCurrentlyAddingSpace;
	PKTiledView* _tiledView;
	PKStrokeSelection* _currentStrokeSelection;
	NSObject*<OS_dispatch_queue> _selectionHullQueue;
	PKSelectionView* _selectionView;
	CGAffineTransform _selectionTransform;

}

@property (assign,nonatomic,__weak) PKTiledView * tiledView;                               //@synthesize tiledView=_tiledView - In the implementation block
@property (assign,nonatomic) BOOL hasCurrentSelection;                                     //@synthesize hasCurrentSelection=_hasCurrentSelection - In the implementation block
@property (nonatomic,readonly) BOOL shouldClampInputPoints; 
@property (nonatomic,retain) PKStrokeSelection * currentStrokeSelection;                   //@synthesize currentStrokeSelection=_currentStrokeSelection - In the implementation block
@property (assign,nonatomic) CGAffineTransform selectionTransform;                         //@synthesize selectionTransform=_selectionTransform - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> selectionHullQueue;              //@synthesize selectionHullQueue=_selectionHullQueue - In the implementation block
@property (assign,nonatomic) BOOL isCurrentlyAddingSpace;                                  //@synthesize isCurrentlyAddingSpace=_isCurrentlyAddingSpace - In the implementation block
@property (nonatomic,retain) PKSelectionView * selectionView;                              //@synthesize selectionView=_selectionView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(PKSelectionView *)selectionView;
-(void)cut:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(BOOL)dropInteraction:(id)arg1 canHandleSession:(id)arg2 ;
-(void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2 ;
-(id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2 ;
-(void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2 ;
-(void)dropInteraction:(id)arg1 performDrop:(id)arg2 ;
-(id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3 ;
-(long long)_dropInteraction:(id)arg1 dataOwnerForSession:(id)arg2 ;
-(id)topView;
-(void)delete:(id)arg1 ;
-(void)setSelectionView:(PKSelectionView *)arg1 ;
-(void)didScroll:(CGPoint)arg1 ;
-(void)duplicate:(id)arg1 ;
-(CGAffineTransform)_selectionDrawingTransformForDrawing:(id)arg1 ;
-(void)setImageOnSelectionViewForStrokeSelection:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)clearSelectionIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(void)generateImageForStrokeSelection:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)selectionHullQueue;
-(void)clearSelectionIfNecessary;
-(BOOL)_isValidDropPointForStrokes:(CGPoint)arg1 ;
-(void)didMoveStrokeSelectionToLocation:(CGPoint)arg1 transform:(CGAffineTransform)arg2 ;
-(void)setSelectionTransform:(CGAffineTransform)arg1 ;
-(void)commitStrokesWithCompletion:(/*^block*/id)arg1 ;
-(void)_setAdditionalStrokes:(id)arg1 inDrawing:(id)arg2 completion:(/*^block*/id)arg3 ;
-(PKTiledView *)tiledView;
-(id)initWithTiledView:(id)arg1 ;
-(BOOL)hasCurrentSelection;
-(void)changeColorOfSelection:(id)arg1 ;
-(void)_layoutViewsIfNecessary;
-(BOOL)isCurrentlyAddingSpace;
-(BOOL)didResizeWhitespace;
-(void)dismissSpacingResizeHandles;
-(CGRect)boundsForDrawing:(id)arg1 ;
-(void)_selectionRefreshWithChangeToDrawings:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setTiledView:(PKTiledView *)arg1 ;
-(void)_resetSelectedStrokeStateForRenderer;
-(id)_drawingForLiveAttachment;
-(CGRect)_visibleOnscreenBoundsForDrawing:(id)arg1 ;
-(BOOL)shouldClampInputPoints;
-(BOOL)_liveDrawingIsAtEndOfDocument;
-(id)intersectedStrokesFromStroke:(id)arg1 drawing:(id)arg2 visibleOnscreenStrokes:(id)arg3 ;
-(void)didSelect:(id)arg1 lassoStroke:(id)arg2 transform:(CGAffineTransform)arg3 drawing:(id)arg4 ;
-(id)_drawingForSelectionRect:(CGRect)arg1 ;
-(void)didBeginSpaceInsertionWithLassoStroke:(id)arg1 drawing:(id)arg2 ;
-(PKStrokeSelection *)currentStrokeSelection;
-(void)didSelectStrokesNotification:(id)arg1 ;
-(void)didSelect:(id)arg1 lassoStroke:(id)arg2 transform:(CGAffineTransform)arg3 drawing:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)moveSelectionViewBasedOnStrokeTransform:(CGAffineTransform)arg1 drawing:(id)arg2 ;
-(void)_addViewForStrokeSelection:(id)arg1 isDragSource:(BOOL)arg2 drawing:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(CGPoint)_selectionOffsetForDrawing:(id)arg1 ;
-(CGRect)_calculateFrameForSelectionView:(id)arg1 inDrawing:(id)arg2 ;
-(id)_rotateImageIfNecessary:(id)arg1 ;
-(id)rotateUIImage:(id)arg1 clockwise:(BOOL)arg2 ;
-(void)_removeSelectionViewAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(CGAffineTransform)selectionTransform;
-(id)_commitStrokeSelection:(id)arg1 toDrawing:(id)arg2 selectionAction:(long long)arg3 inkChanges:(id)arg4 withCompletion:(/*^block*/id)arg5 ;
-(id)newStrokesForSelection:(id)arg1 toDrawing:(id)arg2 ;
-(void)registerCommandWithUndoManager:(id)arg1 ;
-(id)_newInk:(id)arg1 withChange:(id)arg2 ;
-(id)drawingForUUID:(id)arg1 ;
-(void)applyCommand:(id)arg1 toDrawing:(id)arg2 ;
-(void)clearSelectionIfNecessaryAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_selectionRefreshWithChangeToDrawings:(id)arg1 ;
-(void)_removeSelectionView;
-(void)resetStrokesAndClearSelection;
-(void)eraseSelection;
-(void)_addItemsToPasteboard:(id)arg1 ;
-(void)_pasteStrokeSelection:(id)arg1 atPoint:(CGPoint)arg2 inDrawing:(id)arg3 ;
-(CGSize)viewSizeForStrokeSelection:(id)arg1 ;
-(CGPoint)closestPointForPastedSelectionRect:(CGRect)arg1 withDrawing:(id*)arg2 ;
-(CGAffineTransform)_selectionTransformForStrokes:(id)arg1 atLocation:(CGPoint)arg2 dragOffsetInDragView:(CGPoint)arg3 transform:(CGAffineTransform)arg4 constrainSelection:(BOOL)arg5 inDrawing:(id)arg6 ;
-(id)_commitStrokeSelection:(id)arg1 toDrawing:(id)arg2 selectionAction:(long long)arg3 ;
-(void)_createSelectionViewForDropSession:(id)arg1 removeFromSource:(BOOL)arg2 withStrokeSelection:(id)arg3 ;
-(CGPoint)_pointInStrokeSpace:(CGPoint)arg1 inDrawing:(id)arg2 ;
-(id)setupSpaceInsertionControllerIfNecessary;
-(void)_createSelectionViewForDropSession:(id)arg1 removeFromSource:(BOOL)arg2 ;
-(void)updateCurrentStrokeSelectionTransformForLocation:(id)arg1 atLocation:(CGPoint)arg2 offsetInTouchView:(CGPoint)arg3 transform:(CGAffineTransform)arg4 ;
-(CGRect)_scrollViewDrawingFrame;
-(CGRect)_extendedBoundsForDrawing:(id)arg1 ;
-(id)_attachmentForSelectionRect:(CGRect)arg1 ;
-(id)intersectedStrokesFromStroke:(id)arg1 drawing:(id)arg2 ;
-(CGPoint)intersectionPointAlongStroke:(id)arg1 fromPoint:(CGPoint)arg2 toPoint:(CGPoint)arg3 ;
-(id)strokesForSpaceInsertionWithStrokeSelection:(id)arg1 inDrawing:(id)arg2 offset:(double)arg3 ;
-(void)hideStrokes:(id)arg1 inDrawing:(id)arg2 ;
-(CGRect)_scrollViewVisibleBounds;
-(id)_visibleStrokesWithinExtendedBounds:(id)arg1 forDrawing:(id)arg2 ;
-(void)setHasCurrentSelection:(BOOL)arg1 ;
-(void)setCurrentStrokeSelection:(PKStrokeSelection *)arg1 ;
-(void)setSelectionHullQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setIsCurrentlyAddingSpace:(BOOL)arg1 ;
@end

