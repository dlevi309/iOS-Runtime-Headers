/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
*/

#import <UIKitCore/UILongPressGestureRecognizer.h>

@interface DTSForceGestureRecognizer : UILongPressGestureRecognizer {

	double _startTime;
	BOOL _hasSufficientForce;

}
-(void)reset;
-(void)setState:(long long)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
@end

