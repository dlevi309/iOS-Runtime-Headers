/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)layoutSubviews;
-(void)setContentFrame:(CGRect)arg1 ;
-(SXGradientView *)gradientView;
-(SXClippingView *)clippingView;
-(CGRect)fillFrameWithBoundingSize:(CGSize)arg1 ;
-(id)initWithGradientFill:(id)arg1 gradientFactory:(id)arg2 ;
-(SXLinearGradientFill *)gradientFill;
@end

