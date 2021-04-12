/*
* Generated on Thursday, January 14, 2021 at 2:28:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OKTransition.h>

@class OFUIView, UIColor;

@interface OKTransitionFadeThruColor : OKTransition {

	OFUIView* _colorView;
	UIColor* _color;

}

@property (retain) UIColor * color;              //@synthesize color=_color - In the implementation block
+(id)supportedSettings;
-(id)initWithSettings:(id)arg1 ;
-(UIColor *)color;
-(void)setSettingColor:(id)arg1 ;
-(void)setColor:(UIColor *)arg1 ;
-(void)dealloc;
-(void)makeCurrentTransitionInteractiveWithContext:(id)arg1 andProgress:(double)arg2 ;
-(void)startInteractiveTransitionWithContext:(id)arg1 ;
-(void)updateInteractiveTransitionWithContext:(id)arg1 andProgress:(double)arg2 ;
-(void)_transitionInView:(id)arg1 fromSubview:(id)arg2 toSubview:(id)arg3 wasInteractive:(BOOL)arg4 duration:(double)arg5 doEaseIn:(BOOL)arg6 doEaseOut:(BOOL)arg7 isCompleting:(BOOL)arg8 wasCancelled:(BOOL)arg9 fromProgress:(double)arg10 completionHandler:(/*^block*/id)arg11 ;
@end

