/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface AXMVisionColor : NSObject <NSSecureCoding> {

	unsigned char _red;
	unsigned char _green;
	unsigned char _blue;
	unsigned char _hue;
	unsigned char _saturation;
	unsigned char _brightness;

}

@property (nonatomic,readonly) double redFloat; 
@property (nonatomic,readonly) double greenFloat; 
@property (nonatomic,readonly) double blueFloat; 
@property (nonatomic,readonly) double hueFloat; 
@property (nonatomic,readonly) double saturationFloat; 
@property (nonatomic,readonly) double brightnessFloat; 
+(BOOL)supportsSecureCoding;
+(id)colorWithRed:(unsigned char)arg1 green:(unsigned char)arg2 blue:(unsigned char)arg3 ;
+(id)colorWithHue:(unsigned char)arg1 saturation:(unsigned char)arg2 brightness:(unsigned char)arg3 ;
+(id)colorWithHueDegrees:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(double)saturationFloat;
-(double)hueRadians;
-(void)_getHue:(char*)arg1 saturation:(char*)arg2 brightness:(char*)arg3 ;
-(void)_getRed:(char*)arg1 green:(char*)arg2 blue:(char*)arg3 ;
-(BOOL)isEqualToAXMVisionColor:(id)arg1 ;
-(double)brightnessFloat;
-(double)blueFloat;
-(double)euclidianDistanceHSV:(id)arg1 ;
-(double)euclidianDistanceHS:(id)arg1 ;
-(double)greenFloat;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(double)hueFloat;
-(double)redFloat;
-(BOOL)isEqual:(id)arg1 ;
@end

