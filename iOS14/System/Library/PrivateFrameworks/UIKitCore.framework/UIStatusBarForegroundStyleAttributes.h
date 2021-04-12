/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSString, UIColor;

@interface UIStatusBarForegroundStyleAttributes : NSObject <NSCopying> {

	double _height;
	long long _legibilityStyle;
	long long _idiom;
	NSMutableDictionary* _cachedFonts;
	BOOL _isTintColorBlack;
	BOOL _hasBusyBackground;
	NSString* _cachedUniqueIdentifier;
	BOOL _canShowBreadcrumbs;
	UIColor* _tintColor;

}

@property (assign,nonatomic) BOOL canShowBreadcrumbs;                   //@synthesize canShowBreadcrumbs=_canShowBreadcrumbs - In the implementation block
@property (nonatomic,retain,readonly) UIColor * tintColor;              //@synthesize tintColor=_tintColor - In the implementation block
-(id)imageWithText:(id)arg1 ofItemType:(int)arg2 forWidth:(double)arg3 lineBreakMode:(long long)arg4 letterSpacing:(double)arg5 textAlignment:(long long)arg6 style:(long long)arg7 withLegibilityStyle:(long long)arg8 legibilityStrength:(double)arg9 shouldCache:(BOOL)arg10 ;
-(void)drawText:(id)arg1 forWidth:(double)arg2 lineBreakMode:(long long)arg3 letterSpacing:(double)arg4 textAlignment:(long long)arg5 style:(long long)arg6 textSize:(CGSize)arg7 textHeight:(double)arg8 ;
-(id)cachedImageWithText:(id)arg1 forWidth:(double)arg2 lineBreakMode:(long long)arg3 letterSpacing:(double)arg4 textAlignment:(long long)arg5 style:(long long)arg6 itemType:(int)arg7 ;
-(id)shadowImageForImage:(id)arg1 withIdentifier:(id)arg2 forStyle:(long long)arg3 withStrength:(double)arg4 inTempGroup:(id)arg5 shouldCache:(BOOL)arg6 ;
-(id)imageWithText:(id)arg1 ofItemType:(int)arg2 forWidth:(double)arg3 lineBreakMode:(long long)arg4 letterSpacing:(double)arg5 textAlignment:(long long)arg6 style:(long long)arg7 withLegibilityStyle:(long long)arg8 legibilityStrength:(double)arg9 ;
-(id)imageNamed:(id)arg1 ;
-(double)scale;
-(id)uniqueIdentifier;
-(double)height;
-(long long)idiom;
-(double)middlePadding;
-(id)generateUniqueIdentifier;
-(double)standardPadding;
-(id)textForNetworkType:(int)arg1 ;
-(BOOL)usesVerticalLayout;
-(double)leftEdgePadding;
-(double)rightEdgePadding;
-(UIEdgeInsets)edgeInsetsForBatteryInsides;
-(id)makeTextFontForStyle:(long long)arg1 ;
-(UIEdgeInsets)edgeInsetsForBluetoothBatteryInsides;
-(id)textColorForStyle:(long long)arg1 ;
-(double)shadowPadding;
-(long long)activityIndicatorStyleWithSyncActivity:(BOOL)arg1 ;
-(double)textOffsetForStyle:(long long)arg1 ;
-(id)initWithHeight:(double)arg1 legibilityStyle:(long long)arg2 tintColor:(id)arg3 hasBusyBackground:(BOOL)arg4 idiom:(long long)arg5 ;
-(id)_batteryColorForCapacity:(int)arg1 lowCapacity:(int)arg2 style:(unsigned long long)arg3 usingTintColor:(BOOL)arg4 ;
-(void)drawBatteryInsidesWithSize:(CGSize)arg1 capacity:(int)arg2 style:(unsigned long long)arg3 usingTintColor:(BOOL)arg4 ;
-(id)batteryColorForCapacity:(int)arg1 style:(unsigned long long)arg2 usingTintColor:(BOOL)arg3 ;
-(double)_roundDimension:(double)arg1 ;
-(id)bluetoothBatteryColorForCapacity:(double)arg1 usingTintColor:(BOOL)arg2 ;
-(id)textFontForStyle:(long long)arg1 ;
-(void)_drawText:(id)arg1 inRect:(CGRect)arg2 withFont:(id)arg3 lineBreakMode:(long long)arg4 letterSpacing:(double)arg5 textAlignment:(long long)arg6 ;
-(void)drawTextInRect:(CGRect)arg1 withColor:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(id)expandedNameForImageName:(id)arg1 ;
-(id)_cacheQueue_cachedImageNamed:(id)arg1 inTempGroup:(id)arg2 groupFullName:(id)arg3 ;
-(void)cacheImage:(id)arg1 named:(id)arg2 inTempGroup:(id)arg3 ;
-(id)_cachedImageNamed:(id)arg1 ;
-(void)_cacheQueue_cacheImage:(id)arg1 named:(id)arg2 inTempGroup:(id)arg3 groupFullName:(id)arg4 tintColor:(id)arg5 ;
-(id)uncachedImageNamed:(id)arg1 ;
-(void)_cacheImage:(id)arg1 named:(id)arg2 ;
-(id)untintedImageNamed:(id)arg1 ;
-(id)shadowImageForImage:(id)arg1 withIdentifier:(id)arg2 forStyle:(long long)arg3 withStrength:(double)arg4 ;
-(long long)legibilityStyle;
-(id)shadowImageForImage:(id)arg1 withIdentifier:(id)arg2 forStyle:(long long)arg3 withStrength:(double)arg4 inTempGroup:(id)arg5 ;
-(id)cachedImageNamed:(id)arg1 inTempGroup:(id)arg2 ;
-(BOOL)_shouldUseBoldFontForStyle:(long long)arg1 ;
-(id)imageIdWithText:(id)arg1 forWidth:(double)arg2 lineBreakMode:(long long)arg3 letterSpacing:(double)arg4 style:(long long)arg5 ;
-(id)initWithHeight:(double)arg1 legibilityStyle:(long long)arg2 tintColor:(id)arg3 hasBusyBackground:(BOOL)arg4 ;
-(double)batteryAccessoryMargin;
-(void)drawBatteryInsidesWithSize:(CGSize)arg1 capacity:(int)arg2 style:(unsigned long long)arg3 ;
-(id)bluetoothBatteryImageNameWithCapacity:(double)arg1 ;
-(id)accessibilityHUDImageNamed:(id)arg1 ;
-(void)drawBluetoothBatteryInsidesWithSize:(CGSize)arg1 capacity:(double)arg2 ;
-(double)baselineOffsetForStyle:(long long)arg1 ;
-(id)imageNamed:(id)arg1 withLegibilityStyle:(long long)arg2 legibilityStrength:(double)arg3 ;
-(BOOL)canShowBreadcrumbs;
-(double)bluetoothBatteryExtraPadding;
-(double)sizeForMoonMaskVisible:(BOOL)arg1 ;
-(CGPoint)positionForMoonMaskInBounds:(CGRect)arg1 ;
-(BOOL)supportsShowingBuildVersion;
-(void)setCanShowBreadcrumbs:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIColor *)tintColor;
@end

