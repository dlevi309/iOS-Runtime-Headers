/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARConfiguration.h>

@class NSArray, ARConfiguration, ARWorldMap;

@interface ARCustomTechniquesConfiguration : ARConfiguration {

	NSArray* _techniques;
	ARConfiguration* _templateConfiguration;

}

@property (nonatomic,copy) NSArray * techniques;                                 //@synthesize techniques=_techniques - In the implementation block
@property (nonatomic,readonly) ARWorldMap * initialWorldMap; 
@property (nonatomic,copy) ARConfiguration * templateConfiguration;              //@synthesize templateConfiguration=_templateConfiguration - In the implementation block
+(id)new;
+(id)supportedVideoFormats;
-(id)initPrivate;
-(id)init;
-(void)setVideoFormat:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setCameraPosition:(long long)arg1 ;
-(ARWorldMap *)initialWorldMap;
-(long long)worldAlignment;
-(id)imageSensorSettings;
-(id)imageSensorSettingsForUltraWide;
-(NSArray *)techniques;
-(ARConfiguration *)templateConfiguration;
-(void)setCustomSensors:(id)arg1 ;
-(BOOL)isLightEstimationEnabled;
-(void)setProvidesAudioData:(BOOL)arg1 ;
-(void)setTechniques:(NSArray *)arg1 ;
-(void)setTemplateConfiguration:(ARConfiguration *)arg1 ;
-(void)ensureTechniqueAndCustomSensorCompatibility;
-(void)configureRecordingTechnique;
-(void)_updateCaptureSettings;
@end

