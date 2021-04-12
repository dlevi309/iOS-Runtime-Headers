/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
*/

#import <ModelIO/ModelIO-Structs.h>
#import <ModelIO/MDLScatteringFunction.h>

@class MDLMaterialProperty;

@interface MDLPhysicallyPlausibleScatteringFunction : MDLScatteringFunction {

	PhysicallyPlausibleDistribution* _physicalBSDF;
	MDLMaterialProperty* _subsurface;
	MDLMaterialProperty* _metallic;
	MDLMaterialProperty* _specularAmount;
	MDLMaterialProperty* _specularTint;
	MDLMaterialProperty* _roughness;
	MDLMaterialProperty* _anisotropic;
	MDLMaterialProperty* _anisotropicRotation;
	MDLMaterialProperty* _sheen;
	MDLMaterialProperty* _sheenTint;
	MDLMaterialProperty* _clearcoat;
	MDLMaterialProperty* _clearcoatGloss;

}

@property (nonatomic,readonly) long long version; 
@property (nonatomic,retain,readonly) MDLMaterialProperty * subsurface;                       //@synthesize subsurface=_subsurface - In the implementation block
@property (nonatomic,retain,readonly) MDLMaterialProperty * metallic;                         //@synthesize metallic=_metallic - In the implementation block
@property (nonatomic,retain,readonly) MDLMaterialProperty * specularAmount;                   //@synthesize specularAmount=_specularAmount - In the implementation block
@property (nonatomic,retain,readonly) MDLMaterialProperty * specularTint;                     //@synthesize specularTint=_specularTint - In the implementation block
@property (nonatomic,retain,readonly) MDLMaterialProperty * roughness;                        //@synthesize roughness=_roughness - In the implementation block
@property (nonatomic,retain,readonly) MDLMaterialProperty * anisotropic;                      //@synthesize anisotropic=_anisotropic - In the implementation block
@property (nonatomic,retain,readonly) MDLMaterialProperty * anisotropicRotation;              //@synthesize anisotropicRotation=_anisotropicRotation - In the implementation block
@property (nonatomic,retain,readonly) MDLMaterialProperty * sheen;                            //@synthesize sheen=_sheen - In the implementation block
@property (nonatomic,retain,readonly) MDLMaterialProperty * sheenTint;                        //@synthesize sheenTint=_sheenTint - In the implementation block
@property (nonatomic,retain,readonly) MDLMaterialProperty * clearcoat;                        //@synthesize clearcoat=_clearcoat - In the implementation block
@property (nonatomic,retain,readonly) MDLMaterialProperty * clearcoatGloss;                   //@synthesize clearcoatGloss=_clearcoatGloss - In the implementation block
-(id)init;
-(long long)version;
-(MDLMaterialProperty *)subsurface;
-(MDLMaterialProperty *)metallic;
-(MDLMaterialProperty *)specularAmount;
-(MDLMaterialProperty *)specularTint;
-(MDLMaterialProperty *)roughness;
-(MDLMaterialProperty *)anisotropic;
-(MDLMaterialProperty *)anisotropicRotation;
-(MDLMaterialProperty *)sheen;
-(MDLMaterialProperty *)sheenTint;
-(MDLMaterialProperty *)clearcoat;
-(MDLMaterialProperty *)clearcoatGloss;
@end

