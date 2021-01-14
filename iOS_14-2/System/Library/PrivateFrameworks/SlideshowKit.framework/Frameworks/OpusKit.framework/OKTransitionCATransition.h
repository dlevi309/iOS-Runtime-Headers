/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OKTransitionParallaxPush.h>

@class CATransition;

@interface OKTransitionCATransition : OKTransitionParallaxPush {

	CATransition* _transition;

}
-(id)animation;
-(void)dealloc;
-(void)_transitionInView:(id)arg1 fromSubview:(id)arg2 toSubview:(id)arg3 wasInteractive:(BOOL)arg4 duration:(double)arg5 doEaseIn:(BOOL)arg6 doEaseOut:(BOOL)arg7 isCompleting:(BOOL)arg8 wasCancelled:(BOOL)arg9 fromProgress:(double)arg10 completionHandler:(/*^block*/id)arg11 ;
-(void)prepareInView:(id)arg1 ;
@end

