/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIStatusBarItemView.h>

@class UIView, _UILegibilityImageSet, UIImage;

@interface UIStatusBarBatteryItemView : UIStatusBarItemView {

	int _capacity;
	int _state;
	BOOL _batterySaverModeActive;
	UIView* _accessoryView;
	BOOL _cachedImageHasAccessoryImage;
	int _cachedCapacity;
	int _cachedAXHUDCapacity;
	_UILegibilityImageSet* _cachedImageSet;
	unsigned long long _cachedBatteryStyle;
	unsigned long long _cachedAXHUDStyle;
	UIImage* _cachedAXHUDImage;

}

@property (nonatomic,retain) _UILegibilityImageSet * cachedImageSet;              //@synthesize cachedImageSet=_cachedImageSet - In the implementation block
@property (assign,nonatomic) int cachedCapacity;                                  //@synthesize cachedCapacity=_cachedCapacity - In the implementation block
@property (assign,nonatomic) BOOL cachedImageHasAccessoryImage;                   //@synthesize cachedImageHasAccessoryImage=_cachedImageHasAccessoryImage - In the implementation block
@property (assign,nonatomic) unsigned long long cachedBatteryStyle;               //@synthesize cachedBatteryStyle=_cachedBatteryStyle - In the implementation block
@property (assign,nonatomic) int cachedAXHUDCapacity;                             //@synthesize cachedAXHUDCapacity=_cachedAXHUDCapacity - In the implementation block
@property (assign,nonatomic) unsigned long long cachedAXHUDStyle;                 //@synthesize cachedAXHUDStyle=_cachedAXHUDStyle - In the implementation block
@property (nonatomic,retain) UIImage * cachedAXHUDImage;                          //@synthesize cachedAXHUDImage=_cachedAXHUDImage - In the implementation block
-(id)accessibilityHUDRepresentation;
-(BOOL)updateForNewData:(id)arg1 actions:(int)arg2 ;
-(id)contentsImage;
-(void)_updateAccessoryImage;
-(BOOL)_needsAccessoryImage;
-(_UILegibilityImageSet *)cachedImageSet;
-(int)cachedCapacity;
-(BOOL)cachedImageHasAccessoryImage;
-(unsigned long long)cachedBatteryStyle;
-(id)_accessoryImage;
-(CGSize)_batteryOffsetWithBackground:(id)arg1 ;
-(void)setCachedImageSet:(_UILegibilityImageSet *)arg1 ;
-(void)setCachedCapacity:(int)arg1 ;
-(void)setCachedImageHasAccessoryImage:(BOOL)arg1 ;
-(void)setCachedBatteryStyle:(unsigned long long)arg1 ;
-(id)_contentsImage;
-(double)extraRightPadding;
-(int)cachedAXHUDCapacity;
-(unsigned long long)cachedAXHUDStyle;
-(UIImage *)cachedAXHUDImage;
-(void)setCachedAXHUDImage:(UIImage *)arg1 ;
-(void)setCachedAXHUDCapacity:(int)arg1 ;
-(void)setCachedAXHUDStyle:(unsigned long long)arg1 ;
-(double)legibilityStrength;
@end

