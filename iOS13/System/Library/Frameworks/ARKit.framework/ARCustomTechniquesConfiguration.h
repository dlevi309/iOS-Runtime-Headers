/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARConfiguration.h>

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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initPrivate;
-(void)setVideoFormat:(id)arg1 ;
-(void)setCameraPosition:(long long)arg1 ;
-(NSArray *)techniques;
-(ARWorldMap *)initialWorldMap;
-(long long)worldAlignment;
-(id)imageSensorSettings;
-(id)imageSensorSettingsForUltraWide;
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

