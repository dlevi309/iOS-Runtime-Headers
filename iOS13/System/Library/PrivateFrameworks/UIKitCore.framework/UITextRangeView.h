/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIPointerInteractionDelegate.h>
#import <UIKit/UITextRangeAdjustmentInteractionDelegate.h>

@protocol UITextInput;
@class UITextSelectionView, UIResponder, NSArray, NSMutableArray, UITouch, UIView, UISelectionGrabber, UIPointerInteraction, UITextRangeAdjustmentInteraction, NSString;

@interface UITextRangeView : UIView <UIPointerInteractionDelegate, UITextRangeAdjustmentInteractionDelegate> {

	UITextSelectionView* m_selectionView;
	UIResponder*<UITextInput> m_container;
	int m_mode;
	NSArray* m_rects;
	NSMutableArray* m_rectViews;
	UITouch* m_activeTouch;
	CGRect m_startEdge;
	CGRect m_endEdge;
	UIView* m_rectContainerView;
	UISelectionGrabber* m_startGrabber;
	UISelectionGrabber* m_endGrabber;
	BOOL m_animateUpdate;
	BOOL m_commandsWereShowing;
	BOOL m_willBeginMagnifying;
	BOOL m_inGesture;
	BOOL m_magnifying;
	BOOL m_scrolling;
	BOOL m_scaling;
	BOOL m_rotating;
	BOOL m_inputViewIsChanging;
	UIPointerInteraction* _pointerInteraction;
	BOOL m_isClearingRange;
	BOOL m_shouldStayVisible;
	BOOL _baseIsStart;
	UITextRangeAdjustmentInteraction* _adjustmentInteraction;
	CGPoint m_basePoint;
	CGPoint m_extentPoint;
	CGPoint m_initialExtentPoint;
	CGPoint _activeTouchPoint;

}

