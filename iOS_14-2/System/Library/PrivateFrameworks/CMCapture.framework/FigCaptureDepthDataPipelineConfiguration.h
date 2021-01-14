/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


#import <CMCapture/CMCapture-Structs.h>
@class FigDepthDataCaptureConnectionConfiguration, FigVideoCaptureConnectionConfiguration, BWPipelineStage, NSDictionary, FigCaptureSourceVideoFormat;

@interface FigCaptureDepthDataPipelineConfiguration : NSObject {

	FigDepthDataCaptureConnectionConfiguration* _depthDataConnectionConfiguration;
	FigVideoCaptureConnectionConfiguration* _videoDataConnectionConfiguration;
	BOOL _depthConvertedUpstream;
	BOOL _hardwareDepthFilteringEnabled;
	BOOL _videoAndConvertedDepthDataOutputEnabled;
	BWPipelineStage* _pipelineStage;
	SCD_Struct_Fi80 _clientAuditToken;
	int _depthDataBaseRotationDegrees;
	NSDictionary* _cameraInfoByPortType;
	FigCaptureSourceVideoFormat* _requiredFormat;

}

@property (nonatomic,retain) FigDepthDataCaptureConnectionConfiguration * depthDataConnectionConfiguration;              //@synthesize depthDataConnectionConfiguration=_depthDataConnectionConfiguration - In the implementation block
@property (nonatomic,retain) FigVideoCaptureConnectionConfiguration * videoDataConnectionConfiguration;                  //@synthesize videoDataConnectionConfiguration=_videoDataConnectionConfiguration - In the implementation block
@property (assign,nonatomic) BOOL depthConvertedUpstream;                                                                //@synthesize depthConvertedUpstream=_depthConvertedUpstream - In the implementation block
@property (assign,nonatomic) BOOL hardwareDepthFilteringEnabled;                                                         //@synthesize hardwareDepthFilteringEnabled=_hardwareDepthFilteringEnabled - In the implementation block
@property (assign,nonatomic) BOOL videoAndConvertedDepthDataOutputEnabled;                                               //@synthesize videoAndConvertedDepthDataOutputEnabled=_videoAndConvertedDepthDataOutputEnabled - In the implementation block
@property (assign,nonatomic) int depthDataBaseRotationDegrees;                                                           //@synthesize depthDataBaseRotationDegrees=_depthDataBaseRotationDegrees - In the implementation block
@property (nonatomic,retain) BWPipelineStage * pipelineStage;                                                            //@synthesize pipelineStage=_pipelineStage - In the implementation block
@property (assign,nonatomic) SCD_Struct_Fi80 clientAuditToken;                                                           //@synthesize clientAuditToken=_clientAuditToken - In the implementation block
@property (nonatomic,retain) NSDictionary * cameraInfoByPortType;                                                        //@synthesize cameraInfoByPortType=_cameraInfoByPortType - In the implementation block
@property (nonatomic,retain) FigCaptureSourceVideoFormat * requiredFormat;                                               //@synthesize requiredFormat=_requiredFormat - In the implementation block
-(FigDepthDataCaptureConnectionConfiguration *)depthDataConnectionConfiguration;
-(BOOL)hardwareDepthFilteringEnabled;
-(void)setVideoDataConnectionConfiguration:(FigVideoCaptureConnectionConfiguration *)arg1 ;
-(NSDictionary *)cameraInfoByPortType;
-(void)setCameraInfoByPortType:(NSDictionary *)arg1 ;
-(void)setClientAuditToken:(SCD_Struct_Fi80)arg1 ;
-(FigVideoCaptureConnectionConfiguration *)videoDataConnectionConfiguration;
-(void)setRequiredFormat:(FigCaptureSourceVideoFormat *)arg1 ;
-(FigCaptureSourceVideoFormat *)requiredFormat;
-(void)setDepthConvertedUpstream:(BOOL)arg1 ;
-(void)setDepthDataBaseRotationDegrees:(int)arg1 ;
-(SCD_Struct_Fi80)clientAuditToken;
-(void)setVideoAndConvertedDepthDataOutputEnabled:(BOOL)arg1 ;
-(void)setPipelineStage:(BWPipelineStage *)arg1 ;
-(void)setHardwareDepthFilteringEnabled:(BOOL)arg1 ;
-(BOOL)depthConvertedUpstream;
-(BOOL)videoAndConvertedDepthDataOutputEnabled;
-(int)depthDataBaseRotationDegrees;
-(BWPipelineStage *)pipelineStage;
-(void)setDepthDataConnectionConfiguration:(FigDepthDataCaptureConnectionConfiguration *)arg1 ;
-(void)dealloc;
@end

