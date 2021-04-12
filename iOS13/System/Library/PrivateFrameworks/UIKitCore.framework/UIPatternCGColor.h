/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICGColor.h>

@interface UIPatternCGColor : UICGColor {

	CGColorRef _cachedUnflippedColor;

}
-(void)dealloc;
-(id)description;
-(id)initWithCGColor:(CGColorRef)arg1 ;
-(BOOL)getRed:(double*)arg1 green:(double*)arg2 blue:(double*)arg3 alpha:(double*)arg4 ;
-(BOOL)getWhite:(double*)arg1 alpha:(double*)arg2 ;
-(BOOL)getHue:(double*)arg1 saturation:(double*)arg2 brightness:(double*)arg3 alpha:(double*)arg4 ;
-(id)colorSpaceName;
-(BOOL)isPatternColor;
@end

