/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIDynamicColor.h>

@class NSString, _UIAssetManager, UIColor;

@interface UIDynamicCatalogColor : UIDynamicColor {

	NSString* _name;
	_UIAssetManager* _assetManager;
	UIColor* _genericColor;
	os_unfair_lock_s _cachedColorLock;
	UIColor* _cachedColor;
	unsigned long long _cachedThemeKey;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_setDebugCatalogBundleIdentifier:(id)arg1 ;
-(id)_resolvedColorWithTraitCollection:(id)arg1 ;
-(void)_setDebugName:(id)arg1 ;
-(id)description;
-(id)_debugName;
-(id)_initForNibEncodingWithName:(id)arg1 genericColor:(id)arg2 ;
-(unsigned long long)hash;
-(id)initWithName:(id)arg1 assetManager:(id)arg2 genericColor:(id)arg3 ;
-(id)_debugCatalogBundleIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

