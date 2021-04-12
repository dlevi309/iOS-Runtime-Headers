/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIScrollViewScrollableAncestor.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIInteraction.h>

@protocol UITimingCurveProvider, _UISheetInteractionDelegate;
@class UIView, NSArray, NSMutableArray, UIPanGestureRecognizer, UIViewPropertyAnimator, NSString;

@interface _UISheetInteraction : NSObject <_UIScrollViewScrollableAncestor, UIGestureRecognizerDelegate, UIInteraction> {

	BOOL _enabled;
	BOOL _horizontalRubberBandingEnabled;
	BOOL _verticalPanningEnabled;
	NSArray* _detents;
	long long _indexOfCurrentDetent;
	double _rubberBandExtentBeyondMinimumOffset;
	double _rubberBandExtentBeyondMaximumOffset;
	id<UITimingCurveProvider> _timingCurve;
	id<_UISheetInteractionDelegate> _delegate;
	UIView* _view;
	NSMutableArray* _registeredPanGestureRecognizers;
	UIPanGestureRecognizer* _backgroundGestureRecognizer;
	id _dragSource;
	double _offsetWhenGestureBegan;
	double _unconstrainedOffset;
	UIViewPropertyAnimator* _propertyAnimator;
	CGPoint _currentOffset;

}

