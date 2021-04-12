/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPassImageSet.h>

@class PKImage;

@interface PKPassLiveRenderedImageSet : PKPassImageSet {

	PKImage* _diffuseMaterialPropertyImage;
	PKImage* _ambientMaterialPropertyImage;
	PKImage* _specularMaterialPropertyImage;
	PKImage* _normalMaterialPropertyImage;
	PKImage* _reflectiveMaterialPropertyImage;
	PKImage* _emissionMaterialPropertyImage;
	PKImage* _transparentMaterialPropertyImage;
	PKImage* _multiplyMaterialPropertyImage;
	PKImage* _displacementMaterialPropertyImage;
	PKImage* _ambientOcclusionMaterialPropertyImage;
	PKImage* _selfIlluminationMaterialPropertyImage;
	PKImage* _metalnessMaterialPropertyImage;
	PKImage* _roughnessMaterialPropertyImage;
	PKImage* _overlayMaterialPropertyImage;

}

@property (nonatomic,retain) PKImage * diffuseMaterialPropertyImage;                       //@synthesize diffuseMaterialPropertyImage=_diffuseMaterialPropertyImage - In the implementation block
@property (nonatomic,retain) PKImage * ambientMaterialPropertyImage;                       //@synthesize ambientMaterialPropertyImage=_ambientMaterialPropertyImage - In the implementation block
@property (nonatomic,retain) PKImage * specularMaterialPropertyImage;                      //@synthesize specularMaterialPropertyImage=_specularMaterialPropertyImage - In the implementation block
@property (nonatomic,retain) PKImage * normalMaterialPropertyImage;                        //@synthesize normalMaterialPropertyImage=_normalMaterialPropertyImage - In the implementation block
@property (nonatomic,retain) PKImage * reflectiveMaterialPropertyImage;                    //@synthesize reflectiveMaterialPropertyImage=_reflectiveMaterialPropertyImage - In the implementation block
@property (nonatomic,retain) PKImage * emissionMaterialPropertyImage;                      //@synthesize emissionMaterialPropertyImage=_emissionMaterialPropertyImage - In the implementation block
@property (nonatomic,retain) PKImage * transparentMaterialPropertyImage;                   //@synthesize transparentMaterialPropertyImage=_transparentMaterialPropertyImage - In the implementation block
@property (nonatomic,retain) PKImage * multiplyMaterialPropertyImage;                      //@synthesize multiplyMaterialPropertyImage=_multiplyMaterialPropertyImage - In the implementation block
@property (nonatomic,retain) PKImage * displacementMaterialPropertyImage;                  //@synthesize displacementMaterialPropertyImage=_displacementMaterialPropertyImage - In the implementation block
@property (nonatomic,retain) PKImage * ambientOcclusionMaterialPropertyImage;              //@synthesize ambientOcclusionMaterialPropertyImage=_ambientOcclusionMaterialPropertyImage - In the implementation block
@property (nonatomic,retain) PKImage * selfIlluminationMaterialPropertyImage;              //@synthesize selfIlluminationMaterialPropertyImage=_selfIlluminationMaterialPropertyImage - In the implementation block
@property (nonatomic,retain) PKImage * metalnessMaterialPropertyImage;                     //@synthesize metalnessMaterialPropertyImage=_metalnessMaterialPropertyImage - In the implementation block
@property (nonatomic,retain) PKImage * roughnessMaterialPropertyImage;                     //@synthesize roughnessMaterialPropertyImage=_roughnessMaterialPropertyImage - In the implementation block
@property (nonatomic,retain) PKImage * overlayMaterialPropertyImage;                       //@synthesize overlayMaterialPropertyImage=_overlayMaterialPropertyImage - In the implementation block
+(BOOL)shouldCache;
+(BOOL)supportsSecureCoding;
+(unsigned)currentVersion;
+(id)archiveName;
+(long long)imageSetType;
-(void)preheatImages;
-(id)initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDiffuseMaterialPropertyImage:(PKImage *)arg1 ;
-(void)setAmbientMaterialPropertyImage:(PKImage *)arg1 ;
-(void)setSpecularMaterialPropertyImage:(PKImage *)arg1 ;
-(void)setNormalMaterialPropertyImage:(PKImage *)arg1 ;
-(void)setReflectiveMaterialPropertyImage:(PKImage *)arg1 ;
-(void)setEmissionMaterialPropertyImage:(PKImage *)arg1 ;
-(void)setTransparentMaterialPropertyImage:(PKImage *)arg1 ;
-(void)setMultiplyMaterialPropertyImage:(PKImage *)arg1 ;
-(void)setDisplacementMaterialPropertyImage:(PKImage *)arg1 ;
-(void)setAmbientOcclusionMaterialPropertyImage:(PKImage *)arg1 ;
-(void)setSelfIlluminationMaterialPropertyImage:(PKImage *)arg1 ;
-(void)setMetalnessMaterialPropertyImage:(PKImage *)arg1 ;
-(void)setRoughnessMaterialPropertyImage:(PKImage *)arg1 ;
-(void)setOverlayMaterialPropertyImage:(PKImage *)arg1 ;
-(PKImage *)diffuseMaterialPropertyImage;
-(PKImage *)ambientMaterialPropertyImage;
-(PKImage *)specularMaterialPropertyImage;
-(PKImage *)normalMaterialPropertyImage;
-(PKImage *)reflectiveMaterialPropertyImage;
-(PKImage *)emissionMaterialPropertyImage;
-(PKImage *)transparentMaterialPropertyImage;
-(PKImage *)multiplyMaterialPropertyImage;
-(PKImage *)displacementMaterialPropertyImage;
-(PKImage *)ambientOcclusionMaterialPropertyImage;
-(PKImage *)selfIlluminationMaterialPropertyImage;
-(PKImage *)metalnessMaterialPropertyImage;
-(PKImage *)roughnessMaterialPropertyImage;
-(PKImage *)overlayMaterialPropertyImage;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

