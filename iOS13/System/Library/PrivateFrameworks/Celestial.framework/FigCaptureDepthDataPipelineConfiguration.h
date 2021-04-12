/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@class FigDepthDataCaptureConnectionConfiguration, FigVideoCaptureConnectionConfiguration, BWPipelineStage, NSNumber, NSDictionary, FigCaptureSourceVideoFormat;

@interface FigCaptureDepthDataPipelineConfiguration : NSObject {

	FigDepthDataCaptureConnectionConfiguration* _depthDataConnectionConfiguration;
	FigVideoCaptureConnectionConfiguration* _videoDataConnectionConfiguration;
	BOOL _depthConvertedUpstream;
	BOOL _videoAndConvertedDepthDataOutputEnabled;
	BWPipelineStage* _pipelineStage;
	NSNumber* _clientPID;
	int _depthDataBaseRotationDegrees;
	NSDictionary* _cameraInfoByPortType;
	FigCaptureSourceVideoFormat* _requiredFormat;

}

@property (nonatomic,retain) FigDepthDataCaptureConnectionConfiguration * depthDataConnectionConfiguration;              //@synthesize depthDataConnectionConfiguration=_depthDataConnectionConfiguration - In the implementation block
@property (nonatomic,retain) FigVideoCaptureConnectionConfiguration * videoDataConnectionConfiguration;                  //@synthesize videoDataConnectionConfiguration=_videoDataConnectionConfiguration - In the implementation block
@property (assign,nonatomic) BOOL depthConvertedUpstream;                                                                //@synthesize depthConvertedUpstream=_depthConvertedUpstream - In the implementation block
@property (assign,nonatomic) BOOL videoAndConvertedDepthDataOutputEnabled;                                               //@synthesize videoAndConvertedDepthDataOutputEnabled=_videoAndConvertedDepthDataOutputEnabled - In the implementation block
@property (assign,nonatomic) int depthDataBaseRotationDegrees;                                                           //@synthesize depthDataBaseRotationDegrees=_depthDataBaseRotationDegrees - In the implementation block
@property (nonatomic,retain) BWPipelineStage * pipelineStage;                                                            //@synthesize pipelineStage=_pipelineStage - In the implementation block
@property (nonatomic,retain) NSNumber * clientPID;                                                                       //@synthesize clientPID=_clientPID - In the implementation block
@property (nonatomic,retain) NSDictionary * cameraInfoByPortType;                                                        //@synthesize cameraInfoByPortType=_cameraInfoByPortType - In the implementation block
@property (nonatomic,retain) FigCaptureSourceVideoFormat * requiredFormat;                                               //@synthesize requiredFormat=_requiredFormat - In the implementation block
-(void)dealloc;
-(void)setRequiredFormat:(FigCaptureSourceVideoFormat *)arg1 ;
-(FigCaptureSourceVideoFormat *)requiredFormat;
-(FigDepthDataCaptureConnectionConfiguration *)depthDataConnectionConfiguration;
-(FigVideoCaptureConnectionConfiguration *)videoDataConnectionConfiguration;
-(void)setVideoDataConnectionConfiguration:(FigVideoCaptureConnectionConfiguration *)arg1 ;
-(NSNumber *)clientPID;
-(void)setClientPID:(NSNumber *)arg1 ;
-(void)setDepthDataConnectionConfiguration:(FigDepthDataCaptureConnectionConfiguration *)arg1 ;
-(BWPipelineStage *)pipelineStage;
-(void)setDepthConvertedUpstream:(BOOL)arg1 ;
-(void)setVideoAndConvertedDepthDataOutputEnabled:(BOOL)arg1 ;
-(void)setDepthDataBaseRotationDegrees:(int)arg1 ;
-(void)setPipelineStage:(BWPipelineStage *)arg1 ;
-(void)setCameraInfoByPortType:(NSDictionary *)arg1 ;
-(BOOL)depthConvertedUpstream;
-(BOOL)videoAndConvertedDepthDataOutputEnabled;
-(int)depthDataBaseRotationDegrees;
-(NSDictionary *)cameraInfoByPortType;
@end

