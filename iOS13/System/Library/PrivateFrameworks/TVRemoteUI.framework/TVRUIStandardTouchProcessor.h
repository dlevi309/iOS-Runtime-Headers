/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
*/


@protocol _TVRUIEventDelegate;
#import <TVRemoteUI/TVRemoteUI-Structs.h>
@class UIView, _TVRButtonHaptic, NSMutableSet;

@interface TVRUIStandardTouchProcessor : NSObject {

	UIView* _touchpadView;
	id<_TVRUIEventDelegate> _eventDelegate;
	_TVRButtonHaptic* _haptic;
	UIView* _debugView;
	double _previousVelocity;
	double _previousTimestamp;
	NSMutableSet* _startingTouches;
	long long _startingSwipeDirection;
	NSMutableSet* _endedTouches;
	long long _touchCnt;
	CGPoint _startingPoint;
	CGRect _virtualBoundingBox;

}

@property (nonatomic,retain) UIView * touchpadView;                                     //@synthesize touchpadView=_touchpadView - In the implementation block
@property (assign,nonatomic,__weak) id<_TVRUIEventDelegate> eventDelegate;              //@synthesize eventDelegate=_eventDelegate - In the implementation block
@property (nonatomic,retain) _TVRButtonHaptic * haptic;                                 //@synthesize haptic=_haptic - In the implementation block
@property (assign,nonatomic) CGRect virtualBoundingBox;                                 //@synthesize virtualBoundingBox=_virtualBoundingBox - In the implementation block
@property (nonatomic,retain) UIView * debugView;                                        //@synthesize debugView=_debugView - In the implementation block
@property (assign,nonatomic) double previousVelocity;                                   //@synthesize previousVelocity=_previousVelocity - In the implementation block
@property (assign,nonatomic) double previousTimestamp;                                  //@synthesize previousTimestamp=_previousTimestamp - In the implementation block
@property (nonatomic,retain) NSMutableSet * startingTouches;                            //@synthesize startingTouches=_startingTouches - In the implementation block
@property (assign,nonatomic) CGPoint startingPoint;                                     //@synthesize startingPoint=_startingPoint - In the implementation block
@property (assign,nonatomic) long long startingSwipeDirection;                          //@synthesize startingSwipeDirection=_startingSwipeDirection - In the implementation block
@property (nonatomic,retain) NSMutableSet * endedTouches;                               //@synthesize endedTouches=_endedTouches - In the implementation block
@property (assign,nonatomic) long long touchCnt;                                        //@synthesize touchCnt=_touchCnt - In the implementation block
-(double)previousVelocity;
-(void)setPreviousVelocity:(double)arg1 ;
-(UIView *)debugView;
-(void)setDebugView:(UIView *)arg1 ;
-(void)handleLongPress:(id)arg1 ;
-(void)handleTapGesture:(id)arg1 ;
-(_TVRButtonHaptic *)haptic;
-(void)setHaptic:(_TVRButtonHaptic *)arg1 ;
-(id<_TVRUIEventDelegate>)eventDelegate;
-(void)_sendSelectButtonPressBegan;
-(void)_sendSelectButtonPressEnded;
-(void)setEventDelegate:(id<_TVRUIEventDelegate>)arg1 ;
-(void)_configureGestureRecognizersOnView;
-(UIView *)touchpadView;
-(void)setStartingPoint:(CGPoint)arg1 ;
-(void)setStartingTouches:(NSMutableSet *)arg1 ;
-(void)setEndedTouches:(NSMutableSet *)arg1 ;
-(void)setVirtualBoundingBox:(CGRect)arg1 ;
-(void)setPreviousTimestamp:(double)arg1 ;
-(void)setTouchCnt:(long long)arg1 ;
-(NSMutableSet *)startingTouches;
-(CGRect)virtualBoundingBox;
-(CGPoint)startingPoint;
-(NSMutableSet *)endedTouches;
-(long long)_calculateDominantSwipeDirection:(CGPoint)arg1 toPoint:(CGPoint)arg2 ;
-(CGRect)_calculateVirtualBoundingBox:(CGPoint)arg1 sizingRatio:(double)arg2 swipeDirection:(long long)arg3 ;
-(void)setStartingSwipeDirection:(long long)arg1 ;
-(CGPoint)_virtualTouchLocationForTouchPoint:(CGPoint)arg1 ;
-(void)_processTouches:(id)arg1 ;
-(void)_endAndRestartTouchesManually:(id)arg1 ;
-(void)_cleanupOnTouchesEnded;
-(id)_touchEventForTouch:(id)arg1 ;
-(id)initWithTouchpadView:(id)arg1 ;
-(void)touchesBegan:(id)arg1 touches:(id)arg2 withEvent:(id)arg3 ;
-(void)touchesMoved:(id)arg1 touches:(id)arg2 withEvent:(id)arg3 ;
-(void)touchesEnded:(id)arg1 touches:(id)arg2 withEvent:(id)arg3 ;
-(void)touchesCancelled:(id)arg1 touches:(id)arg2 withEvent:(id)arg3 ;
-(void)setTouchpadView:(UIView *)arg1 ;
-(double)previousTimestamp;
-(long long)startingSwipeDirection;
-(long long)touchCnt;
@end

