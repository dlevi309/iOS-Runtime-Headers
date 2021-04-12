/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIScrollViewScrollableAncestor.h>
#import <UIKit/UIPanGestureRecognizerDelegateInternal.h>
#import <UIKit/UIInteraction.h>

@protocol UITimingCurveProvider, _UISheetInteractionDelegate;
@class UIView, NSArray, NSMutableArray, UIPanGestureRecognizer, _UIHyperInteractor, _UIHyperregionUnion, _UIHyperrectangle, _UIHyperAsymmetricExtender, UIViewPropertyAnimator, NSString;

@interface _UISheetInteraction : NSObject <_UIScrollViewScrollableAncestor, UIPanGestureRecognizerDelegateInternal, UIInteraction> {

	BOOL _scrollingExpandsToLargerDetentWhenScrolledToEdge;
	BOOL _enabled;
	NSArray* _detents;
	long long _indexOfCurrentDetent;
	double _rubberBandExtentBeyondMinimumOffset;
	double _rubberBandExtentBeyondMaximumOffset;
	id<UITimingCurveProvider> _timingCurve;
	id<_UISheetInteractionDelegate> _delegate;
	UIView* _view;
	NSMutableArray* _registeredPanGestureRecognizers;
	UIPanGestureRecognizer* _backgroundGestureRecognizer;
	_UIHyperInteractor* _interactor;
	NSMutableArray* _detentPoints;
	_UIHyperregionUnion* _detentUnion;
	_UIHyperrectangle* _detentContinuum;
	_UIHyperAsymmetricExtender* _extender;
	id _dragSource;
	UIViewPropertyAnimator* _propertyAnimator;

}

