/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LocalAuthenticationPrivateUI.framework/LocalAuthenticationPrivateUI
*/

#import <LocalAuthenticationPrivateUI/LocalAuthenticationPrivateUI-Structs.h>
#import <QuartzCore/CALayer.h>

@class CAShapeLayer, UIColor;

@interface LAUICheckmarkLayer : CALayer {

	CAShapeLayer* _shape_layer;
	vector<CAShapeLayer *, std::__1::allocator<CAShapeLayer *> >* _transient_shape_layers;
	BOOL _animating;
	unsigned _animation_index;
	double _line_width;
	double _effective_line_width;
	vector<LAUI_CA_utilities::animation_completion_handler_container, std::__1::allocator<LAUI_CA_utilities::animation_completion_handler_container> >* _completions;
	BOOL _revealed;
	UIColor* _primary_color;
	double _line_width_scale;

}

@property (assign,nonatomic) double lineWidthScale;                          //@synthesize line_width_scale=_line_width_scale - In the implementation block
@property (nonatomic,copy,readonly) UIColor * primaryColor;                  //@synthesize primary_color=_primary_color - In the implementation block
@property (getter=isRevealed,nonatomic,readonly) BOOL revealed;              //@synthesize revealed=_revealed - In the implementation block
@property (nonatomic,readonly) CGSize aspectSize; 
-(BOOL)isRevealed;
-(void)layoutSublayers;
-(id)init;
-(void)setPrimaryColor:(UIColor *)arg1 ;
-(void)setLineWidthScale:(double)arg1 ;
-(void)setPrimaryColor:(id)arg1 animated:(BOOL)arg2 ;
-(CGSize)aspectSize;
-(UIColor *)primaryColor;
-(void)setRevealed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)dealloc;
-(CGSize)defaultSizeForCircleWithDiameter:(double)arg1 scale:(double)arg2 ;
-(void)setRevealed:(BOOL)arg1 animated:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(double)lineWidthScale;
-(void)_updateRevealedAnimated:(BOOL)arg1 ;
-(void)_executeCompletions:(BOOL)arg1 ;
-(void)_animationsDidResolve;
@end

