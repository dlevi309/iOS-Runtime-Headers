/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/


#import <NewsUI/NewsUI-Structs.h>
@class CAMediaTimingFunction, NUAnimationFactory;

@interface NUSlideViewAnimator : NSObject {

	BOOL _animating;
	double _duration;
	CAMediaTimingFunction* _mediaTimingFunction;
	double _translateBoundsPadding;
	NUAnimationFactory* _animationFactory;
	CGRect _bounds;

}

@property (assign,getter=isAnimating,nonatomic) BOOL animating;                        //@synthesize animating=_animating - In the implementation block
@property (nonatomic,retain) NUAnimationFactory * animationFactory;                    //@synthesize animationFactory=_animationFactory - In the implementation block
@property (assign,nonatomic) double duration;                                          //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) CAMediaTimingFunction * mediaTimingFunction;              //@synthesize mediaTimingFunction=_mediaTimingFunction - In the implementation block
@property (assign,nonatomic) CGRect bounds;                                            //@synthesize bounds=_bounds - In the implementation block
@property (assign,nonatomic) double translateBoundsPadding;                            //@synthesize translateBoundsPadding=_translateBoundsPadding - In the implementation block
-(CGRect)bounds;
-(void)setDuration:(double)arg1 ;
-(void)setAnimating:(BOOL)arg1 ;
-(NUAnimationFactory *)animationFactory;
-(void)setTranslateBoundsPadding:(double)arg1 ;
-(void)setMediaTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(id)initWithBounds:(CGRect)arg1 ;
-(void)setAnimationFactory:(NUAnimationFactory *)arg1 ;
-(double)translateBoundsPadding;
-(void)setBounds:(CGRect)arg1 ;
-(unsigned long long)animationOptionsForAnimationFactory:(id)arg1 ;
-(CAMediaTimingFunction *)mediaTimingFunction;
-(CGAffineTransform)toViewTransformForDirection:(unsigned long long)arg1 ;
-(double)duration;
-(void)translateFromView:(id)arg1 toView:(id)arg2 direction:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)isAnimating;
-(CGAffineTransform)fromViewTransformForDirection:(unsigned long long)arg1 ;
@end

