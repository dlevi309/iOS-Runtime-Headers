/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
*/

#import <ModelIO/ModelIO-Structs.h>
#import <ModelIO/MDLTexture.h>

@interface MDLColorSwatchTexture : MDLTexture {

	float _colorTemperature1;
	float _colorTemperature2;
	CGColorRef _color1;
	CGColorRef _color2;
	int _type;

}
-(id)generateDataAtLevel:(long long)arg1 ;
-(id)initWithColorTemperatureGradientFrom:(float)arg1 toColorTemperature:(float)arg2 name:(id)arg3 ;
-(id)initWithColorGradientFrom:(CGColorRef)arg1 toColor:(CGColorRef)arg2 name:(id)arg3 ;
@end

