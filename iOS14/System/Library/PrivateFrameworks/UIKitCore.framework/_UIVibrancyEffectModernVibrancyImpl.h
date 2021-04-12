/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIVibrancyEffectImpl.h>

@class NSString, UIColor;

@interface _UIVibrancyEffectModernVibrancyImpl : _UIVibrancyEffectImpl {

	NSString* _filterType;
	UIColor* _inputColor1;
	UIColor* _inputColor2;
	UIColor* _compositingColor;
	BOOL _inputReversed;

}
-(void)appendDescriptionTo:(id)arg1 ;
-(void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)implementationReplacingTintColor:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithFilter:(id)arg1 inputColor1:(id)arg2 inputColor2:(id)arg3 compositingColor:(id)arg4 inputReversed:(BOOL)arg5 ;
-(BOOL)isEqual:(id)arg1 ;
@end

