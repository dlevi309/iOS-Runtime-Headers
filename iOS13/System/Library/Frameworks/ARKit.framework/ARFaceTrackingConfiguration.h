/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARConfiguration.h>

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
+(BOOL)supportsWorldTracking;
+(id)supportedVideoFormatsForWorldTracking;
+(long long)supportedNumberOfTrackedFaces;
+(BOOL)supportsFrameSemantics:(unsigned long long)arg1 ;
+(id)supportedVideoFormats;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLightEstimationEnabled:(BOOL)arg1 ;
-(void)setCameraPosition:(long long)arg1 ;
-(long long)maximumNumberOfTrackedFaces;
-(void)setMaximumNumberOfTrackedFaces:(long long)arg1 ;
-(BOOL)isWorldTrackingEnabled;
-(void)setWorldTrackingEnabled:(BOOL)arg1 ;
-(void)createTechniques:(id)arg1 ;
-(id)imageSensorSettingsForWorldTracking;
-(id)parentImageSensorSettings;
-(id)imageSensorSettingsForLowPower;
-(id)imageSensorSettings;
-(BOOL)lowPower;
-(void)setMirroredFrameOutput:(BOOL)arg1 ;
-(id)secondaryTechniques;
-(id)renderingTechnique;
-(void)setLowPower:(BOOL)arg1 ;
@end

