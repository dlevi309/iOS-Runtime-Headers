/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SwiftUI.framework/SwiftUI
*/

#import <UIKitCore/UIGestureRecognizer.h>
#import <libobjc.A.dylib/_UIHoverEventRespondable.h>
#import <libobjc.A.dylib/_UITransformEventRespondable.h>

@interface SwiftUI.UIKitGestureRecognizer : UIGestureRecognizer <_UIHoverEventRespondable, _UITransformEventRespondable> {

	 eventBridge;
	 hoverSeed;
	 transformSeed;
	 initialScale;
	 initialAngle;

}
-(void)_hoverCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_hoverEntered:(id)arg1 withEvent:(id)arg2 ;
-(void)_hoverExited:(id)arg1 withEvent:(id)arg2 ;
-(void)_hoverMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)_transformChangedWithEvent:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(id)init;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(id)initWithCoder:(id)arg1 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
@end

