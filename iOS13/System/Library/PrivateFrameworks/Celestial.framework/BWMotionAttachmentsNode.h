/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@class NSDictionary, BWNodeOutput, NSString, BWLimitedGMErrorLogger;

@interface BWMotionAttachmentsNode : BWNode {

	OpaqueFigSampleBufferProcessorRef _sampleBufferProcessor;
	NSDictionary* _optionsDict;
	BWNodeOutput* _sourceVideoWithMotionAttachmentsOutput;
	BWNodeOutput* _offlineVISMotionDataOutput;
	NSString* _attachedMediaKeyToProcess;
	BWLimitedGMErrorLogger* _limitedGMErrorLogger;
	BOOL _attachedMediaStreamForcedOff;

}

@property (nonatomic,readonly) BWNodeOutput * sourceVideoWithMotionAttachmentsOutput;              //@synthesize sourceVideoWithMotionAttachmentsOutput=_sourceVideoWithMotionAttachmentsOutput - In the implementation block
@property (nonatomic,readonly) BWNodeOutput * offlineVISMotionDataOutput;                          //@synthesize offlineVISMotionDataOutput=_offlineVISMotionDataOutput - In the implementation block
+(void)initialize;
-(void)dealloc;
-(id)nodeType;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(id)initWithSensorIDDictionaryByPortType:(id)arg1 cameraModuleInfoByPortType:(id)arg2 tuningParameters:(id)arg3 activePortTypes:(id)arg4 horizontalSensorBinningFactor:(int)arg5 verticalSensorBinningFactor:(int)arg6 maxSupportedFrameRate:(float)arg7 motionAttachmentsMode:(int)arg8 motionAttachmentsSource:(int)arg9 motionCallbackThreadPriority:(unsigned)arg10 provideSourceVideoWithMotionAttachmentsOutput:(BOOL)arg11 provideOfflineVISMotionDataOutput:(BOOL)arg12 ;
-(void)setAttachedMediaKeyToProcess:(id)arg1 ;
-(BWNodeOutput *)sourceVideoWithMotionAttachmentsOutput;
-(BWNodeOutput *)offlineVISMotionDataOutput;
-(int)_setupSampleBufferProcessor;
-(void)_flushIfRequiredForMarkerBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_emitSampleBuffer:(opaqueCMSampleBufferRef)arg1 output:(id)arg2 ;
-(id)attachedMediaKeyToProcess;
@end

