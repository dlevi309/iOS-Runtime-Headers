/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWSinkNode.h>

@interface BWStillImageSampleBufferSinkNode : BWSinkNode {

	/*^block*/id _sampleBufferAvailableHandler;
	BOOL _aggdIsPhotoFormat;
	BOOL _clientIsCameraOrDerivative;
	BOOL _aggdIsTimeLapse;
	BOOL _captureTimePhotosCurationSupported;
	long long _lastCaptureRequestTime;

}

@property (nonatomic,copy) id sampleBufferAvailableHandler;              //@synthesize sampleBufferAvailableHandler=_sampleBufferAvailableHandler - In the implementation block
+(void)initialize;
+(id)_inferenceTypesForClientMetadata;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(void)setCaptureTimePhotosCurationSupported:(BOOL)arg1 ;
-(void)setClientIsCameraOrDerivative:(BOOL)arg1 ;
-(id)nodeSubType;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(void)_reportAggdDataWithRequestedStillImageSettings:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2 sbuf:(opaqueCMSampleBufferRef)arg3 ;
-(void)setSampleBufferAvailableHandler:(id)arg1 ;
-(void)_reportCoreAnalyticsDataWithRequestedStillImageSettings:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2 sbuf:(opaqueCMSampleBufferRef)arg3 ;
-(void)_attachPrivateClientMetadataToSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(id)_newFilteredDetectedObjectsInfoFromDetectedObjectsInfo:(id)arg1 ;
-(id)initWithInputMediaType:(unsigned)arg1 sinkID:(id)arg2 ;
-(BOOL)aggdIsPhotoFormat;
-(void)setAggdIsTimeLapse:(BOOL)arg1 ;
-(id)sampleBufferAvailableHandler;
-(id)initWithSinkID:(id)arg1 ;
-(void)setAggdIsPhotoFormat:(BOOL)arg1 ;
-(BOOL)aggdIsTimeLapse;
-(BOOL)clientIsCameraOrDerivative;
-(BOOL)captureTimePhotosCurationSupported;
-(void)dealloc;
@end

