/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
*/

#import <ModelIO/ModelIO-Structs.h>
#import <ModelIO/MDLPhysicallyPlausibleLight.h>

@class NSMutableData, MDLTexture, NSData;

@interface MDLPhotometricLight : MDLPhysicallyPlausibleLight {

	RTIESLight* _iesLight;
	NSMutableData* _sphericalHarmonicsCoefficients;
	MDLTexture* _lightCubeMap;
	unsigned long long _sphericalHarmonicsLevel;

}

@property (nonatomic,retain,readonly) MDLTexture * lightCubeMap;                          //@synthesize lightCubeMap=_lightCubeMap - In the implementation block
@property (nonatomic,readonly) unsigned long long sphericalHarmonicsLevel;                //@synthesize sphericalHarmonicsLevel=_sphericalHarmonicsLevel - In the implementation block
@property (nonatomic,copy,readonly) NSData * sphericalHarmonicsCoefficients; 
-(id)generateTexture:(unsigned long long)arg1 ;
-(NSData *)sphericalHarmonicsCoefficients;
-(id)initWithIESProfile:(id)arg1 ;
-(void)generateCubemapFromLight:(unsigned long long)arg1 ;
-(void)generateSphericalHarmonicsFromLight:(unsigned long long)arg1 ;
-(unsigned long long)sphericalHarmonicsLevel;
-(void)computeLumens;
-(float)computeInnerAngle;
-(void)setSphericalHarmonicsCoefficients:(NSData *)arg1 ;
-(id)computeSceneKitRenderingTexture:(unsigned long long)arg1 ;
-(CGColorRef)evaluatedColorFromSHVector:;
-(MDLTexture *)lightCubeMap;
@end

