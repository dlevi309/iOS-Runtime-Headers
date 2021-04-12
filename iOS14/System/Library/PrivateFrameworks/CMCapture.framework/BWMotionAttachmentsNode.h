/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@class NSDictionary, BWNodeOutput, BWLimitedGMErrorLogger;

@interface BWMotionAttachmentsNode : BWNode {

	OpaqueFigSampleBufferProcessorRef _sampleBufferProcessor;
	NSDictionary* _optionsDict;
	BWNodeOutput* _sourceVideoWithMotionAttachmentsOutput;
	BWNodeOutput* _offlineVISMotionDataOutput;
	BWLimitedGMErrorLogger* _limitedGMErrorLogger;
	BOOL _adjustsValidBufferRectForD54p;

}

@property (nonatomic,readonly) BWNodeOutput * sourceVideoWithMotionAttachmentsOutput;              //@synthesize sourceVideoWithMotionAttachmentsOutput=_sourceVideoWithMotionAttachmentsOutput - In the implementation block
@property (nonatomic,readonly) BWNodeOutput * offlineVISMotionDataOutput;                          //@synthesize offlineVISMotionDataOutput=_offlineVISMotionDataOutput - In the implementation block
@property (assign,nonatomic) BOOL adjustsValidBufferRectForD54p;                                   //@synthesize adjustsValidBufferRectForD54p=_adjustsValidBufferRectForD54p - In the implementation block
+(void)initialize;
-(int)_setupSampleBufferProcessor;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeType;
-(id)nodeSubType;
-(BOOL)adjustsValidBufferRectForD54p;
-(void)setAdjustsValidBufferRectForD54p:(BOOL)arg1 ;
-(BWNodeOutput *)sourceVideoWithMotionAttachmentsOutput;
-(BWNodeOutput *)offlineVISMotionDataOutput;
-(id)initWithSensorIDDictionaryByPortType:(id)arg1 cameraModuleInfoByPortType:(id)arg2 tuningParameters:(id)arg3 activePortTypes:(id)arg4 horizontalSensorBinningFactor:(int)arg5 verticalSensorBinningFactor:(int)arg6 maxSupportedFrameRate:(float)arg7 motionAttachmentsMode:(int)arg8 motionAttachmentsSource:(int)arg9 motionCallbackThreadPriority:(unsigned)arg10 provideSourceVideoWithMotionAttachmentsOutput:(BOOL)arg11 provideOfflineVISMotionDataOutput:(BOOL)arg12 ;
-(void)_flushIfRequiredForMarkerBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)dealloc;
@end

