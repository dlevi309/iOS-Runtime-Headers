/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
*/

#import <VoiceShortcutClient/VoiceShortcutClient-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class WFColor;

@interface WFGradient : NSObject <NSCopying, NSSecureCoding> {

	CGGradientRef _CGGradient;
	WFColor* _baseColor;
	WFColor* _darkBaseColor;
	WFColor* _accessibilityBaseColor;
	WFColor* _darkAccessibilityBaseColor;
	WFColor* _startColor;
	WFColor* _endColor;
	long long _blendMode;

}

@property (nonatomic,readonly) WFColor * baseColor;                               //@synthesize baseColor=_baseColor - In the implementation block
@property (nonatomic,readonly) WFColor * darkBaseColor;                           //@synthesize darkBaseColor=_darkBaseColor - In the implementation block
@property (nonatomic,readonly) WFColor * accessibilityBaseColor;                  //@synthesize accessibilityBaseColor=_accessibilityBaseColor - In the implementation block
@property (nonatomic,readonly) WFColor * darkAccessibilityBaseColor;              //@synthesize darkAccessibilityBaseColor=_darkAccessibilityBaseColor - In the implementation block
@property (nonatomic,readonly) WFColor * startColor;                              //@synthesize startColor=_startColor - In the implementation block
@property (nonatomic,readonly) WFColor * endColor;                                //@synthesize endColor=_endColor - In the implementation block
@property (nonatomic,readonly) long long blendMode;                               //@synthesize blendMode=_blendMode - In the implementation block
@property (nonatomic,readonly) CGGradientRef CGGradient;                          //@synthesize CGGradient=_CGGradient - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)blendMode;
-(WFColor *)endColor;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithColor:(id)arg1 ;
-(WFColor *)startColor;
-(CGGradientRef)CGGradient;
-(WFColor *)darkBaseColor;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithBaseColor:(id)arg1 startColor:(id)arg2 endColor:(id)arg3 blendMode:(long long)arg4 ;
-(id)initWithBaseColor:(id)arg1 darkBaseColor:(id)arg2 accessibilityBaseColor:(id)arg3 darkAccessibilityBaseColor:(id)arg4 startColor:(id)arg5 endColor:(id)arg6 blendMode:(long long)arg7 ;
-(id)baseColorForDarkMode:(BOOL)arg1 highContrast:(BOOL)arg2 ;
-(WFColor *)accessibilityBaseColor;
-(WFColor *)darkAccessibilityBaseColor;
-(id)initWithStartColor:(id)arg1 endColor:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(WFColor *)baseColor;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

