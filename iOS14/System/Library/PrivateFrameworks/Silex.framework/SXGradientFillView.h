/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXFillView.h>

@class SXLinearGradientFill, SXClippingView, SXGradientView;

@interface SXGradientFillView : SXFillView {

	SXLinearGradientFill* _gradientFill;
	SXClippingView* _clippingView;
	SXGradientView* _gradientView;

}

@property (nonatomic,readonly) SXLinearGradientFill * gradientFill;              //@synthesize gradientFill=_gradientFill - In the implementation block
@property (nonatomic,readonly) SXClippingView * clippingView;                    //@synthesize clippingView=_clippingView - In the implementation block
@property (nonatomic,readonly) SXGradientView * gradientView;                    //@synthesize gradientView=_gradientView - In the implementation block
-(CGRect)contentFrame;
-(void)setContentFrame:(CGRect)arg1 ;
-(SXClippingView *)clippingView;
-(void)layoutSubviews;
-(SXGradientView *)gradientView;
-(CGRect)fillFrameWithBoundingSize:(CGSize)arg1 ;
-(id)initWithGradientFill:(id)arg1 gradientFactory:(id)arg2 ;
-(SXLinearGradientFill *)gradientFill;
@end

