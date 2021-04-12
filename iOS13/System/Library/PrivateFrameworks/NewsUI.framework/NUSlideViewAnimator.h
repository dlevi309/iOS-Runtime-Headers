/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(double)duration;
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(void)setDuration:(double)arg1 ;
-(BOOL)isAnimating;
-(NUAnimationFactory *)animationFactory;
-(void)setAnimating:(BOOL)arg1 ;
-(id)initWithBounds:(CGRect)arg1 ;
-(void)setMediaTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(CAMediaTimingFunction *)mediaTimingFunction;
-(void)setAnimationFactory:(NUAnimationFactory *)arg1 ;
-(CGAffineTransform)toViewTransformForDirection:(unsigned long long)arg1 ;
-(CGAffineTransform)fromViewTransformForDirection:(unsigned long long)arg1 ;
-(unsigned long long)animationOptionsForAnimationFactory:(id)arg1 ;
-(double)translateBoundsPadding;
-(void)translateFromView:(id)arg1 toView:(id)arg2 direction:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)setTranslateBoundsPadding:(double)arg1 ;
@end