@property (assign,nonatomic,__weak) UIView * view;                                                //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) NSMutableArray * registeredPanGestureRecognizers;                  //@synthesize registeredPanGestureRecognizers=_registeredPanGestureRecognizers - In the implementation block
@property (nonatomic,readonly) UIPanGestureRecognizer * backgroundGestureRecognizer;              //@synthesize backgroundGestureRecognizer=_backgroundGestureRecognizer - In the implementation block
@property (nonatomic,readonly) double minimumOffset; 
@property (nonatomic,readonly) double maximumOffset; 
@property (nonatomic,readonly) double offsetAtCurrentDetent; 
@property (assign,nonatomic) BOOL horizontalRubberBandingEnabled;                                 //@synthesize horizontalRubberBandingEnabled=_horizontalRubberBandingEnabled - In the implementation block
@property (assign,nonatomic) BOOL verticalPanningEnabled;                                         //@synthesize verticalPanningEnabled=_verticalPanningEnabled - In the implementation block
@property (nonatomic,retain) id dragSource;                                                       //@synthesize dragSource=_dragSource - In the implementation block
@property (getter=isAnimating,nonatomic,readonly) BOOL animating; 
@property (assign,nonatomic) CGPoint currentOffset;                                               //@synthesize currentOffset=_currentOffset - In the implementation block
@property (nonatomic,retain) id<UITimingCurveProvider> timingCurve;                               //@synthesize timingCurve=_timingCurve - In the implementation block
@property (assign,nonatomic) double offsetWhenGestureBegan;                                       //@synthesize offsetWhenGestureBegan=_offsetWhenGestureBegan - In the implementation block
@property (assign,nonatomic) double unconstrainedOffset;                                          //@synthesize unconstrainedOffset=_unconstrainedOffset - In the implementation block
@property (nonatomic,retain) UIViewPropertyAnimator * propertyAnimator;                           //@synthesize propertyAnimator=_propertyAnimator - In the implementation block
@property (nonatomic,copy) NSArray * detents;                                                     //@synthesize detents=_detents - In the implementation block
@property (assign,nonatomic) long long indexOfCurrentDetent;                                      //@synthesize indexOfCurrentDetent=_indexOfCurrentDetent - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                       //@synthesize enabled=_enabled - In the implementation block
@property (getter=isDragging,nonatomic,readonly) BOOL dragging; 
@property (assign,nonatomic) double rubberBandExtentBeyondMinimumOffset;                          //@synthesize rubberBandExtentBeyondMinimumOffset=_rubberBandExtentBeyondMinimumOffset - In the implementation block
@property (assign,nonatomic) double rubberBandExtentBeyondMaximumOffset;                          //@synthesize rubberBandExtentBeyondMaximumOffset=_rubberBandExtentBeyondMaximumOffset - In the implementation block
@property (nonatomic,readonly) CGPoint attachmentPoint; 
@property (assign,nonatomic,__weak) id<_UISheetInteractionDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setEnabled:(BOOL)arg1 ;
-(id<_UISheetInteractionDelegate>)delegate;
-(void)setDelegate:(id<_UISheetInteractionDelegate>)arg1 ;
-(BOOL)isEnabled;
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(BOOL)_gestureRecognizer:(id)arg1 shouldReceiveEvent:(id)arg2 ;
-(void)cancelDraggingIfNeeded;
-(UIPanGestureRecognizer *)backgroundGestureRecognizer;
-(void)registerPanGestureRecognizer:(id)arg1 ;
-(long long)indexOfCurrentDetent;
-(void)setIndexOfCurrentDetent:(long long)arg1 ;
-(BOOL)isDragging;
-(double)unconstrainedOffset;
-(double)constrainedOffsetForUnconstrainedOffset:(double)arg1 ;
-(void)_setCurrentOffsetY:(double)arg1 ;
-(void)updateCurrentOffsetToCurrentDetent;
-(NSArray *)detents;
-(double)offsetAtCurrentDetent;
-(double)detentAtIndex:(long long)arg1 ;
-(double)maximumOffset;
-(double)minimumOffset;
-(double)rubberBandExtentForOffset:(double)arg1 ;
-(double)_currentRubberBandCoefficient;
-(double)rubberBandExtentBeyondMinimumOffset;
-(double)rubberBandExtentBeyondMaximumOffset;
-(NSMutableArray *)registeredPanGestureRecognizers;
-(void)updateRegisteredPanGestureRecognizerEnabled:(id)arg1 ;
-(id)dragSource;
-(void)draggingCancelledInSource:(id)arg1 ;
-(UIViewPropertyAnimator *)propertyAnimator;
-(CGPoint)currentOffset;
-(id)_currentDragPanGesture;
-(void)setCurrentOffset:(CGPoint)arg1 ;
-(void)handlePan:(id)arg1 ;
-(void)setVerticalPanningEnabled:(BOOL)arg1 ;
-(void)setHorizontalRubberBandingEnabled:(BOOL)arg1 ;
-(BOOL)horizontalRubberBandingEnabled;
-(BOOL)verticalPanningEnabled;
-(void)draggingBeganFromSource:(id)arg1 ;
-(void)draggingChangedInSource:(id)arg1 withTranslation:(CGPoint)arg2 animateChange:(BOOL)arg3 ;
-(void)draggingEndedInSource:(id)arg1 withVelocity:(double)arg2 ;
-(BOOL)_shouldInteractWithDescendentScrollView:(id)arg1 startOffset:(CGPoint)arg2 maxTopOffset:(double)arg3 ;
-(double)offsetWhenGestureBegan;
-(BOOL)isAnimating;
-(void)setDragSource:(id)arg1 ;
-(void)setOffsetWhenGestureBegan:(double)arg1 ;
-(void)setUnconstrainedOffset:(double)arg1 ;
-(void)_setCurrentOffsetX:(double)arg1 ;
-(void)sendCurrentOffsetDidChange;
-(long long)indexOfDetentClosestToOffset:(double)arg1 ;
-(void)setTimingCurve:(id<UITimingCurveProvider>)arg1 ;
-(id<UITimingCurveProvider>)timingCurve;
-(void)setPropertyAnimator:(UIViewPropertyAnimator *)arg1 ;
-(CGPoint)_scrollView:(id)arg1 adjustedUnconstrainedOffsetForUnconstrainedOffset:(CGPoint)arg2 startOffset:(CGPoint)arg3 horizontalVelocity:(inout double*)arg4 verticalVelocity:(inout double*)arg5 animator:(out id*)arg6 ;
-(void)_descendentScrollViewDidEndDragging:(id)arg1 ;
-(void)_descendentScrollViewDidCancelDragging:(id)arg1 ;
-(BOOL)_descendentScrollView:(id)arg1 shouldPreserveStartOffset:(CGPoint)arg2 ;
-(void)willMoveToView:(id)arg1 ;
-(void)didMoveToView:(id)arg1 ;
-(void)setDetents:(NSArray *)arg1 ;
-(CGPoint)attachmentPoint;
-(void)unregisterPanGestureRecognizer:(id)arg1 ;
-(void)setRubberBandExtentBeyondMinimumOffset:(double)arg1 ;
-(void)setRubberBandExtentBeyondMaximumOffset:(double)arg1 ;
@end

