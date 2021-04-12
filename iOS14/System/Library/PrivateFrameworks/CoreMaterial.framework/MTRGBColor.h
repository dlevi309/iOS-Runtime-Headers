/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreMaterial.framework/CoreMaterial
*/

#import <CoreMaterial/CoreMaterial-Structs.h>
#import <CoreMaterial/MTColor.h>

@interface MTRGBColor : MTColor {

	double _red;
	double _green;
	double _blue;
	double _alpha;

}

@property (nonatomic,readonly) double red;                //@synthesize red=_red - In the implementation block
@property (nonatomic,readonly) double green;              //@synthesize green=_green - In the implementation block
@property (nonatomic,readonly) double blue;               //@synthesize blue=_blue - In the implementation block
@property (nonatomic,readonly) double alpha;              //@synthesize alpha=_alpha - In the implementation block
-(CGColorRef)CGColor;
-(id)colorWithAlphaComponent:(double)arg1 ;
-(id)colorDescription;
-(id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
-(double)red;
-(id)_rgbColor;
-(double)alpha;
-(id)_initWithDescription:(id)arg1 ;
-(id)colorBlendedWithColor:(id)arg1 ;
-(id)_initWithCGColor:(CGColorRef)arg1 ;
-(id)description;
-(double)blue;
-(double)green;
-(id)colorWithAdditionalAlphaComponent:(double)arg1 ;
-(CAColorMatrix)sourceOverColorMatrix;
@end

