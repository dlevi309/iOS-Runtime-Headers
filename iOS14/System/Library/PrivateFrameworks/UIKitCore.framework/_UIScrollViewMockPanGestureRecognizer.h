/*
* Generated on Thursday, January 14, 2021 at 2:20:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGPoint)velocityInView:(id)arg1 ;
-(UIScrollViewPanGestureRecognizer *)gestureRecognizer;
-(CGPoint)translationInView:(id)arg1 ;
-(void)simulateTranslation:(CGPoint)arg1 velocity:(CGPoint)arg2 ;
-(CGPoint)locationInView:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)setTranslation:(CGPoint)arg1 inView:(id)arg2 ;
-(void)setState:(long long)arg1 ;
-(long long)state;
-(void)setGestureRecognizer:(UIScrollViewPanGestureRecognizer *)arg1 ;
@end

