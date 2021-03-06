/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKit/UIInteraction.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol PKSelectionRendering, PKSelectionInteractionDelegate;
@class PKSelectionGlowRenderer, UIBezierPath, NSMutableArray, NSArray, PKDrawingAdjustmentKnob, UIPanGestureRecognizer, UIView, UITapGestureRecognizer, UILongPressGestureRecognizer, UITapAndAHalfRecognizer, PKSelectionController, PKDrawing, NSMutableOrderedSet, NSOrderedSet, NSString;

@interface PKSelectionInteraction : NSObject <UIInteraction, UIGestureRecognizerDelegate> {

	id<PKSelectionRendering> _lassoRenderer;
	PKSelectionGlowRenderer* _glowRenderer;
	UIBezierPath* _lassoPath;
	BOOL _editMenuVisible;
	CGPoint _lastTapLocation;
	double _lastTapTimestamp;
	long long _currentTapCount;
	CGPoint _lastDoubleTapAndDragLocation;
	double _lastDoubleTapAndDragTimestamp;
	NSMutableArray* _tapAndDragVelocityArray;
	long long _tapAndDragVelocityCount;
	long long _currentlyDraggedKnob;
	long long _knobDragMode;
	double _knobDragInitialTimestamp;
	CGPoint _knobDragInitialLocation;
	CGPoint _undraggedKnobLocationInStrokeSpace;
	CGPoint _currentScrollOffset;
	NSArray* _firstStrokesInInitialStrokes;
	NSArray* _lastStrokesInInitialStrokes;
	long long _modificationType;
	NSMutableArray* _selectionViewGestures;
	PKDrawingAdjustmentKnob* _insertSpaceAffordance;
	UIPanGestureRecognizer* _insertSpaceAffordanceGesture;
	BOOL _enabled;
	BOOL __didCancelSelection;
	BOOL _insertSpaceEnabled;
	id<PKSelectionInteractionDelegate> _delegate;
	UIView* _view;
	UIPanGestureRecognizer* _lassoGestureRecognizer;
	UITapGestureRecognizer* _noOpTapGestureRecognizer;
	UITapGestureRecognizer* _progressiveTapGestureRecognizer;
	UILongPressGestureRecognizer* _tapAndHoldToSelectLongPressGestureRecognizer;
	UITapAndAHalfRecognizer* _modifySelectionRecognizer;
	UILongPressGestureRecognizer* _knobBrushGestureRecognizer;
	UIPanGestureRecognizer* _knobDragGestureRecognizer;
	PKSelectionController* _selectionController;
	PKDrawing* _currentDrawing;
	NSMutableOrderedSet* _smartSelectedStrokes;
	NSOrderedSet* _initialStrokeSelectionBeforeModification;
	CGPoint __drawingBeganLocation;

}

