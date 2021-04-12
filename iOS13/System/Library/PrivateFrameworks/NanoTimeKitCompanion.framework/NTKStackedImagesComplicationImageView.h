/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIColor * color;                                                    //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) BOOL usesLegibility; 
@property (nonatomic,retain) UIColor * overrideColor;                                            //@synthesize overrideColor=_overrideColor - In the implementation block
@property (nonatomic,readonly) UIColor * contentColor; 
@property (nonatomic,retain) CLKImageProvider * imageProvider;                                   //@synthesize imageProvider=_imageProvider - In the implementation block
@property (assign,nonatomic) BOOL legibilityEnabled; 
@property (assign,nonatomic) double shadowBlur;                                                  //@synthesize shadowBlur=_shadowBlur - In the implementation block
@property (nonatomic,retain) UIColor * shadowColor;                                              //@synthesize shadowColor=_shadowColor - In the implementation block
@property (assign,nonatomic,__weak) id<CLKMonochromeFilterProvider> filterProvider;              //@synthesize filterProvider=_filterProvider - In the implementation block
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(UIColor *)shadowColor;
-(void)setShadowColor:(UIColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setForegroundColor:(UIColor *)arg1 ;
-(void)_updateAlpha;
-(void)setImageProvider:(CLKImageProvider *)arg1 ;
-(void)_updateColors;
-(UIColor *)contentColor;
-(UIColor *)foregroundColor;
-(void)_updateImages;
-(double)shadowBlur;
-(void)setShadowBlur:(double)arg1 ;
-(void)_updateShadow;
-(CLKImageProvider *)imageProvider;
-(UIColor *)overrideColor;
-(void)setOverrideColor:(UIColor *)arg1 ;
-(void)setLegibilityEnabled:(BOOL)arg1 ;
-(BOOL)_hasMultipartImages;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(id<CLKMonochromeFilterProvider>)filterProvider;
-(void)setFilterProvider:(id<CLKMonochromeFilterProvider>)arg1 ;
-(void)setUsesLegibility:(BOOL)arg1 ;
-(void)setMulticolorAlpha:(double)arg1 ;
-(BOOL)legibilityEnabled;
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

