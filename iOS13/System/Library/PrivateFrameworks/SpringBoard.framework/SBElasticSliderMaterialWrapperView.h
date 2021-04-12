/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)layoutSubviews;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(UIView *)maskView;
-(SBElasticSliderView *)sliderView;
-(long long)shadowMode;
-(void)setShadowMode:(long long)arg1 ;
-(void)_updateShadowMode;
-(MTMaterialShadowView *)baseMaterialView;
@end

