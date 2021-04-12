/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXComponentAnimationHandler.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class NSString;

@interface SXScaleComponentAnimationHandler : SXComponentAnimationHandler <CAAnimationDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)startAnimation;
-(void)prepareAnimation;
-(void)updateAnimationWithFactor:(double)arg1 ;
-(void)finishAnimation;
@end

