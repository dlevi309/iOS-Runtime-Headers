/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <UIKitCore/UIView.h>

@class UIView, SBElasticSliderView, MTMaterialShadowView;

@interface SBElasticSliderMaterialWrapperView : UIView {

	UIView* _sliderWrapperView;
	UIView* _maskView;
	SBElasticSliderView* _sliderView;
	MTMaterialShadowView* _baseMaterialView;
	long long _shadowMode;

}

@property (nonatomic,readonly) SBElasticSliderView * sliderView;                     //@synthesize sliderView=_sliderView - In the implementation block
@property (nonatomic,readonly) MTMaterialShadowView * baseMaterialView;              //@synthesize baseMaterialView=_baseMaterialView - In the implementation block
@property (nonatomic,readonly) UIView * maskView;                                    //@synthesize maskView=_maskView - In the implementation block
@property (assign,nonatomic) long long shadowMode;                                   //@synthesize shadowMode=_shadowMode - In the implementation block
-(id)init;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(SBElasticSliderView *)sliderView;
-(UIView *)maskView;
-(void)layoutSubviews;
-(void)_updateShadowMode;
-(MTMaterialShadowView *)baseMaterialView;
-(void)setShadowMode:(long long)arg1 ;
-(long long)shadowMode;
@end

