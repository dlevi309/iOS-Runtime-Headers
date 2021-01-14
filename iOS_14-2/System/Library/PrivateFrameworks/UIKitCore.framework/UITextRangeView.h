/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)rects;
-(void)setIsScrolling:(BOOL)arg1 ;
-(int)mode;
-(CGRect)endEdge;
-(void)removeFromSuperview;
-(void)textRangeAdjustmentInteraction:(id)arg1 selectionMoved:(CGPoint)arg2 withTouchPoint:(CGPoint)arg3 ;
-(BOOL)scaling;
-(void)didRotate;
-(id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)doneMagnifying;
-(void)setRotating:(BOOL)arg1 ;
-(void)setMode:(int)arg1 ;
-(BOOL)rotating;
-(CGRect)startEdge;
-(CGPoint)basePoint;
-(void)willRotate;
-(void)clearRangeAnimated:(BOOL)arg1 ;
-(BOOL)inGesture;
-(void)prepareForMagnification;
-(UITextSelectionView *)selectionView;
-(void)inputViewDidChange;
-(void)setRects:(NSArray *)arg1 ;
-(CGPoint)initialExtentPoint;
-(void)startAnimating;
-(BOOL)baseIsStart;
-(CGPoint)extentPoint;
-(BOOL)isScrolling;
-(id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3 ;
-(void)updateBaseAndExtentPointsFromEdges;
-(void)textRangeAdjustmentInteraction:(id)arg1 didBeginAtPoint:(CGPoint)arg2 ;
-(void)textRangeAdjustmentInteraction:(id)arg1 didEndAtPoint:(CGPoint)arg2 ;
-(void)textRangeAdjustmentInteractionWasCancelled:(id)arg1 ;
-(void)stopAnimating;
-(UISelectionGrabber *)endGrabber;
-(void)inputViewWillChange;
-(void)updateSelectionWithDocumentPoint:(CGPoint)arg1 ;
-(BOOL)autoscrolled;
-(void)updateDots;
-(void)willScroll;
-(BOOL)magnifying;
-(void)didScroll;
-(BOOL)_gestureRecognizerShouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(UIResponder*<UITextInput>)container;
-(void)setInGesture:(BOOL)arg1 ;
-(void)updateEdges;
-(void)setEndEdge:(CGRect)arg1 ;
-(void)setScaling:(BOOL)arg1 ;
-(CGRect)_selectionClipRect;
-(BOOL)inputViewIsChanging;
-(void)beginMagnifying;
-(void)setBaseIsStart:(BOOL)arg1 ;
-(CGPoint)activeTouchPoint;
-(UITextRangeAdjustmentInteraction *)adjustmentInteraction;
-(CGPoint)magnifierPoint;
-(CGPoint)applyTouchOffset:(CGPoint)arg1 ;
-(void)setAnimateUpdate:(BOOL)arg1 ;
-(void)setWillBeginMagnifying:(BOOL)arg1 ;
-(BOOL)commandsWereShowing;
-(BOOL)willBeginMagnifying;
-(UISelectionGrabber *)startGrabber;
-(void)cancelDelayedActions;
-(BOOL)shouldHitTestGrabbers;
-(CGRect)_startEdgeHitRectWithPrecision:(unsigned long long)arg1 ;
-(CGRect)_endEdgeHitRectWithPrecision:(unsigned long long)arg1 ;
-(BOOL)_endIsHorizontal;
-(BOOL)_startIsHorizontal;
-(void)setCommandsWereShowing:(BOOL)arg1 ;
-(BOOL)shouldShowGrabbers;
-(void)updateRectViews;
-(void)updateGrabbers;
-(void)setStartEdge:(CGRect)arg1 ;
-(void)updateAfterEffectiveModeChange;
-(BOOL)isClearingRange;
-(void)setShouldStayVisible:(BOOL)arg1 ;
-(BOOL)pointCloserToEnd:(CGPoint)arg1 startEdge:(CGRect)arg2 endEdge:(CGRect)arg3 ;
-(void)setMagnifying:(BOOL)arg1 ;
-(void)setIsClearingRange:(BOOL)arg1 ;
-(void)setInputViewIsChanging:(BOOL)arg1 ;
-(BOOL)shouldStayVisible;
-(id)initWithFrame:(CGRect)arg1 selectionView:(id)arg2 ;
-(void)animateHighlighterExpanderOnLayer:(id)arg1 withOffset:(CGPoint)arg2 ;
-(void)setMagnifierOrientation;
-(void)animateHighlighterDelayedFadeInOnLayer:(id)arg1 ;
-(void)scaleWillChange;
-(void)scaleDidChange;
-(void)_cancelGrabberTransitionOutAnimations:(id)arg1 ;
-(CGPoint)convertFromMagnifierPoint:(CGPoint)arg1 ;
-(void)animateHighlighterExpanderAnimation;
-(BOOL)areSelectionRectsVisible;
-(void)setInitialExtentPoint:(CGPoint)arg1 ;
-(void)setStartGrabber:(UISelectionGrabber *)arg1 ;
-(void)setEndGrabber:(UISelectionGrabber *)arg1 ;
-(BOOL)animateUpdate;
-(void)updateBaseIsStartWithDocumentPoint:(CGPoint)arg1 ;
-(void)setAdjustmentInteraction:(UITextRangeAdjustmentInteraction *)arg1 ;
@end

