/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/FigCaptureRemoteQueueSinkPipeline.h>

@class BWMRCNode, BWPreviewHistogramNode, BWFaceTrackingNode, BWFaceDetectionNode, NSString, NSArray;

@interface FigCaptureMetadataSinkPipeline : FigCaptureRemoteQueueSinkPipeline {

	BWMRCNode* _mrcNode;
	BOOL _mrcSuspended;
	BOOL _mrcConnectionDisabled;
	BWPreviewHistogramNode* _previewHistogramNode;
	BWFaceTrackingNode* _faceTrackingNode;
	BWFaceDetectionNode* _faceDetectionNode;
	NSString* _sourceID;
	int _sourceDeviceType;

}

@property (nonatomic,readonly) NSString * sourceID;                                                  //@synthesize sourceID=_sourceID - In the implementation block
@property (nonatomic,readonly) int sourceDeviceType;                                                 //@synthesize sourceDeviceType=_sourceDeviceType - In the implementation block
@property (nonatomic,readonly) BOOL mrcLowPowerModeEnabled; 
@property (nonatomic,readonly) NSArray * detectedObjectBoxedMetadataOutputs; 
@property (nonatomic,readonly) id<BWQRCodeSceneObserver> qrCodeSceneObserver; 
@property (assign,nonatomic) BOOL discardsMRCSampleData; 
@property (assign,getter=isMRCSuspended,nonatomic) BOOL mrcSuspended;                                //@synthesize mrcSuspended=_mrcSuspended - In the implementation block
@property (assign,getter=isMRCConnectionDisabled,nonatomic) BOOL mrcConnectionDisabled;              //@synthesize mrcConnectionDisabled=_mrcConnectionDisabled - In the implementation block
@property (assign,nonatomic) BOOL discardsFaceDetectionSampleData; 
@property (assign,nonatomic) BOOL discardsFaceTrackingSampleData; 
+(void)initialize;
-(BOOL)mrcLowPowerModeEnabled;
-(void)setDiscardsFaceTrackingSampleData:(BOOL)arg1 ;
-(BOOL)discardsFaceTrackingSampleData;
-(NSArray *)detectedObjectBoxedMetadataOutputs;
-(BOOL)discardsMRCSampleData;
-(void)setMrcSuspended:(BOOL)arg1 ;
-(BOOL)isMRCConnectionDisabled;
-(int)_buildMetadataSinkPipeline:(id)arg1 graph:(id)arg2 videoPreviewOutput:(id)arg3 offlineVISMotionDataSourceOutput:(id)arg4 objectDetectionSourceOutput:(id)arg5 faceTrackingSourceOutput:(id)arg6 captureDevice:(id)arg7 faceTrackingPipelineStage:(id)arg8 clientAuditToken:(SCD_Struct_Fi80)arg9 delegate:(id)arg10 ;
-(BOOL)isMRCSsuspended;
-(BOOL)discardsFaceDetectionSampleData;
-(void)setMRCConnectionDisabled:(BOOL)arg1 ;
-(int)_buildFaceTrackingPipeline:(id)arg1 graph:(id)arg2 videoCaptureOutput:(id)arg3 pipelineStage:(id)arg4 captureDevice:(id)arg5 ;
-(void)setDiscardsFaceDetectionSampleData:(BOOL)arg1 ;
-(id<BWQRCodeSceneObserver>)qrCodeSceneObserver;
-(int)_buildPreviewHistogramSinkPipeline:(id)arg1 graph:(id)arg2 videoPreviewHistogramOutput:(id)arg3 captureDevice:(id)arg4 ;
-(void)setMRCSuspended:(BOOL)arg1 ;
-(BOOL)isMRCSuspended;
-(int)_buildMetadataObjectRemoteQueueSinkPipeline:(id)arg1 graph:(id)arg2 metadataNodeOutputs:(id)arg3 videoPreviewEnabled:(BOOL)arg4 deferredPrepareEnabled:(BOOL)arg5 delegate:(id)arg6 clientAuditToken:(SCD_Struct_Fi80)arg7 ;
-(NSString *)sourceID;
-(int)sourceDeviceType;
-(void)setRectOfInterest:(CGRect)arg1 ;
-(id)initWithConfiguration:(id)arg1 graph:(id)arg2 name:(id)arg3 videoPreviewOutput:(id)arg4 offlineVISMotionDataSourceOutput:(id)arg5 objectDetectionSourceOutput:(id)arg6 faceTrackingSourceOutput:(id)arg7 captureDevice:(id)arg8 faceTrackingPipelineStage:(id)arg9 clientAuditToken:(SCD_Struct_Fi80)arg10 delegate:(id)arg11 ;
-(int)_buildMRCSinkPipeline:(id)arg1 graph:(id)arg2 mrcSourceOutput:(id)arg3 captureDevice:(id)arg4 ;
-(void)setMrcConnectionDisabled:(BOOL)arg1 ;
-(void)dealloc;
-(void)setDiscardsMRCSampleData:(BOOL)arg1 ;
@end

