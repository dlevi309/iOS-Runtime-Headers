/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICGColor.h>

@interface UIPatternCGColor : UICGColor {

	CGColorRef _cachedUnflippedColor;

}
-(BOOL)getRed:(double*)arg1 green:(double*)arg2 blue:(double*)arg3 alpha:(double*)arg4 ;
-(BOOL)isPatternColor;
-(BOOL)getWhite:(double*)arg1 alpha:(double*)arg2 ;
-(id)description;
-(id)initWithCGColor:(CGColorRef)arg1 ;
-(id)colorSpaceName;
-(BOOL)getHue:(double*)arg1 saturation:(double*)arg2 brightness:(double*)arg3 alpha:(double*)arg4 ;
-(void)dealloc;
@end

