/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@class BWStillImageNodeConfiguration, BWSensorConfiguration, FigFocusPixelDisparityGenerator;

@interface BWStillImageFocusPixelDisparityNode : BWNode {

	BWStillImageNodeConfiguration* _nodeConfiguration;
	BWSensorConfiguration* _sensorConfiguration;
	FigFocusPixelDisparityGenerator* _focusPixelDisparityGenerator;
	opaqueCMFormatDescriptionRef _disparityFormatDescription;
	SCD_Struct_BW69 _identityExtrinsicMatrix;
	float _pixelSizeInMm;
	BOOL _depthIsAlwaysHighQuality;

}
+(void)initialize;
-(void)dealloc;
-(id)nodeType;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3 ;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(id)initWithNodeConfiguration:(id)arg1 sensorConfiguration:(id)arg2 disparityMapWidth:(unsigned long long)arg3 disparityMapHeight:(unsigned long long)arg4 depthIsAlwaysHighQuality:(BOOL)arg5 ;
-(int)_loadAndConfigureDisparityGenerator;
-(void)_processDisparityForSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_removeConsumedAttachedMediaFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(id)processorOptionsForProcessorVersion:(int)arg1 ;
-(void)_attachDepthMetadataToSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
@end