@property (assign,nonatomic,__weak) UIView * view;                                                                                           //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) NSMutableArray * registeredPanGestureRecognizers;                                                             //@synthesize registeredPanGestureRecognizers=_registeredPanGestureRecognizers - In the implementation block
@property (nonatomic,readonly) UIPanGestureRecognizer * backgroundGestureRecognizer;                                                         //@synthesize backgroundGestureRecognizer=_backgroundGestureRecognizer - In the implementation block
@property (nonatomic,readonly) _UIHyperInteractor * interactor;                                                                              //@synthesize interactor=_interactor - In the implementation block
@property (nonatomic,readonly) NSMutableArray * detentPoints;                                                                                //@synthesize detentPoints=_detentPoints - In the implementation block
@property (nonatomic,readonly) _UIHyperregionUnion * detentUnion;                                                                            //@synthesize detentUnion=_detentUnion - In the implementation block
@property (nonatomic,readonly) _UIHyperrectangle * detentContinuum;                                                                          //@synthesize detentContinuum=_detentContinuum - In the implementation block
@property (nonatomic,readonly) _UIHyperAsymmetricExtender * extender;                                                                        //@synthesize extender=_extender - In the implementation block
@property (nonatomic,retain) id dragSource;                                                                                                  //@synthesize dragSource=_dragSource - In the implementation block
@property (getter=isAnimating,nonatomic,readonly) BOOL animating; 
@property (nonatomic,retain) id<UITimingCurveProvider> timingCurve;                                                                          //@synthesize timingCurve=_timingCurve - In the implementation block
@property (nonatomic,retain) UIViewPropertyAnimator * propertyAnimator;                                                                      //@synthesize propertyAnimator=_propertyAnimator - In the implementation block
@property (nonatomic,copy) NSArray * detents;                                                                                                //@synthesize detents=_detents - In the implementation block
@property (assign,nonatomic) long long indexOfCurrentDetent;                                                                                 //@synthesize indexOfCurrentDetent=_indexOfCurrentDetent - In the implementation block
@property (assign,nonatomic) BOOL scrollingExpandsToLargerDetentWhenScrolledToEdge;                                                          //@synthesize scrollingExpandsToLargerDetentWhenScrolledToEdge=_scrollingExpandsToLargerDetentWhenScrolledToEdge - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                                                                  //@synthesize enabled=_enabled - In the implementation block
@property (getter=isDragging,nonatomic,readonly) BOOL dragging; 
@property (nonatomic,readonly) CGPoint currentOffset; 
@property (assign,nonatomic) double rubberBandExtentBeyondMinimumOffset;                                                                     //@synthesize rubberBandExtentBeyondMinimumOffset=_rubberBandExtentBeyondMinimumOffset - In the implementation block
@property (assign,nonatomic) double rubberBandExtentBeyondMaximumOffset;                                                                     //@synthesize rubberBandExtentBeyondMaximumOffset=_rubberBandExtentBeyondMaximumOffset - In the implementation block
@property (getter=isUnconstrainedOffsetBeyondSideOrTopExtent,nonatomic,readonly) BOOL unconstrainedOffsetBeyondSideOrTopExtent; 
@property (nonatomic,readonly) CGPoint attachmentPoint; 
@property (assign,nonatomic,__weak) id<_UISheetInteractionDelegate> delegate;                                                                //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_panGestureRecognizer:(id)arg1 shouldTryToBeginVerticallyWithEvent:(id)arg2 ;
-(void)setDragSource:(id)arg1 ;
-(id)init;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(void)updateRegisteredPanGestureRecognizerEnabled:(id)arg1 ;
-(id<_UISheetInteractionDelegate>)delegate;
-(long long)indexOfCurrentDetent;
-(void)_descendentScrollViewDidEndDragging:(id)arg1 ;
-(void)didMoveToView:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(id<UITimingCurveProvider>)timingCurve;
-(NSMutableArray *)registeredPanGestureRecognizers;
-(void)_descendentScrollViewDidCancelDragging:(id)arg1 ;
-(CGPoint)_scrollView:(id)arg1 adjustedUnconstrainedOffsetForUnconstrainedOffset:(CGPoint)arg2 startOffset:(CGPoint)arg3 horizontalVelocity:(inout double*)arg4 verticalVelocity:(inout double*)arg5 animator:(out id*)arg6 ;
-(BOOL)_descendentScrollViewShouldScrollHorizontally:(id)arg1 ;
-(void)draggingEndedInSource:(id)arg1 withVelocity:(CGPoint)arg2 ;
-(BOOL)_descendentScrollView:(id)arg1 shouldPreserveStartOffset:(CGPoint)arg2 ;
-(void)registerPanGestureRecognizer:(id)arg1 ;
-(void)willMoveToView:(id)arg1 ;
-(UIViewPropertyAnimator *)propertyAnimator;
-(void)setView:(UIView *)arg1 ;
-(BOOL)_panGestureRecognizer:(id)arg1 shouldTryToBeginHorizontallyWithEvent:(id)arg2 ;
-(BOOL)scrollingExpandsToLargerDetentWhenScrolledToEdge;
-(void)setRubberBandExtentBeyondMinimumOffset:(double)arg1 ;
-(void)setDelegate:(id<_UISheetInteractionDelegate>)arg1 ;
-(void)setPropertyAnimator:(UIViewPropertyAnimator *)arg1 ;
-(CGPoint)attachmentPoint;
-(UIPanGestureRecognizer *)backgroundGestureRecognizer;
-(void)setIndexOfCurrentDetent:(long long)arg1 ;
-(UIView *)view;
-(void)setScrollingExpandsToLargerDetentWhenScrolledToEdge:(BOOL)arg1 ;
-(_UIHyperregionUnion *)detentUnion;
-(NSArray *)detents;
-(void)updateCurrentOffsetToCurrentDetent;
-(void)setRubberBandExtentBeyondMaximumOffset:(double)arg1 ;
-(id)_currentDragPanGesture;
-(void)handlePan:(id)arg1 ;
-(double)_currentRubberBandCoefficient;
-(BOOL)_shouldInteractWithDescendentScrollView:(id)arg1 startOffset:(CGPoint)arg2 maxTopOffset:(double)arg3 ;
-(BOOL)isDragging;
-(CGPoint)currentOffset;
-(id)dragSource;
-(double)rubberBandExtentBeyondMinimumOffset;
-(double)rubberBandExtentBeyondMaximumOffset;
-(_UIHyperrectangle *)detentContinuum;
-(BOOL)isEnabled;
-(void)cancelDraggingIfNeeded;
-(void)sendCurrentOffsetDidChange;
-(void)setTimingCurve:(id<UITimingCurveProvider>)arg1 ;
-(_UIHyperAsymmetricExtender *)extender;
-(void)draggingBeganFromSource:(id)arg1 ;
-(void)draggingCancelledInSource:(id)arg1 ;
-(NSMutableArray *)detentPoints;
-(void)unregisterPanGestureRecognizer:(id)arg1 ;
-(BOOL)_descendentScrollViewShouldScrollVertically:(id)arg1 ;
-(_UIHyperInteractor *)interactor;
-(BOOL)isAnimating;
-(void)setDetents:(NSArray *)arg1 ;
-(void)draggingChangedInSource:(id)arg1 withTranslation:(CGPoint)arg2 animateChange:(BOOL)arg3 ;
-(BOOL)isUnconstrainedOffsetBeyondSideOrTopExtent;
@end

