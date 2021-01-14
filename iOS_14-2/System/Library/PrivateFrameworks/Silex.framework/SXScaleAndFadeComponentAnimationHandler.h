/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXComponentAnimationHandler.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class NSString;

@interface SXScaleAndFadeComponentAnimationHandler : SXComponentAnimationHandler <CAAnimationDelegate> {

	double _initialAlpha;
	double _initialScale;

}

@property (assign,nonatomic) double initialAlpha;                   //@synthesize initialAlpha=_initialAlpha - In the implementation block
@property (assign,nonatomic) double initialScale;                   //@synthesize initialScale=_initialScale - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)startAnimation;
-(void)setInitialScale:(double)arg1 ;
-(double)initialScale;
-(id)initWithComponent:(id)arg1 withAnimation:(id)arg2 ;
-(double)initialAlpha;
-(void)prepareAnimation;
-(void)updateAnimationWithFactor:(double)arg1 ;
-(void)finishAnimation;
-(void)setInitialAlpha:(double)arg1 ;
@end

