/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


#import <PencilKit/PencilKit-Structs.h>
@class NSMutableOrderedSet, UIView, PKSpaceInsertionView, UIPanGestureRecognizer, PKStrokeSelection, UIImageView, PKStroke, PKDrawing, PKSelectionController;

@interface PKSpaceInsertionController : NSObject {

	NSMutableOrderedSet* _strokesBelow;
	NSMutableOrderedSet* _strokesAbove;
	UIView* _tapToDismissView;
	PKSpaceInsertionView* _topInsertionView;
	PKSpaceInsertionView* _bottomInsertionView;
	CGPoint _beginDragLocation;
	CGPoint _initialViewLocation;
	UIPanGestureRecognizer* _dragTopLollipopGR;
	UIPanGestureRecognizer* _dragBottomLollipopGR;
	PKStrokeSelection* _bottomStrokeSelection;
	PKStrokeSelection* _topStrokeSelection;
	UIImageView* _topImageView;
	UIImageView* _bottomImageView;
	BOOL _topHandleRemovesWhitespace;
	BOOL _isCurrentlyAddingSpace;
	BOOL _didMoveStrokes;
	PKStroke* _lassoStroke;
	PKDrawing* _drawing;
	PKSelectionController* _selectionController;

}

@property (assign,nonatomic) BOOL isCurrentlyAddingSpace;                                       //@synthesize isCurrentlyAddingSpace=_isCurrentlyAddingSpace - In the implementation block
@property (nonatomic,retain) PKStroke * lassoStroke;                                            //@synthesize lassoStroke=_lassoStroke - In the implementation block
@property (nonatomic,retain) PKDrawing * drawing;                                               //@synthesize drawing=_drawing - In the implementation block
@property (nonatomic,__weak,readonly) PKSelectionController * selectionController;              //@synthesize selectionController=_selectionController - In the implementation block
@property (nonatomic,readonly) BOOL didMoveStrokes;                                             //@synthesize didMoveStrokes=_didMoveStrokes - In the implementation block
-(PKSelectionController *)selectionController;
-(void)didScroll:(CGPoint)arg1 ;
-(PKDrawing *)drawing;
-(void)setDrawing:(PKDrawing *)arg1 ;
-(PKStroke *)lassoStroke;
-(void)_layoutViewsIfNecessary;
-(BOOL)isCurrentlyAddingSpace;
-(void)dismissSpacingResizeHandles;
-(void)commitSpacingResize;
-(id)initWithSelectionController:(id)arg1 ;
-(void)didBeginCreatingSpaceWithLassoStroke:(id)arg1 drawing:(id)arg2 ;
-(BOOL)didMoveStrokes;
-(void)setIsCurrentlyAddingSpace:(BOOL)arg1 ;
-(double)_initalBufferBetweenLollipops;
-(void)_blitStrokesToViewForSpaceInsertionType:(unsigned long long)arg1 ;
-(void)_temporarilyShiftStrokesWithOffset:(double)arg1 spaceInsertionType:(unsigned long long)arg2 ;
-(void)_makeSpaceWithOffset:(double)arg1 spaceInsertionType:(unsigned long long)arg2 ;
-(void)_didEndCreatingSpace;
-(void)_sortStrokesAboveOrBelow;
-(void)_addSpacingViewsWithFrame:(CGRect)arg1 ;
-(void)projectPath:(CGPathRef)arg1 toEndOfFrame:(CGRect)arg2 ;
-(void)_dragLollipop:(id)arg1 ;
-(void)initTopAndBottomSelectionIfNecessary;
-(double)offsetInStrokeSpaceFromViewOffset:(double)arg1 inDrawing:(id)arg2 ;
-(id)_visibleStrokesOnPage:(id)arg1 ;
-(void)setLassoStroke:(PKStroke *)arg1 ;
@end

