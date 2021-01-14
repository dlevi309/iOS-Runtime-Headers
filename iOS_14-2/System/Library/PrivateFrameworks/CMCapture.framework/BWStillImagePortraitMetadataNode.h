/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@class NSDictionary, FigSDOFRenderingTuningParameters;

@interface BWStillImagePortraitMetadataNode : BWNode {

	NSDictionary* _sensorIDDictionary;
	NSDictionary* _cameraInfoByPortType;
	FigSDOFRenderingTuningParameters* _sdofTuningParams;
	int _renderingBundleVersion;

}
+(void)initialize;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(int)_loadAndConfigureSDOFRenderering;
-(void)_attachPortraitLightingEffectMetadataToDepthMetadata:(id)arg1 ;
-(id)initWithSensorIDDictionary:(id)arg1 cameraInfoByPortType:(id)arg2 ;
-(void)dealloc;
@end

