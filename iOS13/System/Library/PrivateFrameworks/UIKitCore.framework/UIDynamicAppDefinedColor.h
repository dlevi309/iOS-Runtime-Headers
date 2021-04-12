/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIDynamicColor.h>

@class NSDictionary;

@interface UIDynamicAppDefinedColor : UIDynamicColor {

	NSDictionary* _colorsByThemeKey;

}
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithColorsByTraitCollection:(id)arg1 ;
-(id)_resolvedColorWithTraitCollection:(id)arg1 ;
-(id)_initWithColorsByThemeKey:(id)arg1 ;
-(id)_generateColorsByTraitCollection;
@end

