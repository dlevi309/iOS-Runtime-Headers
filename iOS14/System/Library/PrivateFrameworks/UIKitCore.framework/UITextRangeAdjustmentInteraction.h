/*
* Generated on Thursday, January 14, 2021 at 2:20:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIInteraction.h>

@protocol UITextRangeAdjustmentInteractionDelegate;
@class UIView, UITextGestureTuning, UITextRangeAdjustmentGestureRecognizer, UITouch, NSString;

@interface UITextRangeAdjustmentInteraction : NSObject <UIGestureRecognizerDelegate, UIInteraction> {

	UIView* _view;
	UITextGestureTuning* _gestureTuning;
	BOOL _baseIsStart;
	id<UITextRangeAdjustmentInteractionDelegate> _delegate;
	UITextRangeAdjustmentGestureRecognizer* _adjustmentGestureRecognizer;
	double _initialDistance;
	double _firstMovedTime;
	UITouch* _activeTouch;
	CGPoint _initialExtentPoint;
	CGPoint _initialPoint;
	CGPoint _basePoint;
	CGPoint _extentPoint;
	CGPoint _initialBasePoint;
	CGPoint _touchOffset;

}

@property (assign,nonatomic) CGPoint initialPoint;                                                                //@synthesize initialPoint=_initialPoint - In the implementation block
@property (assign,nonatomic) CGPoint basePoint;                                                                   //@synthesize basePoint=_basePoint - In the implementation block
@property (assign,nonatomic) CGPoint extentPoint;                                                                 //@synthesize extentPoint=_extentPoint - In the implementation block
@property (assign,nonatomic) CGPoint initialBasePoint;                                                            //@synthesize initialBasePoint=_initialBasePoint - In the implementation block
@property (assign,nonatomic) double initialDistance;                                                              //@synthesize initialDistance=_initialDistance - In the implementation block
@property (assign,nonatomic) CGPoint touchOffset;                                                                 //@synthesize touchOffset=_touchOffset - In the implementation block
@property (assign,nonatomic) double firstMovedTime;                                                               //@synthesize firstMovedTime=_firstMovedTime - In the implementation block
@property (nonatomic,retain) UITouch * activeTouch;                                                               //@synthesize activeTouch=_activeTouch - In the implementation block
@property (assign,nonatomic) BOOL baseIsStart;                                                                    //@synthesize baseIsStart=_baseIsStart - In the implementation block
@property (nonatomic,readonly) CGPoint initialExtentPoint;                                                        //@synthesize initialExtentPoint=_initialExtentPoint - In the implementation block
@property (assign,nonatomic,__weak) id<UITextRangeAdjustmentInteractionDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UITextRangeAdjustmentGestureRecognizer * adjustmentGestureRecognizer;              //@synthesize adjustmentGestureRecognizer=_adjustmentGestureRecognizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) UIView * view;                                                              //@synthesize view=_view - In the implementation block
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(void)_updateAdjustmentInteractionWithState:(long long)arg1 location:(CGPoint)arg2 locationOfFirstTouch:(CGPoint)arg3 forTouchType:(long long)arg4 ;
-(void)manuallyUpdateInteractionWithGestureState:(long long)arg1 location:(CGPoint)arg2 locationOfFirstTouch:(CGPoint)arg3 forTouchType:(long long)arg4 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(void)_adjustmentInteractionBeganWithLocation:(CGPoint)arg1 startPoint:(CGPoint)arg2 forTouchType:(long long)arg3 ;
-(void)_adjustmentInteractionChangedWithLocation:(CGPoint)arg1 forTouchType:(long long)arg2 ;
-(id<UITextRangeAdjustmentInteractionDelegate>)delegate;
-(void)didMoveToView:(id)arg1 ;
-(void)_adjustmentInteractionEndedAtLocation:(CGPoint)arg1 forTouchType:(long long)arg2 ;
-(void)willMoveToView:(id)arg1 ;
-(CGPoint)basePoint;
-(void)setDelegate:(id<UITextRangeAdjustmentInteractionDelegate>)arg1 ;
-(CGPoint)touchOffset;
-(UIView *)view;
-(void)_createGestureTuningIfNecessary;
-(UITouch *)activeTouch;
-(CGPoint)initialExtentPoint;
-(void)setFirstMovedTime:(double)arg1 ;
-(void)setInitialBasePoint:(CGPoint)arg1 ;
-(void)_didRecognizeAdjustmentGesture:(id)arg1 ;
-(BOOL)_gestureTuningEnabledForTouches:(id)arg1 ;
-(void)setInitialPoint:(CGPoint)arg1 ;
-(BOOL)baseIsStart;
-(CGPoint)extentPoint;
-(CGPoint)_convertPointToViewCoordinateSpace:(CGPoint)arg1 ;
-(BOOL)_shouldApplyOffsetForTouchType:(long long)arg1 ;
-(void)_adjustmentInteractionCancelled;
-(BOOL)_pointCloserToEnd:(CGPoint)arg1 startEdge:(CGRect)arg2 endEdge:(CGRect)arg3 ;
-(void)updateBaseAndExtentPointsFromEdges;
-(double)initialDistance;
-(void)setInitialDistance:(double)arg1 ;
-(void)_setTouchOffset:(CGPoint)arg1 touchPoint:(CGPoint)arg2 ;
-(UITextRangeAdjustmentGestureRecognizer *)adjustmentGestureRecognizer;
-(CGPoint)initialPoint;
-(void)setBasePoint:(CGPoint)arg1 ;
-(double)firstMovedTime;
-(void)setActiveTouch:(UITouch *)arg1 ;
-(void)setTouchOffset:(CGPoint)arg1 ;
-(void)setExtentPoint:(CGPoint)arg1 ;
-(void)setBaseIsStart:(BOOL)arg1 ;
-(CGPoint)initialBasePoint;
-(CGPoint)applyTouchOffset:(CGPoint)arg1 ;
-(CGPoint)_activeTouchPoint;
@end

