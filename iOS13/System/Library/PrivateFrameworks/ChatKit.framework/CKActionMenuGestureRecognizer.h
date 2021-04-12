/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UILongPressGestureRecognizer.h>

@class CKActionMenuGestureVelocitySample;

@interface CKActionMenuGestureRecognizer : UILongPressGestureRecognizer {

	CKActionMenuGestureVelocitySample* _velocitySample;
	CKActionMenuGestureVelocitySample* _previousVelocitySample;
	double _lastTouchTime;
	CGPoint _lastScreenLocation;

}
+(id)actionMenuGestureRecognizer;
-(void)reset;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)setAllowableMovement:(double)arg1 ;
-(CGPoint)velocityInView:(id)arg1 ;
-(void)setNumberOfTouchesRequired:(unsigned long long)arg1 ;
-(CGPoint)_convertVelocitySample:(id)arg1 fromScreenCoordinatesToView:(id)arg2 ;
@end

