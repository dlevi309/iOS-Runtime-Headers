/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
*/

#import <ModelIO/ModelIO-Structs.h>
#import <ModelIO/MDLLight.h>

@interface MDLPhysicallyPlausibleLight : MDLLight {

	float _lumens;
	float _innerConeAngle;
	float _outerConeAngle;
	float _attenuationStartDistance;
	float _attenuationEndDistance;
	float _attenuationFalloffExponent;

}

@property (assign,nonatomic) float attenuationFalloffExponent;              //@synthesize attenuationFalloffExponent=_attenuationFalloffExponent - In the implementation block
@property (assign,nonatomic) CGColorRef color; 
@property (assign,nonatomic) float lumens;                                  //@synthesize lumens=_lumens - In the implementation block
@property (assign,nonatomic) float innerConeAngle;                          //@synthesize innerConeAngle=_innerConeAngle - In the implementation block
@property (assign,nonatomic) float outerConeAngle;                          //@synthesize outerConeAngle=_outerConeAngle - In the implementation block
@property (assign,nonatomic) float attenuationStartDistance;                //@synthesize attenuationStartDistance=_attenuationStartDistance - In the implementation block
@property (assign,nonatomic) float attenuationEndDistance;                  //@synthesize attenuationEndDistance=_attenuationEndDistance - In the implementation block
-(id)init;
-(CGColorRef)color;
-(float)lumens;
-(void)setColor:(CGColorRef)arg1 ;
-(void)setInnerConeAngle:(float)arg1 ;
-(void)setOuterConeAngle:(float)arg1 ;
-(void)setAttenuationStartDistance:(float)arg1 ;
-(void)setAttenuationEndDistance:(float)arg1 ;
-(void)setAttenuationFalloffExponent:(float)arg1 ;
-(void)setLumens:(float)arg1 ;
-(void)setColorByTemperature:(float)arg1 ;
-(float)innerConeAngle;
-(float)outerConeAngle;
-(float)attenuationStartDistance;
-(float)attenuationEndDistance;
-(float)attenuationFalloffExponent;
@end

