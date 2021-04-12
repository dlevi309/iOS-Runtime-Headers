/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(CGColorRef)CGColor;
-(id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
-(double)red;
-(double)green;
-(double)blue;
-(double)alpha;
-(id)colorWithAlphaComponent:(double)arg1 ;
-(id)_rgbColor;
-(id)_initWithCGColor:(CGColorRef)arg1 ;
-(id)_initWithDescription:(id)arg1 ;
-(id)colorDescription;
-(id)colorWithAdditionalAlphaComponent:(double)arg1 ;
-(id)colorBlendedWithColor:(id)arg1 ;
-(CAColorMatrix)sourceOverColorMatrix;
@end

