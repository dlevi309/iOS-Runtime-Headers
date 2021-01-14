/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIImageDataConsumer.h>

@class IKColor, UITraitCollection, UIColor;

@interface SKUIStyledImageDataConsumer : SKUIImageDataConsumer {

	UIEdgeInsets _borderRadii;
	IKColor* _iKBackgroundColor;
	UITraitCollection* _startingTraitCollection;
	UIColor* _backgroundColor;
	UIColor* _borderColor;
	long long _imageContentMode;
	long long _imageTreatment;
	double _shadowRadius;
	UIColor* _shadowColor;
	CGSize _imageSize;
	CGSize _shadowOffset;
	UIEdgeInsets _borderWidths;
	UIEdgeInsets _borderMargins;
	UIEdgeInsets _imagePadding;

}

@property (nonatomic,retain) UIColor * backgroundColor;               //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * borderColor;                   //@synthesize borderColor=_borderColor - In the implementation block
@property (assign,nonatomic) UIEdgeInsets borderWidths;               //@synthesize borderWidths=_borderWidths - In the implementation block
@property (assign,nonatomic) UIEdgeInsets borderMargins;              //@synthesize borderMargins=_borderMargins - In the implementation block
@property (assign,nonatomic) long long imageContentMode;              //@synthesize imageContentMode=_imageContentMode - In the implementation block
@property (assign,nonatomic) UIEdgeInsets imagePadding;               //@synthesize imagePadding=_imagePadding - In the implementation block
@property (assign,nonatomic) long long imageTreatment;                //@synthesize imageTreatment=_imageTreatment - In the implementation block
@property (assign,nonatomic) CGSize imageSize;                        //@synthesize imageSize=_imageSize - In the implementation block
@property (assign,nonatomic) CGSize shadowOffset;                     //@synthesize shadowOffset=_shadowOffset - In the implementation block
@property (assign,nonatomic) double shadowRadius;                     //@synthesize shadowRadius=_shadowRadius - In the implementation block
@property (nonatomic,retain) UIColor * shadowColor;                   //@synthesize shadowColor=_shadowColor - In the implementation block
+(id)safariBannerIconConsumer;
+(id)safariBannerProductImageConsumer;
+(id)shareSheetIconConsumer;
+(id)roomIconConsumer;
+(id)giftComposeProductImageConsumer;
+(id)giftResultIconConsumer;
+(id)giftResultProductImageConsumer;
+(id)giftThemeIconConsumer;
+(id)giftThemeProductImageConsumer;
+(id)lockupIconConsumerWithSize:(long long)arg1 ;
+(id)appIconConsumerWithSize:(CGSize)arg1 ;
+(id)brickConsumerWithBrickSize:(CGSize)arg1 ;
+(id)productImageConsumerWithSize:(CGSize)arg1 ;
+(id)roomProductImageConsumer;
+(id)applePackIconConsumer;
+(id)brickConsumer;
+(id)cardIconConsumer;
+(id)cardProductImageConsumer;
+(id)categoryIconConsumer;
+(id)gridIconConsumer;
+(id)listIconConsumer;
+(id)lockupProductImageConsumerWithSize:(long long)arg1 ;
+(id)mixedTopChartsNewsstandConsumer;
+(id)newsstandRoomNewsstandConsumer;
+(id)newsstandSwooshNewsstandConsumer;
+(id)parentBundleIconConsumer;
+(id)productPageProductImageConsumer;
+(id)purchasedIconConsumer;
+(id)purchasedProductImageConsumer;
+(id)swooshNewsstandConsumer;
+(id)topChartsIconConsumer;
+(id)topChartsNewsstandConsumer;
+(id)updatesIconConsumer;
+(id)updatesProductImageConsumer;
+(id)wishlistIconConsumer;
+(id)wishlistProductImageConsumer;
+(id)manageMessagesConsumer;
+(id)categoriesMessagesConsumer;
+(id)purchasedMessagesConsumer;
+(BOOL)isImageCompressionEnabled;
-(void)setShadowOffset:(CGSize)arg1 ;
-(CGSize)imageSize;
-(void)setShadowColor:(UIColor *)arg1 ;
-(double)shadowRadius;
-(id)init;
-(void)setShadowRadius:(double)arg1 ;
-(UIColor *)shadowColor;
-(UIColor *)borderColor;
-(CGSize)shadowOffset;
-(void)setImageContentMode:(long long)arg1 ;
-(long long)imageContentMode;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)setImageSize:(CGSize)arg1 ;
-(void)setBorderColor:(UIColor *)arg1 ;
-(id)initWithViewElement:(id)arg1 ;
-(id)imageForImage:(id)arg1 ;
-(void)setBorderWidths:(UIEdgeInsets)arg1 ;
-(BOOL)isImagePlaceholderAvailable;
-(id)imagePlaceholderForColor:(id)arg1 ;
-(long long)imageTreatment;
-(void)setImageTreatment:(long long)arg1 ;
-(id)imageForColor:(id)arg1 ;
-(void)setImagePadding:(UIEdgeInsets)arg1 ;
-(id)imageForColor:(id)arg1 size:(CGSize)arg2 ;
-(id)initWithSize:(CGSize)arg1 treatment:(long long)arg2 ;
-(UIEdgeInsets)borderWidths;
-(UIEdgeInsets)borderMargins;
-(id)_defaultPlaceholderColor;
-(id)_outputImageWithInputSize:(CGSize)arg1 outputSize:(CGSize)arg2 drawBlock:(/*^block*/id)arg3 ;
-(/*^block*/id)_placeholderCornerPathBlock;
-(id)_arcRoundedImageWithBounds:(CGRect)arg1 contentRect:(CGRect)arg2 cornerRadius:(double)arg3 drawBlock:(/*^block*/id)arg4 ;
-(id)_scaledImageWithBounds:(CGRect)arg1 contentRect:(CGRect)arg2 drawBlock:(/*^block*/id)arg3 ;
-(id)_leftToRightGradient:(CGRect)arg1 contentRect:(CGRect)arg2 drawBlock:(/*^block*/id)arg3 ;
-(id)_radialBlurImageWithBounds:(CGRect)arg1 contentRect:(CGRect)arg2 drawBlock:(/*^block*/id)arg3 ;
-(id)_dynamicUberImageWithBounds:(CGRect)arg1 inputSize:(CGSize)arg2 drawBlock:(/*^block*/id)arg3 ;
-(id)_uberBannerImageWithBounds:(CGRect)arg1 inputSize:(CGSize)arg2 drawBlock:(/*^block*/id)arg3 ;
-(id)_roundedBorderWithBounds:(CGRect)arg1 contentRect:(CGRect)arg2 drawBlock:(/*^block*/id)arg3 ;
-(id)_imageWithSize:(CGSize)arg1 isOpaque:(BOOL)arg2 drawBlock:(/*^block*/id)arg3 ;
-(BOOL)_backgroundIsOpaque;
-(void)_drawBordersWithImageRect:(CGRect)arg1 bounds:(CGRect)arg2 ;
-(id)_uberImageWithBounds:(CGRect)arg1 inputSize:(CGSize)arg2 backgroundColor:(id)arg3 drawBlock:(/*^block*/id)arg4 ;
-(void)setBorderMargins:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)imagePadding;
@end
