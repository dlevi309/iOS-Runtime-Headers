/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


#import <Silex/Silex-Structs.h>
@class SXComponentView, SXComponentAnimation;

@interface SXComponentAnimationHandler : NSObject {

	SXComponentView* _component;
	SXComponentAnimation* _animation;
	long long _state;
	double _factor;

}

@property (nonatomic,readonly) SXComponentView * component;                   //@synthesize component=_component - In the implementation block
@property (nonatomic,readonly) SXComponentAnimation * animation;              //@synthesize animation=_animation - In the implementation block
@property (assign,nonatomic) long long state;                                 //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) double factor;                                 //@synthesize factor=_factor - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(double)factor;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(SXComponentAnimation *)animation;
-(void)startAnimation;
-(SXComponentView *)component;
-(void)finishAnimation;
-(id)initWithComponent:(id)arg1 withAnimation:(id)arg2 ;
-(void)prepareAnimation;
-(void)updateAnimationWithFactor:(double)arg1 ;
-(BOOL)animationShouldRepeat;
-(id)componentViewToAnimate;
-(double)screenHeightStartOffset;
-(BOOL)shouldFinishAtEndOfScrollView;
-(double)factorForVisibileBounds:(CGRect)arg1 andAbsoluteComponentRect:(CGRect)arg2 ;
@end

