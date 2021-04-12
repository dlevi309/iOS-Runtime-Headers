/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>

@class _TVProgressBarView, UIColor, UIVisualEffectView, UIImageView;

@interface _TVProgressView : UIView {

	_TVProgressBarView* _progressBarView;
	BOOL _useMaterial;
	BOOL _shouldProgressBarUseRoundCorner;
	long long _style;
	double _cornerRadius;
	double _progress;
	UIColor* _progressTintColor;
	UIColor* _gradientStartColor;
	UIColor* _gradientEndColor;
	UIColor* _completeTintColor;
	UIVisualEffectView* _materialView;
	UIImageView* _shadowImageView;
	UIEdgeInsets _padding;

}

@property (nonatomic,retain) UIImageView * shadowImageView;                     //@synthesize shadowImageView=_shadowImageView - In the implementation block
@property (assign,nonatomic) long long style;                                   //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) double cornerRadius;                               //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) double progress;                                   //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) UIColor * progressTintColor;                       //@synthesize progressTintColor=_progressTintColor - In the implementation block
@property (nonatomic,retain) UIColor * gradientStartColor;                      //@synthesize gradientStartColor=_gradientStartColor - In the implementation block
@property (nonatomic,retain) UIColor * gradientEndColor;                        //@synthesize gradientEndColor=_gradientEndColor - In the implementation block
@property (nonatomic,retain) UIColor * completeTintColor;                       //@synthesize completeTintColor=_completeTintColor - In the implementation block
@property (assign,nonatomic) BOOL useMaterial;                                  //@synthesize useMaterial=_useMaterial - In the implementation block
@property (assign,nonatomic) BOOL shouldProgressBarUseRoundCorner;              //@synthesize shouldProgressBarUseRoundCorner=_shouldProgressBarUseRoundCorner - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                              //@synthesize padding=_padding - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * materialView;                 //@synthesize materialView=_materialView - In the implementation block
-(double)progress;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(void)setProgress:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(double)cornerRadius;
-(UIEdgeInsets)padding;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UIImageView *)shadowImageView;
-(void)setShadowImageView:(UIImageView *)arg1 ;
-(UIColor *)progressTintColor;
-(void)setProgressTintColor:(UIColor *)arg1 ;
-(void)setGradientEndColor:(UIColor *)arg1 ;
-(UIColor *)gradientEndColor;
-(UIVisualEffectView *)materialView;
-(void)setGradientStartColor:(UIColor *)arg1 ;
-(UIColor *)gradientStartColor;
-(void)setMaterialView:(UIVisualEffectView *)arg1 ;
-(void)setCompleteTintColor:(UIColor *)arg1 ;
-(void)setShouldProgressBarUseRoundCorner:(BOOL)arg1 ;
-(void)_updateForStyleChange;
-(id)_maskImageForProgressBar;
-(void)setUseMaterial:(BOOL)arg1 ;
-(void)_layoutMaterialView;
-(UIColor *)completeTintColor;
-(BOOL)useMaterial;
-(BOOL)shouldProgressBarUseRoundCorner;
@end

