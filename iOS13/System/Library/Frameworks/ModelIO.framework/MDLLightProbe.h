/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
*/

#import <ModelIO/ModelIO-Structs.h>
#import <ModelIO/MDLLight.h>

@protocol MDLTransformComponent;
@class MDLTexture, NSMutableData, NSData;

@interface MDLLightProbe : MDLLight {

	MDLTexture* _reflectiveTexture;
	MDLTexture* _irradianceTexture;
	NSMutableData* _sphericalHarmonicsCoefficients;
	id<MDLTransformComponent> _transform;
	unsigned long long _sphericalHarmonicsLevel;

}

@property (nonatomic,retain,readonly) MDLTexture * reflectiveTexture;                     //@synthesize reflectiveTexture=_reflectiveTexture - In the implementation block
@property (nonatomic,retain,readonly) MDLTexture * irradianceTexture;                     //@synthesize irradianceTexture=_irradianceTexture - In the implementation block
@property (nonatomic,readonly) unsigned long long sphericalHarmonicsLevel;                //@synthesize sphericalHarmonicsLevel=_sphericalHarmonicsLevel - In the implementation block
@property (nonatomic,copy,readonly) NSData * sphericalHarmonicsCoefficients; 
+(4)calculateIrradianceGradientUsingSamples:(1*)arg1 ofSize:(unsigned long long)arg2 fromSH:(id)arg3 withLevel:(unsigned long long)arg4 ;
+(CGColorRef)sampleSHAt:(id)arg1 usingCoefficients:(unsigned long long)arg2 ;
+(id)lightProbeWithTextureSize:(long long)arg1 forLocation:(id)arg2 lightsToConsider:(id)arg3 objectsToConsider:(id)arg4 reflectiveCubemap:(id)arg5 irradianceCubemap:(id)arg6 ;
-(id)transform;
-(void)setTransform:(id)arg1 ;
-(unsigned long long)sphericalHarmonicsLevel;
-(NSData *)sphericalHarmonicsCoefficients;
-(void)setSphericalHarmonicsCoefficients:(NSData *)arg1 ;
-(id)initWithReflectiveTexture:(id)arg1 irradianceTexture:(id)arg2 ;
-(void)generateIrradianceTextureFromReflective;
-(void)generateSphericalHarmonicsFromIrradiance:(unsigned long long)arg1 ;
-(MDLTexture *)reflectiveTexture;
-(MDLTexture *)irradianceTexture;
@end

