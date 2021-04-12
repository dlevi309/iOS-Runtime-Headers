/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIDynamicColor.h>

@class NSString, _UIAssetManager, UIColor;

@interface UIDynamicCatalogColor : UIDynamicColor {

	NSString* _name;
	_UIAssetManager* _assetManager;
	UIColor* _genericColor;

}
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_debugName;
-(id)_initForNibEncodingWithName:(id)arg1 genericColor:(id)arg2 ;
-(void)_setDebugName:(id)arg1 ;
-(id)_debugCatalogBundleIdentifier;
-(void)_setDebugCatalogBundleIdentifier:(id)arg1 ;
-(id)_resolvedColorWithTraitCollection:(id)arg1 ;
-(id)initWithName:(id)arg1 assetManager:(id)arg2 genericColor:(id)arg3 ;
@end

