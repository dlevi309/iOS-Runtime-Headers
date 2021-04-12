/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(UIImage *)overrideImage;
-(CGSize)intrinsicContentSize;
-(void)setContentMode:(long long)arg1 ;
-(void)layoutSubviews;
-(void)setCompositingFilter:(NSString *)arg1 ;
-(NSString *)compositingFilter;
-(void)setImageProvider:(CLKImageProvider *)arg1 ;
-(void)_updateColors;
-(void)setOverrideImage:(UIImage *)arg1 ;
-(CLKImageProvider *)imageProvider;
-(id)contentsLayer;
-(void)setFallbackTintColor:(UIColor *)arg1 ;
-(BOOL)_hasMultipartImages;
-(UIColor *)fallbackTintColor;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(id<CLKMonochromeFilterProvider>)filterProvider;
-(void)setFilterProvider:(id<CLKMonochromeFilterProvider>)arg1 ;
-(CGRect)contentsLayerBoundsForLayout:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 parentCell:(id)arg2 ;
-(void)setFullColorImage:(id)arg1 tintableImageProvider:(id)arg2 ;
@end

