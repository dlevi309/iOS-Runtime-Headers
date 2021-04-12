/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class _UILegibilitySettings, UIImage, UIImageView;

@interface _UILegibilityView : UIView {

	BOOL _hidesImage;
	_UILegibilitySettings* _settings;
	UIImage* _image;
	UIImage* _shadowImage;
	double _strength;
	UIImageView* _imageView;
	UIImageView* _shadowImageView;
	long long _options;

}

@property (nonatomic,retain) _UILegibilitySettings * settings;              //@synthesize settings=_settings - In the implementation block
@property (nonatomic,retain) UIImage * image;                               //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIImage * shadowImage;                         //@synthesize shadowImage=_shadowImage - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                       //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIImageView * shadowImageView;                 //@synthesize shadowImageView=_shadowImageView - In the implementation block
@property (assign,nonatomic) long long options;                             //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) long long style; 
@property (assign,nonatomic) double strength;                               //@synthesize strength=_strength - In the implementation block
@property (assign,nonatomic) BOOL hidesImage;                               //@synthesize hidesImage=_hidesImage - In the implementation block
@property (nonatomic,readonly) BOOL usesColorFilters; 
-(double)strength;
-(void)setStyle:(long long)arg1 image:(id)arg2 shadowImage:(id)arg3 ;
-(id)initWithSettings:(id)arg1 strength:(double)arg2 image:(id)arg3 shadowImage:(id)arg4 options:(long long)arg5 ;
-(void)setImage:(id)arg1 shadowImage:(id)arg2 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(BOOL)usesColorFilters;
-(BOOL)hidesImage;
-(id)initWithStyle:(long long)arg1 image:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 image:(id)arg2 shadowImage:(id)arg3 ;
-(BOOL)usesSecondaryColor;
-(void)setSettings:(id)arg1 image:(id)arg2 shadowImage:(id)arg3 ;
-(void)setStrength:(double)arg1 ;
-(void)updateForChangedSettings:(id)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(id)drawingColor;
-(UIImageView *)shadowImageView;
-(void)updateImage;
-(UIImage *)shadowImage;
-(void)setHidesImage:(BOOL)arg1 ;
-(void)_updateFilters;
-(id)initWithSettings:(id)arg1 strength:(double)arg2 image:(id)arg3 ;
-(void)setShadowImageView:(UIImageView *)arg1 ;
-(id)initWithSettings:(id)arg1 strength:(double)arg2 image:(id)arg3 shadowImage:(id)arg4 ;
-(void)setShadowImage:(UIImage *)arg1 ;
-(UIImageView *)imageView;
-(long long)options;
-(void)setOptions:(long long)arg1 ;
-(UIImage *)image;
-(void)setSettings:(_UILegibilitySettings *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(_UILegibilitySettings *)settings;
-(long long)style;
-(void)dealloc;
@end

