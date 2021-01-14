/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@class BWStillImageNodeConfiguration, BWSensorConfiguration, FigFocusPixelDisparityGenerator;

@interface BWStillImageFocusPixelDisparityNode : BWNode {

	BWStillImageNodeConfiguration* _nodeConfiguration;
	BWSensorConfiguration* _sensorConfiguration;
	FigFocusPixelDisparityGenerator* _focusPixelDisparityGenerator;
	opaqueCMFormatDescriptionRef _disparityFormatDescription;
	SCD_Struct_BW14 _identityExtrinsicMatrix;
	float _pixelSizeInMm;
	BOOL _depthIsAlwaysHighQuality;

}
+(void)initialize;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(id)nodeType;
-(id)nodeSubType;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3 ;
-(int)_loadAndConfigureDisparityGenerator;
-(void)_processDisparityForSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_removeConsumedAttachedMediaFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(id)processorOptionsForProcessorVersion:(int)arg1 ;
-(void)_attachDepthMetadataToSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(id)initWithNodeConfiguration:(id)arg1 sensorConfiguration:(id)arg2 disparityMapWidth:(unsigned long long)arg3 disparityMapHeight:(unsigned long long)arg4 depthIsAlwaysHighQuality:(BOOL)arg5 ;
-(void)dealloc;
@end

