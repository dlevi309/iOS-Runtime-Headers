/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIScrollViewPinchGestureRecognizer;

@interface _UIScrollViewMockPinchGestureRecognizer : NSObject {

	double _scale;
	double _velocity;
	long long _state;
	UIScrollViewPinchGestureRecognizer* _gestureRecognizer;

}

@property (nonatomic,retain) UIScrollViewPinchGestureRecognizer * gestureRecognizer;              //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (assign,nonatomic) long long state; 
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(long long)state;
-(double)scale;
-(void)setState:(long long)arg1 ;
-(double)velocity;
-(CGPoint)anchorPoint;
-(void)setGestureRecognizer:(UIScrollViewPinchGestureRecognizer *)arg1 ;
-(UIScrollViewPinchGestureRecognizer *)gestureRecognizer;
-(id)_activeTouchesForEvent:(id)arg1 ;
-(void)simulateScale:(double)arg1 velocity:(double)arg2 ;
@end

