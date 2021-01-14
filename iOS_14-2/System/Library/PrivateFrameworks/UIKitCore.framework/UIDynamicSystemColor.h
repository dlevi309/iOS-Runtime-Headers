/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIDynamicColor.h>

@class NSDictionary, UIColor;

@interface UIDynamicSystemColor : UIDynamicColor {

	NSDictionary* _colorsByThemeKey;
	os_unfair_lock_s _cachedColorLock;
	UIColor* _cachedColor;
	unsigned long long _cachedThemeKey;

}
-(id)_resolvedColorWithTraitCollection:(id)arg1 ;
-(id)initWithName:(id)arg1 colorsByThemeKey:(id)arg2 ;
-(id)description;
-(unsigned long long)hash;
-(id)_colorsByThemeKey;
-(void)_setColorsByThemeKey:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

