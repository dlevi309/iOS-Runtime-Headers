/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARConfiguration.h>

@interface ARFaceTrackingConfiguration : ARConfiguration {

	BOOL _worldTrackingEnabled;
	BOOL _lowPower;
	long long _maximumNumberOfTrackedFaces;

}

@property (assign,nonatomic) BOOL lowPower;                                                        //@synthesize lowPower=_lowPower - In the implementation block
@property (assign,nonatomic) long long maximumNumberOfTrackedFaces;                                //@synthesize maximumNumberOfTrackedFaces=_maximumNumberOfTrackedFaces - In the implementation block
@property (assign,getter=isWorldTrackingEnabled,nonatomic) BOOL worldTrackingEnabled;              //@synthesize worldTrackingEnabled=_worldTrackingEnabled - In the implementation block
+(id)new;
+(BOOL)isSupported;
+(id)supportedVideoFormats;
+(BOOL)supportsFrameSemantics:(unsigned long long)arg1 ;
+(BOOL)supportsWorldTracking;
+(id)supportedVideoFormatsForWorldTracking;
+(long long)supportedNumberOfTrackedFaces;
-(id)init;
-(void)setLightEstimationEnabled:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setCameraPosition:(long long)arg1 ;
-(long long)maximumNumberOfTrackedFaces;
-(void)setMaximumNumberOfTrackedFaces:(long long)arg1 ;
-(BOOL)isWorldTrackingEnabled;
-(void)setWorldTrackingEnabled:(BOOL)arg1 ;
-(void)setLowPower:(BOOL)arg1 ;
-(void)createTechniques:(id)arg1 ;
-(id)imageSensorSettingsForWorldTracking;
-(id)parentImageSensorSettings;
-(id)imageSensorSettingsForLowPower;
-(id)imageSensorSettings;
-(BOOL)lowPower;
-(void)setMirroredFrameOutput:(BOOL)arg1 ;
-(id)secondaryTechniques;
-(id)renderingTechnique;
@end

