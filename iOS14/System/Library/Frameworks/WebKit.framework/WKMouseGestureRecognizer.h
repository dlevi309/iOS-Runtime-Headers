/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKitCore/UIHoverGestureRecognizer.h>

@interface WKMouseGestureRecognizer : UIHoverGestureRecognizer {

	RetainPtr<UIEvent>* _currentHoverEvent;
	RetainPtr<UITouch>* _currentTouch;
	BOOL _touching;
	unique_ptr<WebKit::NativeWebMouseEvent, std::__1::default_delete<WebKit::NativeWebMouseEvent> >* _lastEvent;
	Optional<CGPoint> _lastLocation;
	Optional<long> _pressedButtonMask;

}
-(void)_hoverCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_hoverEntered:(id)arg1 withEvent:(id)arg2 ;
-(void)_hoverExited:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)_shouldReceiveTouch:(id)arg1 forEvent:(id)arg2 recognizerView:(id)arg3 ;
-(void)_hoverMoved:(id)arg1 withEvent:(id)arg2 ;
-(Optional<CGPoint>)lastMouseLocation;
-(BOOL)_shouldReceivePress:(id)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)setEnabled:(BOOL)arg1 ;
-(NativeWebMouseEvent*)lastMouseEvent;
-(id)mouseTouch;
-(unique_ptr<WebKit::NativeWebMouseEvent, std::__1::default_delete<WebKit::NativeWebMouseEvent> >*)createMouseEventWithType:(int)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(CGPoint)locationInView:(id)arg1 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
@end

