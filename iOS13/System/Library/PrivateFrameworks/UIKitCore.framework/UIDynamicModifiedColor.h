/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)colorWithAlphaComponent:(double)arg1 ;
-(id)_highContrastDynamicColor;
-(id)initWithBaseColor:(id)arg1 alphaComponent:(double)arg2 contrast:(long long)arg3 ;
-(id)_backgroundColorIgnoringHighContrast;
-(id)_resolvedColorWithTraitCollection:(id)arg1 ;
@end

