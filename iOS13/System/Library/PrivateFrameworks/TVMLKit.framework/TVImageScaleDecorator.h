/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/TVImageDecorator.h>

@class UIColor;

@interface TVImageScaleDecorator : TVImageDecorator {

	BOOL _cornerContinuous;
	BOOL _preservesAlpha;
	long long _scaleMode;
	double _focusedSizeIncrease;
	UIColor* _bgColor;
	CGSize _scaleToSize;
	UIEdgeInsets _padding;
	TVCornerRadii _cornerRadii;

}

@property (assign,nonatomic) CGSize scaleToSize;                      //@synthesize scaleToSize=_scaleToSize - In the implementation block
@property (assign,nonatomic) long long scaleMode;                     //@synthesize scaleMode=_scaleMode - In the implementation block
@property (assign,nonatomic) double focusedSizeIncrease;              //@synthesize focusedSizeIncrease=_focusedSizeIncrease - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                    //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic) TVCornerRadii cornerRadii;               //@synthesize cornerRadii=_cornerRadii - In the implementation block
@property (assign,nonatomic) BOOL cornerContinuous;                   //@synthesize cornerContinuous=_cornerContinuous - In the implementation block
@property (nonatomic,copy) UIColor * bgColor;                         //@synthesize bgColor=_bgColor - In the implementation block
@property (assign,nonatomic) BOOL preservesAlpha;                     //@synthesize preservesAlpha=_preservesAlpha - In the implementation block
@property (assign,nonatomic) BOOL cropToFit; 
@property (assign,nonatomic) double upscaleAdjustment; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(void)setCornerRadii:(TVCornerRadii)arg1 ;
-(void)setFocusedSizeIncrease:(double)arg1 ;
-(double)focusedSizeIncrease;
-(UIEdgeInsets)padding;
-(UIColor *)bgColor;
-(void)setBgColor:(UIColor *)arg1 ;
-(long long)scaleMode;
-(void)setScaleMode:(long long)arg1 ;
-(TVCornerRadii)cornerRadii;
-(CGSize)expectedSize;
-(id)initWithScaleToSize:(CGSize)arg1 scaleMode:(long long)arg2 ;
-(CGSize)scaleToSize;
-(CGSize)_scaleToSizeAdjustedForUpscaling;
-(UIEdgeInsets)_paddingAdjustedForUpscaling;
-(BOOL)needsAlphaForImage:(id)arg1 ;
-(void)_applyCornerMaskForRect:(CGRect)arg1 toContext:(CGContextRef)arg2 ;
-(id)_imageFixedForRotation:(id)arg1 ;
-(BOOL)preservesAlpha;
-(double)_focusedSizeIncreaseFactor;
-(BOOL)cornerContinuous;
-(id)initWithScaleToSize:(CGSize)arg1 ;
-(id)initWithScaleToSize:(CGSize)arg1 cropToFit:(BOOL)arg2 ;
-(BOOL)cropToFit;
-(void)setCropToFit:(BOOL)arg1 ;
-(double)upscaleAdjustment;
-(void)setUpscaleAdjustment:(double)arg1 ;
-(id)decoratorIdentifier;
-(CGSize)loaderScaleToSize;
-(BOOL)loaderCropToFit;
-(id)decorate:(id)arg1 scaledWithSize:(CGSize)arg2 croppedToFit:(BOOL)arg3 ;
-(void)setScaleToSize:(CGSize)arg1 ;
-(void)setCornerContinuous:(BOOL)arg1 ;
-(void)setPreservesAlpha:(BOOL)arg1 ;
@end