@property (assign,nonatomic) CGRect startEdge; 
@property (assign,nonatomic) CGRect endEdge; 
@property (assign,nonatomic) BOOL magnifying; 
@property (assign,nonatomic) BOOL isClearingRange; 
@property (assign,nonatomic) BOOL shouldStayVisible; 
@property (nonatomic,readonly) UITextSelectionView * selectionView; 
@property (nonatomic,readonly) UIResponder*<UITextInput> container; 
@property (nonatomic,readonly) CGPoint basePoint; 
@property (nonatomic,readonly) CGPoint extentPoint; 
@property (assign,nonatomic) int mode; 
@property (nonatomic,retain) NSArray * rects; 
@property (nonatomic,readonly) BOOL autoscrolled; 
@property (assign,nonatomic) BOOL inGesture; 
@property (assign,nonatomic) BOOL isScrolling; 
@property (assign,nonatomic) BOOL rotating; 
@property (assign,nonatomic) BOOL scaling; 
@property (assign,nonatomic) BOOL inputViewIsChanging; 
@property (assign,nonatomic) BOOL baseIsStart;                                                      //@synthesize baseIsStart=_baseIsStart - In the implementation block
@property (assign,nonatomic) BOOL commandsWereShowing; 
@property (nonatomic,retain) UISelectionGrabber * startGrabber; 
@property (nonatomic,retain) UISelectionGrabber * endGrabber; 
@property (assign,nonatomic) CGPoint initialExtentPoint; 
@property (assign,nonatomic) BOOL animateUpdate; 
@property (nonatomic,readonly) CGPoint activeTouchPoint;                                            //@synthesize activeTouchPoint=_activeTouchPoint - In the implementation block
@property (assign,nonatomic) BOOL willBeginMagnifying; 
@property (nonatomic,readonly) BOOL areSelectionRectsVisible; 
@property (nonatomic,retain) UITextRangeAdjustmentInteraction * adjustmentInteraction;              //@synthesize adjustmentInteraction=_adjustmentInteraction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIResponder*<UITextInput>)container;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(BOOL)isScrolling;
-(void)removeFromSuperview;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(NSArray *)rects;
-(id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3 ;
-(id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2 ;
-(UITextSelectionView *)selectionView;
-(void)startAnimating;
-(BOOL)baseIsStart;
-(CGRect)startEdge;
-(CGRect)endEdge;
-(void)updateBaseAndExtentPointsFromEdges;
-(CGPoint)extentPoint;
-(CGPoint)basePoint;
-(CGPoint)initialExtentPoint;
-(CGPoint)applyTouchOffset:(CGPoint)arg1 ;
-(void)textRangeAdjustmentInteraction:(id)arg1 didBeginAtPoint:(CGPoint)arg2 ;
-(void)textRangeAdjustmentInteraction:(id)arg1 selectionMoved:(CGPoint)arg2 withTouchPoint:(CGPoint)arg3 ;
-(void)textRangeAdjustmentInteraction:(id)arg1 didEndAtPoint:(CGPoint)arg2 ;
-(void)textRangeAdjustmentInteractionWasCancelled:(id)arg1 ;
-(void)setBaseIsStart:(BOOL)arg1 ;
-(void)stopAnimating;
-(void)setInGesture:(BOOL)arg1 ;
-(BOOL)inGesture;
-(BOOL)autoscrolled;
-(BOOL)_gestureRecognizerShouldReceiveTouch:(id)arg1 ;
-(CGRect)_selectionClipRect;
-(void)willRotate;
-(void)didRotate;
-(void)updateBaseIsStartWithDocumentPoint:(CGPoint)arg1 ;
-(BOOL)scaling;
-(BOOL)rotating;
-(BOOL)inputViewIsChanging;
-(UITextRangeAdjustmentInteraction *)adjustmentInteraction;
-(void)setAnimateUpdate:(BOOL)arg1 ;
-(UISelectionGrabber *)startGrabber;
-(UISelectionGrabber *)endGrabber;
-(CGPoint)activeTouchPoint;
-(void)beginMagnifying;
-(void)setWillBeginMagnifying:(BOOL)arg1 ;
-(BOOL)commandsWereShowing;
-(CGPoint)magnifierPoint;
-(BOOL)willBeginMagnifying;
-(void)updateSelectionWithDocumentPoint:(CGPoint)arg1 ;
-(void)cancelDelayedActions;
-(void)setIsScrolling:(BOOL)arg1 ;
-(CGRect)_startEdgeHitRect:(BOOL)arg1 ;
-(CGRect)_endEdgeHitRect:(BOOL)arg1 ;
-(BOOL)_endIsHorizontal;
-(BOOL)_startIsHorizontal;
-(void)updateEdges;
-(void)setCommandsWereShowing:(BOOL)arg1 ;
-(void)updateRectViews;
-(void)updateGrabbers;
-(void)updateAfterEffectiveModeChange;
-(void)setStartEdge:(CGRect)arg1 ;
-(void)setEndEdge:(CGRect)arg1 ;
-(BOOL)isClearingRange;
-(void)setShouldStayVisible:(BOOL)arg1 ;
-(BOOL)pointCloserToEnd:(CGPoint)arg1 startEdge:(CGRect)arg2 endEdge:(CGRect)arg3 ;
-(void)setMagnifying:(BOOL)arg1 ;
-(void)updateDots;
-(void)setScaling:(BOOL)arg1 ;
-(void)setRotating:(BOOL)arg1 ;
-(void)setInputViewIsChanging:(BOOL)arg1 ;
-(void)setIsClearingRange:(BOOL)arg1 ;
-(BOOL)shouldStayVisible;
-(void)animateHighlighterExpanderOnLayer:(id)arg1 withOffset:(CGPoint)arg2 ;
-(void)animateHighlighterDelayedFadeInOnLayer:(id)arg1 ;
-(void)setMagnifierOrientation;
-(void)_cancelGrabberTransitionOutAnimations:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 selectionView:(id)arg2 ;
-(void)setRects:(NSArray *)arg1 ;
-(void)prepareForMagnification;
-(void)doneMagnifying;
-(void)willScroll;
-(void)didScroll;
-(void)scaleWillChange;
-(void)scaleDidChange;
-(void)inputViewWillChange;
-(void)inputViewDidChange;
-(void)clearRangeAnimated:(BOOL)arg1 ;
-(void)animateHighlighterExpanderAnimation;
-(CGPoint)convertFromMagnifierPoint:(CGPoint)arg1 ;
-(BOOL)areSelectionRectsVisible;
-(void)setInitialExtentPoint:(CGPoint)arg1 ;
-(void)setStartGrabber:(UISelectionGrabber *)arg1 ;
-(void)setEndGrabber:(UISelectionGrabber *)arg1 ;
-(BOOL)animateUpdate;
-(BOOL)magnifying;
-(void)setAdjustmentInteraction:(UITextRangeAdjustmentInteraction *)arg1 ;
@end

