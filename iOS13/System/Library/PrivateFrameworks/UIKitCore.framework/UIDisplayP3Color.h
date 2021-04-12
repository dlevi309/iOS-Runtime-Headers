/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIColor.h>

@interface UIDisplayP3Color : UIColor {

	double redComponent;
	double greenComponent;
	double blueComponent;
	double alphaComponent;
	CGColorRef _cachedColor;

}
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)set;
-(CGColorRef)CGColor;
-(BOOL)getRed:(double*)arg1 green:(double*)arg2 blue:(double*)arg3 alpha:(double*)arg4 ;
-(id)colorWithAlphaComponent:(double)arg1 ;
-(void)setStroke;
-(double)alphaComponent;
-(BOOL)getWhite:(double*)arg1 alpha:(double*)arg2 ;
-(BOOL)getHue:(double*)arg1 saturation:(double*)arg2 brightness:(double*)arg3 alpha:(double*)arg4 ;
-(void)setFill;
-(id)colorSpaceName;
-(BOOL)_isDeepColor;
-(CGColorRef)_createCGColorWithAlpha:(double)arg1 ;
-(id)initWithDisplayP3Red:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
@end

