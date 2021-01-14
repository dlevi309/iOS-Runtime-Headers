/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARConfiguration.h>

@interface ARInternalFaceTrackingConfiguration : ARConfiguration {

	BOOL _useAlternativeResources;
	long long _maximumNumberOfTrackedFaces;

}

@property (assign,nonatomic) long long maximumNumberOfTrackedFaces;              //@synthesize maximumNumberOfTrackedFaces=_maximumNumberOfTrackedFaces - In the implementation block
@property (assign,nonatomic) BOOL useAlternativeResources;                       //@synthesize useAlternativeResources=_useAlternativeResources - In the implementation block
+(id)new;
+(BOOL)isSupported;
+(id)supportedVideoFormats;
-(id)init;
-(void)setLightEstimationEnabled:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setCameraPosition:(long long)arg1 ;
-(long long)maximumNumberOfTrackedFaces;
-(void)setMaximumNumberOfTrackedFaces:(long long)arg1 ;
-(void)createTechniques:(id)arg1 ;
-(id)imageSensorSettings;
-(void)setMirroredFrameOutput:(BOOL)arg1 ;
-(id)renderingTechnique;
-(BOOL)useAlternativeResources;
-(void)setUseAlternativeResources:(BOOL)arg1 ;
@end

