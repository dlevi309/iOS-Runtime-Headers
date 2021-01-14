/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(const KeyboardScrollParameters*)parameters;
-(void)handleKeyEvent:(id)arg1 ;
-(Optional<WebKit::KeyboardScroll>)keyboardScrollForEvent:(id)arg1 ;
-(id)init;
-(void)willStartInteractiveScroll;
-(void)startDisplayLinkIfNeeded;
-(BOOL)scrollTriggeringKeyIsPressed;
-(void)stopAnimatedScroll;
-(void)stopDisplayLink;
-(void)invalidate;
-(BOOL)beginWithEvent:(id)arg1 ;
-(id)initWithScrollable:(id)arg1 ;
-(void)displayLinkFired:(id)arg1 ;
@end

