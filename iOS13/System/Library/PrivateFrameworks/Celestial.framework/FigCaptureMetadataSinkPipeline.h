/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigCaptureRemoteQueueSinkPipeline.h>

@class BWMRCNode, BWFaceDetectionNode, BWFaceTrackingNode, NSString, NSArray;

@interface FigCaptureMetadataSinkPipeline : FigCaptureRemoteQueueSinkPipeline {

	BWMRCNode* _mrcNode;
	BOOL _mrcSuspended;
	BOOL _mrcConnectionDisabled;
	BWFaceDetectionNode* _faceDetectionNode;
	BWFaceTrackingNode* _faceTrackingNode;
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
-(void)dealloc;
-(NSString *)sourceID;
-(int)sourceDeviceType;
-(void)setRectOfInterest:(CGRect)arg1 ;
-(void)setDiscardsMRCSampleData:(BOOL)arg1 ;
-(void)setDiscardsFaceDetectionSampleData:(BOOL)arg1 ;
-(void)setDiscardsFaceTrackingSampleData:(BOOL)arg1 ;
-(id)initWithConfiguration:(id)arg1 graph:(id)arg2 name:(id)arg3 mrcSourceOutput:(id)arg4 offlineVISMotionDataSourceOutput:(id)arg5 objectDetectionSourceOutput:(id)arg6 faceTrackingSourceOutput:(id)arg7 captureDevice:(id)arg8 faceTrackingPipelineStage:(id)arg9 clientPID:(id)arg10 delegate:(id)arg11 ;
-(NSArray *)detectedObjectBoxedMetadataOutputs;
-(id<BWQRCodeSceneObserver>)qrCodeSceneObserver;
-(BOOL)mrcLowPowerModeEnabled;
-(void)setMrcSuspended:(BOOL)arg1 ;
-(int)_buildMetadataSinkPipeline:(id)arg1 graph:(id)arg2 mrcSourceOutput:(id)arg3 offlineVISMotionDataSourceOutput:(id)arg4 objectDetectionSourceOutput:(id)arg5 faceTrackingSourceOutput:(id)arg6 captureDevice:(id)arg7 faceTrackingPipelineStage:(id)arg8 clientPID:(id)arg9 delegate:(id)arg10 ;
-(int)_buildMRCSinkPipeline:(id)arg1 graph:(id)arg2 mrcSourceOutput:(id)arg3 captureDevice:(id)arg4 ;
-(int)_buildFaceTrackingPipeline:(id)arg1 graph:(id)arg2 videoCaptureOutput:(id)arg3 pipelineStage:(id)arg4 captureDevice:(id)arg5 ;
-(int)_buildMetadataObjectRemoteQueueSinkPipeline:(id)arg1 graph:(id)arg2 metadataNodeOutputs:(id)arg3 videoPreviewEnabled:(BOOL)arg4 deferredPrepareEnabled:(BOOL)arg5 delegate:(id)arg6 clientPID:(id)arg7 ;
-(BOOL)discardsMRCSampleData;
-(void)setMRCSuspended:(BOOL)arg1 ;
-(BOOL)isMRCSsuspended;
-(void)setMRCConnectionDisabled:(BOOL)arg1 ;
-(BOOL)isMRCConnectionDisabled;
-(BOOL)discardsFaceDetectionSampleData;
-(BOOL)discardsFaceTrackingSampleData;
-(BOOL)isMRCSuspended;
-(void)setMrcConnectionDisabled:(BOOL)arg1 ;
@end

