/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class VUIProgressBarView, UIColor, UIImageView, UIView;

@interface VUIProgressView : UIView {

	VUIProgressBarView* _progressBarView;
	BOOL _useVisualEffectForMaterial;
	BOOL _useMaterial;
	BOOL _shouldProgressBarUseRoundCorner;
	unsigned long long _style;
	double _cornerRadius;
	double _height;
	double _progress;
	UIColor* _progressTintColor;
	UIColor* _gradientStartColor;
	UIColor* _gradientEndColor;
	UIColor* _completeTintColor;
	UIImageView* _shadowImageView;
	UIView* _materialView;
	UIEdgeInsets _padding;

}

@property (nonatomic,retain) UIImageView * shadowImageView;                     //@synthesize shadowImageView=_shadowImageView - In the implementation block
@property (nonatomic,retain) UIView * materialView;                             //@synthesize materialView=_materialView - In the implementation block
@property (assign,nonatomic) unsigned long long style;                          //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) double cornerRadius;                               //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) double height;                                     //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) double progress;                                   //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) UIColor * progressTintColor;                       //@synthesize progressTintColor=_progressTintColor - In the implementation block
@property (nonatomic,retain) UIColor * gradientStartColor;                      //@synthesize gradientStartColor=_gradientStartColor - In the implementation block
@property (nonatomic,retain) UIColor * gradientEndColor;                        //@synthesize gradientEndColor=_gradientEndColor - In the implementation block
@property (nonatomic,retain) UIColor * completeTintColor;                       //@synthesize completeTintColor=_completeTintColor - In the implementation block
@property (assign,nonatomic) BOOL useVisualEffectForMaterial;                   //@synthesize useVisualEffectForMaterial=_useVisualEffectForMaterial - In the implementation block
@property (assign,nonatomic) BOOL useMaterial;                                  //@synthesize useMaterial=_useMaterial - In the implementation block
@property (assign,nonatomic) BOOL shouldProgressBarUseRoundCorner;              //@synthesize shouldProgressBarUseRoundCorner=_shouldProgressBarUseRoundCorner - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                              //@synthesize padding=_padding - In the implementation block
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHeight:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)progress;
-(UIImageView *)shadowImageView;
-(void)setShadowImageView:(UIImageView *)arg1 ;
-(double)height;
-(double)cornerRadius;
-(void)layoutSubviews;
-(UIView *)materialView;
-(UIColor *)progressTintColor;
-(void)setProgressTintColor:(UIColor *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setGradientStartColor:(UIColor *)arg1 ;
-(void)setGradientEndColor:(UIColor *)arg1 ;
-(UIColor *)gradientStartColor;
-(UIColor *)gradientEndColor;
-(void)setProgress:(double)arg1 ;
-(UIEdgeInsets)padding;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(void)setMaterialView:(UIView *)arg1 ;
-(void)setStyle:(unsigned long long)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(unsigned long long)style;
-(BOOL)shouldProgressBarUseRoundCorner;
-(void)setShouldProgressBarUseRoundCorner:(BOOL)arg1 ;
-(void)setCompleteTintColor:(UIColor *)arg1 ;
-(void)setUseVisualEffectForMaterial:(BOOL)arg1 ;
-(BOOL)useMaterial;
-(void)setUseMaterial:(BOOL)arg1 ;
-(void)_updateForStyleChange;
-(id)_maskImageForProgressBar;
-(void)_layoutMaterialView;
-(UIColor *)completeTintColor;
-(BOOL)useVisualEffectForMaterial;
@end

