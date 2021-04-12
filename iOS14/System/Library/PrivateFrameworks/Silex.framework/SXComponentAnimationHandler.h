/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(SXComponentAnimation *)animation;
-(void)startAnimation;
-(double)factor;
-(SXComponentView *)component;
-(void)setState:(long long)arg1 ;
-(long long)state;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithComponent:(id)arg1 withAnimation:(id)arg2 ;
-(void)prepareAnimation;
-(void)updateAnimationWithFactor:(double)arg1 ;
-(void)finishAnimation;
-(BOOL)animationShouldRepeat;
-(id)componentViewToAnimate;
-(double)screenHeightStartOffset;
-(BOOL)shouldFinishAtEndOfScrollView;
-(double)factorForVisibileBounds:(CGRect)arg1 andAbsoluteComponentRect:(CGRect)arg2 ;
@end

