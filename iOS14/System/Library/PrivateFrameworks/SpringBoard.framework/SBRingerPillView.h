/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>

@class MTMaterialShadowView, MTVisualStylingProvider, BSUICAPackageView, UILabel, SBRingerVolumeSliderView, UIColor, NSArray;

@interface SBRingerPillView : UIView {

	float _sliderValue;
	unsigned long long _state;
	MTMaterialShadowView* _materialView;
	MTVisualStylingProvider* _stylingProvider;
	BSUICAPackageView* _glyphView;
	UILabel* _silentModeLabel;
	UILabel* _ringerLabel;
	UILabel* _onLabel;
	UILabel* _offLabel;
	SBRingerVolumeSliderView* _slider;
	UIColor* _glyphTintColor;
	NSArray* _glyphTintBackgroundLayers;
	NSArray* _glyphTintShapeLayers;

}

@property (nonatomic,retain) MTMaterialShadowView * materialView;                    //@synthesize materialView=_materialView - In the implementation block
@property (nonatomic,retain) MTVisualStylingProvider * stylingProvider;              //@synthesize stylingProvider=_stylingProvider - In the implementation block
@property (nonatomic,retain) BSUICAPackageView * glyphView;                          //@synthesize glyphView=_glyphView - In the implementation block
@property (nonatomic,retain) UILabel * silentModeLabel;                              //@synthesize silentModeLabel=_silentModeLabel - In the implementation block
@property (nonatomic,retain) UILabel * ringerLabel;                                  //@synthesize ringerLabel=_ringerLabel - In the implementation block
@property (nonatomic,retain) UILabel * onLabel;                                      //@synthesize onLabel=_onLabel - In the implementation block
@property (nonatomic,retain) UILabel * offLabel;                                     //@synthesize offLabel=_offLabel - In the implementation block
@property (nonatomic,retain) SBRingerVolumeSliderView * slider;                      //@synthesize slider=_slider - In the implementation block
@property (nonatomic,retain) UIColor * glyphTintColor;                               //@synthesize glyphTintColor=_glyphTintColor - In the implementation block
@property (nonatomic,copy) NSArray * glyphTintBackgroundLayers;                      //@synthesize glyphTintBackgroundLayers=_glyphTintBackgroundLayers - In the implementation block
@property (nonatomic,copy) NSArray * glyphTintShapeLayers;                           //@synthesize glyphTintShapeLayers=_glyphTintShapeLayers - In the implementation block
@property (assign,nonatomic) unsigned long long state;                               //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) float sliderValue;                                      //@synthesize sliderValue=_sliderValue - In the implementation block
-(SBRingerVolumeSliderView *)slider;
-(id)init;
-(void)setGlyphTintColor:(UIColor *)arg1 ;
-(UIColor *)glyphTintColor;
-(void)setGlyphView:(BSUICAPackageView *)arg1 ;
-(BSUICAPackageView *)glyphView;
-(void)layoutSubviews;
-(MTMaterialShadowView *)materialView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setSlider:(SBRingerVolumeSliderView *)arg1 ;
-(UILabel *)onLabel;
-(void)setState:(unsigned long long)arg1 ;
-(unsigned long long)state;
-(void)setMaterialView:(MTMaterialShadowView *)arg1 ;
-(float)sliderValue;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setSliderValue:(float)arg1 ;
-(UILabel *)offLabel;
-(void)setStylingProvider:(MTVisualStylingProvider *)arg1 ;
-(void)_setGlyphTintColor:(id)arg1 animationDuration:(double)arg2 ;
-(id)_visibleViewsForState:(unsigned long long)arg1 ;
-(void)_updateGlyphWithStaticColor:(id)arg1 animationSettings:(id)arg2 ;
-(MTVisualStylingProvider *)stylingProvider;
-(UILabel *)silentModeLabel;
-(void)setSilentModeLabel:(UILabel *)arg1 ;
-(UILabel *)ringerLabel;
-(void)setRingerLabel:(UILabel *)arg1 ;
-(void)setOnLabel:(UILabel *)arg1 ;
-(void)setOffLabel:(UILabel *)arg1 ;
-(NSArray *)glyphTintBackgroundLayers;
-(void)setGlyphTintBackgroundLayers:(NSArray *)arg1 ;
-(NSArray *)glyphTintShapeLayers;
-(void)setGlyphTintShapeLayers:(NSArray *)arg1 ;
@end

