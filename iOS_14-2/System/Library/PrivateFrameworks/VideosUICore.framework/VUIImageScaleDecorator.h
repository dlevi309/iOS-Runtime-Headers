/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
*/

#import <VideosUICore/VideosUICore-Structs.h>
#import <VideosUICore/VUIImageDecorator.h>

@class UIColor;

@interface VUIImageScaleDecorator : VUIImageDecorator {

	BOOL _centerGrowth;
	BOOL _cornerContinuous;
	BOOL _preservesAlpha;
	long long _scaleMode;
	double _focusedSizeIncrease;
	UIColor* _bgColor;
	CGSize _scaleToSize;
	UIEdgeInsets _padding;
	VUICornerRadii _cornerRadii;

}

@property (assign,nonatomic) CGSize scaleToSize;                      //@synthesize scaleToSize=_scaleToSize - In the implementation block
@property (assign,nonatomic) long long scaleMode;                     //@synthesize scaleMode=_scaleMode - In the implementation block
@property (assign,nonatomic) BOOL centerGrowth;                       //@synthesize centerGrowth=_centerGrowth - In the implementation block
@property (assign,nonatomic) double focusedSizeIncrease;              //@synthesize focusedSizeIncrease=_focusedSizeIncrease - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                    //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic) VUICornerRadii cornerRadii;              //@synthesize cornerRadii=_cornerRadii - In the implementation block
@property (assign,nonatomic) BOOL cornerContinuous;                   //@synthesize cornerContinuous=_cornerContinuous - In the implementation block
@property (nonatomic,copy) UIColor * bgColor;                         //@synthesize bgColor=_bgColor - In the implementation block
@property (assign,nonatomic) BOOL preservesAlpha;                     //@synthesize preservesAlpha=_preservesAlpha - In the implementation block
@property (assign,nonatomic) BOOL cropToFit; 
@property (assign,nonatomic) double upscaleAdjustment; 
-(id)init;
-(void)setBgColor:(UIColor *)arg1 ;
-(UIColor *)bgColor;
-(long long)scaleMode;
-(unsigned long long)hash;
-(void)setCornerRadii:(VUICornerRadii)arg1 ;
-(VUICornerRadii)cornerRadii;
-(UIEdgeInsets)padding;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(void)setScaleMode:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setFocusedSizeIncrease:(double)arg1 ;
-(double)focusedSizeIncrease;
-(void)setScaleToSize:(CGSize)arg1 ;
-(void)setUpscaleAdjustment:(double)arg1 ;
-(double)upscaleAdjustment;
-(id)initWithScaleToSize:(CGSize)arg1 ;
-(id)decoratorIdentifier;
-(BOOL)needsAlphaForImage:(id)arg1 ;
-(id)initWithScaleToSize:(CGSize)arg1 scaleMode:(long long)arg2 ;
-(CGSize)scaleToSize;
-(BOOL)cropToFit;
-(void)setCropToFit:(BOOL)arg1 ;
-(void)setCenterGrowth:(BOOL)arg1 ;
-(CGSize)loaderScaleToSize;
-(BOOL)centerGrowth;
-(CGSize)expectedSize;
-(CGSize)_scaleToSizeAdjustedForUpscaling;
-(UIEdgeInsets)_paddingAdjustedForUpscaling;
-(void)_applyCornerMaskForRect:(CGRect)arg1 toContext:(CGContextRef)arg2 ;
-(id)_imageFixedForRotation:(id)arg1 ;
-(BOOL)preservesAlpha;
-(double)_focusedSizeIncreaseFactor;
-(BOOL)cornerContinuous;
-(id)initWithScaleToSize:(CGSize)arg1 cropToFit:(BOOL)arg2 ;
-(BOOL)loaderCropToFit;
-(id)decorate:(id)arg1 scaledWithSize:(CGSize)arg2 croppedToFit:(BOOL)arg3 ;
-(void)setCornerContinuous:(BOOL)arg1 ;
-(void)setPreservesAlpha:(BOOL)arg1 ;
@end

