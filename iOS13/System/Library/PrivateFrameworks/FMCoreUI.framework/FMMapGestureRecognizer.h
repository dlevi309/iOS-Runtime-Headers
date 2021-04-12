/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
*/

#import <FMCoreUI/FMCoreUI-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@protocol FMMapGestureRecognizerDelegate;
@class UITouch, NSMutableArray, NSTimer;

@interface FMMapGestureRecognizer : UIGestureRecognizer {

	BOOL _isSwipeEnabled;
	BOOL _isTrackingTouches;
	BOOL _isSwipingFromTheEdge;
	BOOL _isSwipingGestureEnded;
	BOOL _isRTLOrientation;
	int _touchRadius;
	id<FMMapGestureRecognizerDelegate> _touchDelegate;
	UITouch* _previousTouch;
	double _swipeThreshold;
	double _velocity;
	NSMutableArray* _otherGestures;
	NSTimer* _doubleTapTimer;
	CGPoint _initialTouchLocation;
	CGPoint _lastTouchPoint;

}

@property (assign,nonatomic) CGPoint initialTouchLocation;                                         //@synthesize initialTouchLocation=_initialTouchLocation - In the implementation block
@property (nonatomic,retain) UITouch * previousTouch;                                              //@synthesize previousTouch=_previousTouch - In the implementation block
@property (assign,nonatomic) CGPoint lastTouchPoint;                                               //@synthesize lastTouchPoint=_lastTouchPoint - In the implementation block
@property (assign,nonatomic) double swipeThreshold;                                                //@synthesize swipeThreshold=_swipeThreshold - In the implementation block
@property (assign,nonatomic) double velocity;                                                      //@synthesize velocity=_velocity - In the implementation block
@property (assign,nonatomic) BOOL isTrackingTouches;                                               //@synthesize isTrackingTouches=_isTrackingTouches - In the implementation block
@property (assign,nonatomic) BOOL isSwipingFromTheEdge;                                            //@synthesize isSwipingFromTheEdge=_isSwipingFromTheEdge - In the implementation block
@property (assign,nonatomic) BOOL isSwipingGestureEnded;                                           //@synthesize isSwipingGestureEnded=_isSwipingGestureEnded - In the implementation block
@property (assign,nonatomic) BOOL isRTLOrientation;                                                //@synthesize isRTLOrientation=_isRTLOrientation - In the implementation block
@property (nonatomic,retain) NSMutableArray * otherGestures;                                       //@synthesize otherGestures=_otherGestures - In the implementation block
@property (nonatomic,retain) NSTimer * doubleTapTimer;                                             //@synthesize doubleTapTimer=_doubleTapTimer - In the implementation block
@property (assign,nonatomic,__weak) id<FMMapGestureRecognizerDelegate> touchDelegate;              //@synthesize touchDelegate=_touchDelegate - In the implementation block
@property (assign,nonatomic) int touchRadius;                                                      //@synthesize touchRadius=_touchRadius - In the implementation block
@property (assign,nonatomic) BOOL isSwipeEnabled;                                                  //@synthesize isSwipeEnabled=_isSwipeEnabled - In the implementation block
-(id)init;
-(void)dealloc;
-(void)reset;
-(double)velocity;
-(void)setVelocity:(double)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(UITouch *)previousTouch;
-(BOOL)isTrackingTouches;
-(id<FMMapGestureRecognizerDelegate>)touchDelegate;
-(void)setTouchDelegate:(id<FMMapGestureRecognizerDelegate>)arg1 ;
-(void)setInitialTouchLocation:(CGPoint)arg1 ;
-(CGPoint)initialTouchLocation;
-(void)setLastTouchPoint:(CGPoint)arg1 ;
-(CGPoint)lastTouchPoint;
-(void)setIsSwipeEnabled:(BOOL)arg1 ;
-(void)setTouchRadius:(int)arg1 ;
-(void)setOtherGestures:(NSMutableArray *)arg1 ;
-(NSTimer *)doubleTapTimer;
-(void)setDoubleTapTimer:(NSTimer *)arg1 ;
-(void)setIsTrackingTouches:(BOOL)arg1 ;
-(void)setSwipeThreshold:(double)arg1 ;
-(void)setIsRTLOrientation:(BOOL)arg1 ;
-(BOOL)isRTLOrientation;
-(BOOL)isSwipeEnabled;
-(void)setIsSwipingFromTheEdge:(BOOL)arg1 ;
-(void)setIsSwipingGestureEnded:(BOOL)arg1 ;
-(BOOL)isSwipingFromTheEdge;
-(void)finishSwipeGesture:(double)arg1 ;
-(double)distanceBetweenPointA:(CGPoint)arg1 andPointB:(CGPoint)arg2 ;
-(int)touchRadius;
-(void)mapTappedTimer;
-(void)setPreviousTouch:(UITouch *)arg1 ;
-(double)swipeThreshold;
-(BOOL)isSwipingGestureEnded;
-(NSMutableArray *)otherGestures;
-(void)invalidateGesture;
@end

