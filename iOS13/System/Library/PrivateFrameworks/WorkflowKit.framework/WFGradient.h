/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class WFColor;

@interface WFGradient : NSObject <NSCopying> {

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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithColor:(id)arg1 ;
-(CGGradientRef)CGGradient;
-(id)initWithStartColor:(id)arg1 endColor:(id)arg2 ;
-(long long)blendMode;
-(WFColor *)startColor;
-(WFColor *)endColor;
-(WFColor *)baseColor;
-(id)initWithBaseColor:(id)arg1 startColor:(id)arg2 endColor:(id)arg3 blendMode:(long long)arg4 ;
-(id)initWithBaseColor:(id)arg1 darkBaseColor:(id)arg2 accessibilityBaseColor:(id)arg3 darkAccessibilityBaseColor:(id)arg4 startColor:(id)arg5 endColor:(id)arg6 blendMode:(long long)arg7 ;
-(WFColor *)darkBaseColor;
-(WFColor *)accessibilityBaseColor;
-(WFColor *)darkAccessibilityBaseColor;
@end

