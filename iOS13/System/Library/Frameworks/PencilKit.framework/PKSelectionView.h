/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIDragInteractionDelegate_Private.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIImageView, UIDragInteraction, PKSelectionController, UITapGestureRecognizer, CAShapeLayer, NSMutableArray, UIDragPreview, UIResponder, PKStrokeSelection, UIImage, UILongPressGestureRecognizer, UIBezierPath, NSString;

@interface PKSelectionView : UIView <UIDragInteractionDelegate_Private, UIGestureRecognizerDelegate> {

	UIImageView* _strokeSelectionImageView;
	UIDragInteraction* _dragInteraction;
	CGRect _originalStrokeFrame;
	CGPoint _initialDragPosition;
	double _initialRotation;
	PKSelectionController* _selectionController;
	BOOL _isClearingSelection;
	UITapGestureRecognizer* _editMenuGR;
	CAShapeLayer* _lassoLayer;
	CAShapeLayer* _whiteLassoLayer;
	NSMutableArray* _subLassoLayers;
	UIDragPreview* _previewProvider;
	double _rotation;
	double _scale;
	CGPoint _originalTranslation;
	double _startRotation;
	double _startScale;
	CGPoint _editMenuLocation;
	UIResponder* _previousResponder;
	BOOL _isDragging;
	BOOL _wantsDragPlatter;
	PKStrokeSelection* _strokeSelection;
	UIImage* _strokeSelectionImage;
	UILongPressGestureRecognizer* _dragGR;
	UIBezierPath* _lassoPath;
	/*^block*/id _calculateSelectionHullBlock;
	CGPoint _offsetInTouchView;
	CGAffineTransform _selectionDrawingTransform;
	CGAffineTransform _userTransform;

}

@property (nonatomic,retain) UIBezierPath * lassoPath;                                 //@synthesize lassoPath=_lassoPath - In the implementation block
@property (nonatomic,copy) id calculateSelectionHullBlock;                             //@synthesize calculateSelectionHullBlock=_calculateSelectionHullBlock - In the implementation block
@property (assign,nonatomic) CGAffineTransform userTransform;                          //@synthesize userTransform=_userTransform - In the implementation block
@property (nonatomic,readonly) BOOL isDragging;                                        //@synthesize isDragging=_isDragging - In the implementation block
@property (nonatomic,retain) PKStrokeSelection * strokeSelection;                      //@synthesize strokeSelection=_strokeSelection - In the implementation block
@property (nonatomic,readonly) CGPoint offsetInTouchView;                              //@synthesize offsetInTouchView=_offsetInTouchView - In the implementation block
@property (nonatomic,retain) UIImage * strokeSelectionImage;                           //@synthesize strokeSelectionImage=_strokeSelectionImage - In the implementation block
@property (assign,nonatomic) CGAffineTransform selectionDrawingTransform;              //@synthesize selectionDrawingTransform=_selectionDrawingTransform - In the implementation block
@property (assign,nonatomic) BOOL wantsDragPlatter;                                    //@synthesize wantsDragPlatter=_wantsDragPlatter - In the implementation block
@property (nonatomic,readonly) UILongPressGestureRecognizer * dragGR;                  //@synthesize dragGR=_dragGR - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(void)setAlpha:(double)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(BOOL)isDragging;
-(void)willMoveToWindow:(id)arg1 ;
-(void)cut:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2 ;
-(id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3 ;
-(void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2 ;
-(BOOL)dragInteraction:(id)arg1 prefersFullSizePreviewsForSession:(id)arg2 ;
-(void)dragInteraction:(id)arg1 session:(id)arg2 willEndWithOperation:(unsigned long long)arg3 ;
-(long long)_dragInteraction:(id)arg1 dataOwnerForSession:(id)arg2 ;
-(id)keyCommands;
-(id)targetForAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)_updateTransform;
-(void)delete:(id)arg1 ;
-(long long)editingInteractionConfiguration;
-(CGColorRef)selectionColor;
-(void)duplicate:(id)arg1 ;
-(void)toggleEditMenu;
-(void)dragSelection:(id)arg1 ;
-(void)setupAnimatedLasso;
-(PKStrokeSelection *)strokeSelection;
-(id)calculateSelectionHullBlock;
-(void)setCalculateSelectionHullBlock:(id)arg1 ;
-(void)_setupWindowNotificationsForScene:(id)arg1 ;
-(void)_clearSelection:(id)arg1 ;
-(void)setupAnimatedLassoForStrokes:(id)arg1 lassoLayer:(id)arg2 whiteLassoLayer:(id)arg3 isSelection:(BOOL)arg4 lassoStroke:(id)arg5 ;
-(void)addAnimationsToSelectionLayer:(id)arg1 whiteLayer:(id)arg2 ;
-(vector<CGPoint, std::__1::allocator<CGPoint> >*)pointsOfInterestForStrokes:(id)arg1 ;
-(UIBezierPath *)lassoPath;
-(void)setLassoPath:(UIBezierPath *)arg1 ;
-(BOOL)lassoContainsPoint:(CGPoint)arg1 ;
-(void)_dragWillBegin;
-(void)didBeginDraggingSelection;
-(void)scrollContent:(CGPoint)arg1 ;
-(void)didEndGestureWithTranslation:(CGPoint)arg1 transform:(CGAffineTransform)arg2 ;
-(void)hideStrokeSelectionImageView:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setUserTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)userTransform;
-(UILongPressGestureRecognizer *)dragGR;
-(id)initWithFrame:(CGRect)arg1 strokeSelection:(id)arg2 selectionController:(id)arg3 ;
-(void)setStrokeSelection:(PKStrokeSelection *)arg1 ;
-(void)generateStrokeImageForPasteAndDND;
-(void)setStrokeSelectionImage:(UIImage *)arg1 ;
-(void)scaleSelection:(id)arg1 ;
-(void)rotateSelection:(id)arg1 ;
-(void)makeViewAliveAtLocation:(CGPoint)arg1 ;
-(void)animateViewToOriginalPosition;
-(void)updateLocationForDrop:(CGPoint)arg1 ;
-(id)strokesContainedBySelection:(id)arg1 ;
-(CGPoint)offsetInTouchView;
-(UIImage *)strokeSelectionImage;
-(CGAffineTransform)selectionDrawingTransform;
-(void)setSelectionDrawingTransform:(CGAffineTransform)arg1 ;
-(BOOL)wantsDragPlatter;
-(void)setWantsDragPlatter:(BOOL)arg1 ;
@end

