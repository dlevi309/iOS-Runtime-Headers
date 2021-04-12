/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NTKUpNextBaseCellContentsLayerProvider.h>
#import <libobjc.A.dylib/CLKMonochromeComplicationView.h>

@protocol CLKMonochromeFilterProvider;
@class UIImageView, CALayer, NTKUpNextBaseCell, UIColor, CLKImageProvider, UIImage, NSString;

@interface NTKUpNextImageView : UIView <NTKUpNextBaseCellContentsLayerProvider, CLKMonochromeComplicationView> {

	UIImageView* _foregroundImageView;
	UIImageView* _backgroundImageView;
	CALayer* _foregroundAccentBackdrop;
	UIImageView* _foregroundAccentImageView;
	UIImageView* _overrideImageView;
	NTKUpNextBaseCell* _parentCell;
	id<CLKMonochromeFilterProvider> _filterProvider;
	UIColor* _fallbackTintColor;
	CLKImageProvider* _imageProvider;
	UIImage* _overrideImage;
	NSString* _compositingFilter;

}

@property (nonatomic,retain) UIColor * fallbackTintColor;                                        //@synthesize fallbackTintColor=_fallbackTintColor - In the implementation block
@property (nonatomic,readonly) CLKImageProvider * imageProvider;                                 //@synthesize imageProvider=_imageProvider - In the implementation block
@property (nonatomic,readonly) UIImage * overrideImage;                                          //@synthesize overrideImage=_overrideImage - In the implementation block
@property (nonatomic,retain) NSString * compositingFilter;                                       //@synthesize compositingFilter=_compositingFilter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<CLKMonochromeFilterProvider> filterProvider;              //@synthesize filterProvider=_filterProvider - In the implementation block
-(void)_updateColors;
-(void)setOverrideImage:(UIImage *)arg1 ;
-(CGSize)intrinsicContentSize;
-(UIImage *)overrideImage;
-(NSString *)compositingFilter;
-(void)layoutSubviews;
-(void)setImageProvider:(CLKImageProvider *)arg1 ;
-(id)contentsLayer;
-(CLKImageProvider *)imageProvider;
-(void)setCompositingFilter:(NSString *)arg1 ;
-(void)setContentMode:(long long)arg1 ;
-(void)setFilterProvider:(id<CLKMonochromeFilterProvider>)arg1 ;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(id<CLKMonochromeFilterProvider>)filterProvider;
-(BOOL)_hasMultipartImages;
-(CGRect)contentsLayerBoundsForLayout:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 parentCell:(id)arg2 ;
-(void)setFullColorImage:(id)arg1 tintableImageProvider:(id)arg2 ;
-(UIColor *)fallbackTintColor;
-(void)setFallbackTintColor:(UIColor *)arg1 ;
@end

