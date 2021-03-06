/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIImageDataConsumer.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor, SKUIColorScheme;

@interface SKUIProductImageDataConsumer : SKUIImageDataConsumer <NSCopying> {

	UIColor* _backgroundColor;
	CGSize _iconSize;
	SKUIColorScheme* _colorScheme;

}

@property (nonatomic,readonly) CGSize iconSize;                          //@synthesize iconSize=_iconSize - In the implementation block
@property (nonatomic,readonly) CGSize imageSize; 
@property (nonatomic,retain) UIColor * backgroundColor;                  //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) SKUIColorScheme * colorScheme;              //@synthesize colorScheme=_colorScheme - In the implementation block
+(id)smartBannerConsumer;
+(id)giftComposePosterConsumer;
+(id)giftComposeLetterboxConsumer;
+(id)giftComposeConsumer;
+(id)giftResultConsumer;
+(id)giftThemePosterConsumer;
+(id)giftThemeLetterboxConsumer;
+(id)giftThemeConsumer;
+(id)lockupConsumerWithSize:(long long)arg1 itemKind:(long long)arg2 ;
+(id)consumerWithSize:(CGSize)arg1 ;
+(id)gridConsumer;
+(id)wishlistConsumer;
+(id)cardConsumer;
+(id)chartsConsumer;
+(id)updatesConsumer;
+(id)purchasedConsumer;
+(id)productPageConsumer;
+(id)swooshConsumer;
-(CGSize)imageSize;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(CGSize)iconSize;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SKUIColorScheme *)colorScheme;
-(id)imageForImage:(id)arg1 ;
-(void)setColorScheme:(SKUIColorScheme *)arg1 ;
-(id)imageForColor:(id)arg1 ;
-(id)imageForColor:(id)arg1 size:(CGSize)arg2 ;
@end

