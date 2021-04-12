/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/


@protocol WKKeyboardScrollableInternal;
#import <WebKit/WebKit-Structs.h>
@interface WKKeyboardScrollingAnimator : NSObject {

	id<WKKeyboardScrollableInternal> _scrollable;
	RetainPtr<CADisplayLink>* _displayLink;
	Optional<WebKit::KeyboardScroll> _currentScroll;
	BOOL _scrollTriggeringKeyIsPressed;
	FloatSize _velocity;
	FloatPoint _idealPosition;
	FloatPoint _currentPosition;
	FloatPoint _idealPositionForMinimumTravel;

}
-(id)init;
-(void)invalidate;
-(const KeyboardScrollParameters*)parameters;
-(void)handleKeyEvent:(id)arg1 ;
-(void)displayLinkFired:(id)arg1 ;
-(void)stopAnimatedScroll;
-(void)stopDisplayLink;
-(Optional<WebKit::KeyboardScroll>)keyboardScrollForEvent:(id)arg1 ;
-(void)startDisplayLinkIfNeeded;
-(id)initWithScrollable:(id)arg1 ;
-(BOOL)beginWithEvent:(id)arg1 ;
-(BOOL)scrollTriggeringKeyIsPressed;
-(void)willStartInteractiveScroll;
@end

