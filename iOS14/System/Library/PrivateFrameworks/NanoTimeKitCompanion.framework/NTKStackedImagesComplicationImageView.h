/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NTKComplicationImageView.h>
#import <libobjc.A.dylib/NTKLegibilityView.h>
#import <libobjc.A.dylib/CLKMonochromeComplicationView.h>

@protocol CLKMonochromeFilterProvider;
@class UIColor, CLKDevice, NTKColoringImageView, UIImageView, UIImage, CLKImageProvider, NSString;

@interface NTKStackedImagesComplicationImageView : UIView <NTKComplicationImageView, NTKLegibilityView, CLKMonochromeComplicationView> {

	CLKDevice* _device;
	NTKColoringImageView* _foregroundImageView;
	NTKColoringImageView* _backgroundImageView;
	UIImageView* _foregroundAccentImageView;
	NTKColoringImageView* _monochromeImageView;
	UIImageView* _monochromeShadowView;
	UIImageView* _multipartShadowView;
	UIImage* _multipartShadowViewSource;
	BOOL _isUsingLegibility;
	BOOL _isShadowImagesStale;
	double _shadowBlur;
	UIColor* _shadowColor;
	double _imageScaleFactor;
	CLKImageProvider* _imageProvider;
	id<CLKMonochromeFilterProvider> _filterProvider;
	UIColor* _color;
	UIColor* _overrideColor;
	double _multicolorAlpha;
	UIColor* _foregroundColor;

}

@property (assign,nonatomic) double multicolorAlpha;                                             //@synthesize multicolorAlpha=_multicolorAlpha - In the implementation block
@property (nonatomic,retain) UIColor * foregroundColor;                                          //@synthesize foregroundColor=_foregroundColor - In the implementation block
@property (nonatomic,retain) CLKImageProvider * imageProvider;                                   //@synthesize imageProvider=_imageProvider - In the implementation block
@property (nonatomic,retain) UIColor * color;                                                    //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) BOOL usesLegibility; 
@property (nonatomic,retain) UIColor * overrideColor;                                            //@synthesize overrideColor=_overrideColor - In the implementation block
@property (nonatomic,readonly) UIColor * contentColor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL legibilityEnabled; 
@property (assign,nonatomic) double shadowBlur;                                                  //@synthesize shadowBlur=_shadowBlur - In the implementation block
@property (nonatomic,retain) UIColor * shadowColor;                                              //@synthesize shadowColor=_shadowColor - In the implementation block
@property (assign,nonatomic,__weak) id<CLKMonochromeFilterProvider> filterProvider;              //@synthesize filterProvider=_filterProvider - In the implementation block
-(UIColor *)contentColor;
-(void)setShadowColor:(UIColor *)arg1 ;
-(void)_updateColors;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setForegroundColor:(UIColor *)arg1 ;
-(UIColor *)foregroundColor;
-(UIColor *)shadowColor;
-(UIColor *)color;
-(void)_updateAlpha;
-(void)_updateShadow;
-(void)layoutSubviews;
-(void)setColor:(UIColor *)arg1 ;
-(double)shadowBlur;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setImageProvider:(CLKImageProvider *)arg1 ;
-(void)_updateImages;
-(CLKImageProvider *)imageProvider;
-(UIColor *)overrideColor;
-(void)setOverrideColor:(UIColor *)arg1 ;
-(void)setShadowBlur:(double)arg1 ;
-(void)setFilterProvider:(id<CLKMonochromeFilterProvider>)arg1 ;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(void)setUsesLegibility:(BOOL)arg1 ;
-(id<CLKMonochromeFilterProvider>)filterProvider;
-(BOOL)_hasMultipartImages;
-(void)setMulticolorAlpha:(double)arg1 ;
-(BOOL)legibilityEnabled;
-(void)setLegibilityEnabled:(BOOL)arg1 ;
-(BOOL)usesLegibility;
-(double)multicolorAlpha;
-(void)_enumerateMultipartImageViewsWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateImageViewsWithBlock:(/*^block*/id)arg1 ;
-(BOOL)_hasShadowViews;
-(BOOL)_shouldIgnoreTwoPieceImage;
-(void)_updateShadowViewImages;
-(void)_loadImageViewsIfNecessary;
-(void)_updateImageSubviewsMaxSize;
-(BOOL)hasMonochromeImage;
@end

