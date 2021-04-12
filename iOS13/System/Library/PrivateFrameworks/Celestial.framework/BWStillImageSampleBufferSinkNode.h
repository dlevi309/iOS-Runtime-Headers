/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWSinkNode.h>

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
-(void)dealloc;
-(id)initWithSinkID:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(void)setClientIsCameraOrDerivative:(BOOL)arg1 ;
-(void)setCaptureTimePhotosCurationSupported:(BOOL)arg1 ;
-(BOOL)clientIsCameraOrDerivative;
-(void)setAggdIsPhotoFormat:(BOOL)arg1 ;
-(void)setAggdIsTimeLapse:(BOOL)arg1 ;
-(void)setSampleBufferAvailableHandler:(id)arg1 ;
-(BOOL)captureTimePhotosCurationSupported;
-(id)initWithInputMediaType:(unsigned)arg1 sinkID:(id)arg2 ;
-(void)_attachPrivateClientMetadataToSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_reportAggdDataWithRequestedStillImageSettings:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2 sbuf:(opaqueCMSampleBufferRef)arg3 ;
-(void)_reportCoreAnalyticsDataWithRequestedStillImageSettings:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2 sbuf:(opaqueCMSampleBufferRef)arg3 ;
-(id)_newFilteredDetectedObjectsInfoFromDetectedObjectsInfo:(id)arg1 ;
-(BOOL)aggdIsPhotoFormat;
-(BOOL)aggdIsTimeLapse;
-(id)sampleBufferAvailableHandler;
@end

