/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIDynamicColor.h>

@class UIDynamicColor;

@interface UIDynamicModifiedColor : UIDynamicColor {

	UIDynamicColor* _baseColor;
	double _alphaComponent;
	long long _contrast;

}
+(BOOL)supportsSecureCoding;
-(id)colorWithAlphaComponent:(double)arg1 ;
-(id)_backgroundColorIgnoringHighContrast;
-(id)initWithBaseColor:(id)arg1 alphaComponent:(double)arg2 contrast:(long long)arg3 ;
-(id)_highContrastDynamicColor;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_resolvedColorWithTraitCollection:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

