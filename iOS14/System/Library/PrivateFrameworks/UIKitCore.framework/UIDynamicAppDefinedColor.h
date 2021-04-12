/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIDynamicColor.h>

@class NSDictionary;

@interface UIDynamicAppDefinedColor : UIDynamicColor {

	NSDictionary* _colorsByThemeKey;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_generateColorsByTraitCollection;
-(id)_resolvedColorWithTraitCollection:(id)arg1 ;
-(id)_initWithColorsByThemeKey:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithColorsByTraitCollection:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