@property (assign,nonatomic,__weak) UIView * view;                                                                     //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * lassoGestureRecognizer;                                          //@synthesize lassoGestureRecognizer=_lassoGestureRecognizer - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * noOpTapGestureRecognizer;                                        //@synthesize noOpTapGestureRecognizer=_noOpTapGestureRecognizer - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * progressiveTapGestureRecognizer;                                 //@synthesize progressiveTapGestureRecognizer=_progressiveTapGestureRecognizer - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * tapAndHoldToSelectLongPressGestureRecognizer;              //@synthesize tapAndHoldToSelectLongPressGestureRecognizer=_tapAndHoldToSelectLongPressGestureRecognizer - In the implementation block
@property (nonatomic,retain) UITapAndAHalfRecognizer * modifySelectionRecognizer;                                      //@synthesize modifySelectionRecognizer=_modifySelectionRecognizer - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * knobBrushGestureRecognizer;                                //@synthesize knobBrushGestureRecognizer=_knobBrushGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * knobDragGestureRecognizer;                                       //@synthesize knobDragGestureRecognizer=_knobDragGestureRecognizer - In the implementation block
@property (assign,nonatomic,__weak) PKSelectionController * selectionController;                                       //@synthesize selectionController=_selectionController - In the implementation block
@property (assign,nonatomic) CGPoint _drawingBeganLocation;                                                            //@synthesize _drawingBeganLocation=__drawingBeganLocation - In the implementation block
@property (assign,nonatomic) BOOL _didCancelSelection;                                                                 //@synthesize _didCancelSelection=__didCancelSelection - In the implementation block
@property (nonatomic,retain) PKDrawing * currentDrawing;                                                               //@synthesize currentDrawing=_currentDrawing - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * smartSelectedStrokes;                                               //@synthesize smartSelectedStrokes=_smartSelectedStrokes - In the implementation block
@property (nonatomic,retain) NSOrderedSet * initialStrokeSelectionBeforeModification;                                  //@synthesize initialStrokeSelectionBeforeModification=_initialStrokeSelectionBeforeModification - In the implementation block
@property (assign,nonatomic) BOOL insertSpaceEnabled;                                                                  //@synthesize insertSpaceEnabled=_insertSpaceEnabled - In the implementation block
@property (assign,nonatomic,__weak) id<PKSelectionInteractionDelegate> delegate;                                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                                            //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) BOOL hasCurrentSelection; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isLTR;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(id<PKSelectionInteractionDelegate>)delegate;
-(void)didMoveToView:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)willMoveToView:(id)arg1 ;
-(void)setView:(UIView *)arg1 ;
-(PKSelectionController *)selectionController;
-(void)setDelegate:(id<PKSelectionInteractionDelegate>)arg1 ;
-(UIView *)view;
-(id)_gestures;
-(BOOL)isEnabled;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)_willRemoveSelectionView:(id)arg1 ;
-(void)_didEndDraggingSelection:(id)arg1 ;
-(BOOL)insertSpaceEnabled;
-(BOOL)knobsContainPoint:(CGPoint)arg1 forInputType:(long long)arg2 ;
-(BOOL)_dragShouldBeginForSession:(id)arg1 ;
-(void)setInsertSpaceEnabled:(BOOL)arg1 ;
-(void)setSelectionController:(PKSelectionController *)arg1 ;
-(BOOL)hasCurrentSelection;
-(void)_updateAllowedTouchTypesForSelectedInk:(id)arg1 ;
-(BOOL)_selectionShouldReceiveTouchForPoint:(CGPoint)arg1 ;
-(id)_firstStrokesInStrokes:(id)arg1 ;
-(id)_lastStrokesInStrokes:(id)arg1 ;
-(id)_adornmentLayers;
-(void)_setupGestures;
-(void)_toolPickerDidShowHide:(id)arg1 ;
-(void)_didBeginSelection:(id)arg1 ;
-(void)_didBrushWithKnob:(id)arg1 ;
-(void)_didDragKnob:(id)arg1 ;
-(void)_eatGesture:(id)arg1 ;
-(void)_didSmartSelectTap:(id)arg1 ;
-(void)_pressAndHoldLinearExpand:(id)arg1 ;
-(void)_didTapAndDrag:(id)arg1 ;
-(BOOL)_insertSpaceAffordanceEnabled;
-(void)_addInsertSpaceAffordanceGestureIfNecessary;
-(id)_gesturesForLiveSelection;
-(void)_didGrabInsertSpaceAffordance:(id)arg1 ;
-(void)_cleanupInsertSpaceAffordance;
-(void)_addInsertSpaceAffordance;
-(void)_updateAllowedTouchTypesForSelectedInk:(id)arg1 hasCurrentSelection:(BOOL)arg2 ;
-(void)_updateInsertSpaceAffordancePosition;
-(double)_timestampForTouch:(id)arg1 ;
-(id)_drawingForLocation:(CGPoint)arg1 ;
-(void)setCurrentDrawing:(PKDrawing *)arg1 ;
-(BOOL)_isRepeatedTap:(id)arg1 ;
-(void)_dismissEditMenuIfNecessary;
-(long long)_selectionTypeForTapCount:(long long)arg1 ;
-(void)_updateProgressiveTapSelectionWithSelectionInput:(id)arg1 existingSelection:(id)arg2 ;
-(void)_cancelDeferredPasteFromTappingAction;
-(void)_selectViaContinuousTapWithInput:(id)arg1 ;
-(void)_handleSingleTap:(id)arg1 ;
-(void)_updateTapGestureHistoryWithLocation:(CGPoint)arg1 gesture:(id)arg2 ;
-(double)_timestampForGestureRecognizer:(id)arg1 ;
-(BOOL)_isWithinRepeatedTapTimeForGesture:(id)arg1 ;
-(PKDrawing *)currentDrawing;
-(void)dismissEditMenuIfNecessary;
-(void)set_drawingBeganLocation:(CGPoint)arg1 ;
-(void)_updateLiveLassoPath:(CGPathRef)arg1 ;
-(CGPoint)clampInputPointForSelection:(CGPoint)arg1 forDrawing:(id)arg2 ;
-(BOOL)_isLassoAddingSpace:(CGPoint)arg1 ;
-(CGPoint)_drawingBeganLocation;
-(void)_didEndLassoSelectionWithPath:(id)arg1 ;
-(void)_didEndLassoAddingSpaceAtLocation:(CGPoint)arg1 ;
-(void)_clearLiveSelectionPath;
-(void)_intersectedStrokesInDrawing:(id)arg1 forSelectionInput:(id)arg2 existingSelection:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_resetVelocityWindow;
-(long long)_updateSmartSelectionWithInput:(id)arg1 modificationType:(long long)arg2 ;
-(double)_updateVelocityWindowWithTouch:(id)arg1 location:(CGPoint)arg2 ;
-(long long)_selectionTypeForVelocity:(double)arg1 ;
-(long long)_updateSmartSelectionWithInput:(id)arg1 modificationType:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(double)_updateVelocityWindowWithTimestamp:(double)arg1 location:(CGPoint)arg2 ;
-(long long)_updateSmartSelectionWithInput:(id)arg1 modificationType:(long long)arg2 liveScrollOffset:(CGPoint)arg3 completion:(/*^block*/id)arg4 ;
-(CGPoint)_pointFromViewToStrokeSpace:(CGPoint)arg1 inDrawing:(id)arg2 ;
-(id)_visibleOnscreenStrokesForDrawing:(id)arg1 ;
-(BOOL)_liveSelectionGestureStillActive;
-(void)_calculateFirstAndLastStrokeForKnobPlacement;
-(CGPoint)_undraggedKnobLocation:(long long)arg1 forInitialStrokeBounds:(CGRect)arg2 ;
-(BOOL)_locationShouldFlipOverLeftKnob:(CGPoint)arg1 ;
-(BOOL)_locationShouldFlipOverRightKnob:(CGPoint)arg1 ;
-(void)_updateSmartSelectionWithDragToLocation:(CGPoint)arg1 liveScrollOffset:(CGPoint)arg2 initialSelectedWord:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_closestStrokesToCorner:(unsigned long long)arg1 fromStrokes:(id)arg2 ;
-(void)_updateUndraggedKnobLocationForKnobDrag;
-(void)_updateSmartSelectionWithDragToLocation:(CGPoint)arg1 liveScrollOffset:(CGPoint)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_locationShouldFlipOverLeftKnob_LTR:(CGPoint)arg1 ;
-(BOOL)_locationShouldFlipOverLeftKnob_RTL:(CGPoint)arg1 ;
-(BOOL)_locationShouldFlipOverRightKnob_LTR:(CGPoint)arg1 ;
-(BOOL)_locationShouldFlipOverRightKnob_RTL:(CGPoint)arg1 ;
-(void)_updateStateIfNecessaryWithOldModificationType:(long long)arg1 newModificationType:(long long)arg2 ;
-(id)_knobForLocation:(CGPoint)arg1 forInputType:(long long)arg2 ;
-(id)_selectionModifierGestures;
-(void)_updateAllowedTouchTypesForLassoGR;
-(id)_knobForLocation:(CGPoint)arg1 ;
-(id)initWithSelectionController:(id)arg1 ;
-(void)_didAddSelectionView:(id)arg1 ;
-(void)_didBeginDraggingSelection:(id)arg1 ;
-(UIPanGestureRecognizer *)lassoGestureRecognizer;
-(void)setLassoGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)noOpTapGestureRecognizer;
-(void)setNoOpTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)progressiveTapGestureRecognizer;
-(void)setProgressiveTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(UILongPressGestureRecognizer *)tapAndHoldToSelectLongPressGestureRecognizer;
-(void)setTapAndHoldToSelectLongPressGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(UITapAndAHalfRecognizer *)modifySelectionRecognizer;
-(void)setModifySelectionRecognizer:(UITapAndAHalfRecognizer *)arg1 ;
-(UILongPressGestureRecognizer *)knobBrushGestureRecognizer;
-(void)setKnobBrushGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(UIPanGestureRecognizer *)knobDragGestureRecognizer;
-(void)setKnobDragGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(BOOL)_didCancelSelection;
-(void)set_didCancelSelection:(BOOL)arg1 ;
-(NSMutableOrderedSet *)smartSelectedStrokes;
-(void)setSmartSelectedStrokes:(NSMutableOrderedSet *)arg1 ;
-(NSOrderedSet *)initialStrokeSelectionBeforeModification;
-(void)setInitialStrokeSelectionBeforeModification:(NSOrderedSet *)arg1 ;
@end

