/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)startAnimation;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(double)initialScale;
-(void)setInitialScale:(double)arg1 ;
-(void)finishAnimation;
-(id)initWithComponent:(id)arg1 withAnimation:(id)arg2 ;
-(double)initialAlpha;
-(void)prepareAnimation;
-(void)updateAnimationWithFactor:(double)arg1 ;
-(void)setInitialAlpha:(double)arg1 ;
@end

