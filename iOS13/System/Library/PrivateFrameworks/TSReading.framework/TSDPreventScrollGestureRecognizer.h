/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <UIKitCore/UIGestureRecognizer.h>

@class TSDInteractiveCanvasController, UITouch;

@interface TSDPreventScrollGestureRecognizer : UIGestureRecognizer {

	TSDInteractiveCanvasController* mICC;
	UITouch* mTouch;
	UITouch* mSecondTouch;

}
-(void)reset;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithInteractiveCanvasController:(id)arg1 ;
@end

