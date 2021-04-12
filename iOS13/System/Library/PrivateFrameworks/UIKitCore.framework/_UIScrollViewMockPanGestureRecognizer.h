/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIScrollViewPanGestureRecognizer;

@interface _UIScrollViewMockPanGestureRecognizer : NSObject {

	CGPoint _translation;
	CGPoint _velocity;
	long long _state;
	UIScrollViewPanGestureRecognizer* _gestureRecognizer;

}

@property (nonatomic,retain) UIScrollViewPanGestureRecognizer * gestureRecognizer;              //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (assign,nonatomic) long long state; 
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(CGPoint)locationInView:(id)arg1 ;
-(CGPoint)translationInView:(id)arg1 ;
-(CGPoint)velocityInView:(id)arg1 ;
-(void)setGestureRecognizer:(UIScrollViewPanGestureRecognizer *)arg1 ;
-(UIScrollViewPanGestureRecognizer *)gestureRecognizer;
-(void)setTranslation:(CGPoint)arg1 inView:(id)arg2 ;
-(void)simulateTranslation:(CGPoint)arg1 velocity:(CGPoint)arg2 ;
@end

