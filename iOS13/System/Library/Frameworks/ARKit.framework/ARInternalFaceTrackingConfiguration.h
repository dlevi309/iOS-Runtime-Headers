/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARConfiguration.h>

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
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLightEstimationEnabled:(BOOL)arg1 ;
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

