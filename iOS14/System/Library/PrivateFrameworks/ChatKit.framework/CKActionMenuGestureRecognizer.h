/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setNumberOfTouchesRequired:(unsigned long long)arg1 ;
-(CGPoint)velocityInView:(id)arg1 ;
-(void)setAllowableMovement:(double)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(CGPoint)_convertVelocitySample:(id)arg1 fromScreenCoordinatesToView:(id)arg2 ;
-(void)reset;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
@end

