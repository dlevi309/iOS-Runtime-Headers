/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(long long)options;
-(void)setOptions:(long long)arg1 ;
-(long long)style;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(_UILegibilitySettings *)settings;
-(void)setSettings:(_UILegibilitySettings *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIImageView *)imageView;
-(void)_updateFilters;
-(UIImage *)shadowImage;
-(void)setShadowImage:(UIImage *)arg1 ;
-(id)initWithSettings:(id)arg1 strength:(double)arg2 image:(id)arg3 shadowImage:(id)arg4 ;
-(void)setImage:(id)arg1 shadowImage:(id)arg2 ;
-(BOOL)hidesImage;
-(void)setHidesImage:(BOOL)arg1 ;
-(void)setStrength:(double)arg1 ;
-(double)strength;
-(void)setImageView:(UIImageView *)arg1 ;
-(id)initWithStyle:(long long)arg1 image:(id)arg2 shadowImage:(id)arg3 ;
-(id)initWithSettings:(id)arg1 strength:(double)arg2 image:(id)arg3 shadowImage:(id)arg4 options:(long long)arg5 ;
-(void)setSettings:(id)arg1 image:(id)arg2 shadowImage:(id)arg3 ;
-(UIImageView *)shadowImageView;
-(id)drawingColor;
-(BOOL)usesColorFilters;
-(void)setShadowImageView:(UIImageView *)arg1 ;
-(void)updateImage;
-(BOOL)usesSecondaryColor;
-(id)initWithStyle:(long long)arg1 image:(id)arg2 ;
-(id)initWithSettings:(id)arg1 strength:(double)arg2 image:(id)arg3 ;
-(void)setStyle:(long long)arg1 image:(id)arg2 shadowImage:(id)arg3 ;
-(void)updateForChangedSettings:(id)arg1 ;
@end

