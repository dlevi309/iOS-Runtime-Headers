/*
* Generated on Thursday, January 14, 2021 at 2:20:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIScrollViewPinchGestureRecognizer *)gestureRecognizer;
-(double)velocity;
-(double)scale;
-(void)simulateScale:(double)arg1 velocity:(double)arg2 ;
-(CGPoint)anchorPoint;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)setState:(long long)arg1 ;
-(long long)state;
-(void)setGestureRecognizer:(UIScrollViewPinchGestureRecognizer *)arg1 ;
-(id)_activeTouchesForEvent:(id)arg1 ;
@end

