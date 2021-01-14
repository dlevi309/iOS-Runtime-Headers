/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


#import <CMCapture/CMCapture-Structs.h>
@class FigMetadataObjectCaptureConnectionConfiguration, FigVideoCaptureConnectionConfiguration, NSArray;

@interface FigCaptureMetadataSinkPipelineConfiguration : NSObject {

	FigMetadataObjectCaptureConnectionConfiguration* _metadataObjectConnectionConfiguration;
	FigVideoCaptureConnectionConfiguration* _videoDataConnectionConfiguration;
	BOOL _mrcLowPowerModeEnabled;
	BOOL _useSceneClassifierToGateQRCodeDetection;
	SCD_Struct_BW57 _smartCameraPipelineVersion;
	BOOL _deferredPrepareEnabled;
	BOOL _previewEnabled;
	int _motionAttachmentsSource;
	BOOL _boxedMetadataEnabled;
	NSArray* _detectedObjectMovieFileOutputMetadataConnectionConfigurations;

}

@property (nonatomic,retain) FigMetadataObjectCaptureConnectionConfiguration * metadataObjectConnectionConfiguration;              //@synthesize metadataObjectConnectionConfiguration=_metadataObjectConnectionConfiguration - In the implementation block
@property (nonatomic,retain) FigVideoCaptureConnectionConfiguration * videoDataConnectionConfiguration;                            //@synthesize videoDataConnectionConfiguration=_videoDataConnectionConfiguration - In the implementation block
@property (nonatomic,retain) NSArray * detectedObjectMovieFileOutputMetadataConnectionConfigurations;                              //@synthesize detectedObjectMovieFileOutputMetadataConnectionConfigurations=_detectedObjectMovieFileOutputMetadataConnectionConfigurations - In the implementation block
@property (assign,nonatomic) BOOL mrcLowPowerModeEnabled;                                                                          //@synthesize mrcLowPowerModeEnabled=_mrcLowPowerModeEnabled - In the implementation block
@property (assign,nonatomic) BOOL useSceneClassifierToGateQRCodeDetection;                                                         //@synthesize useSceneClassifierToGateQRCodeDetection=_useSceneClassifierToGateQRCodeDetection - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW57 smartCameraPipelineVersion;                                                           //@synthesize smartCameraPipelineVersion=_smartCameraPipelineVersion - In the implementation block
@property (assign,nonatomic) BOOL deferredPrepareEnabled;                                                                          //@synthesize deferredPrepareEnabled=_deferredPrepareEnabled - In the implementation block
@property (assign,nonatomic) BOOL previewEnabled;                                                                                  //@synthesize previewEnabled=_previewEnabled - In the implementation block
@property (assign,nonatomic) int motionAttachmentsSource;                                                                          //@synthesize motionAttachmentsSource=_motionAttachmentsSource - In the implementation block
@property (assign,nonatomic) BOOL boxedMetadataEnabled;                                                                            //@synthesize boxedMetadataEnabled=_boxedMetadataEnabled - In the implementation block
-(BOOL)mrcLowPowerModeEnabled;
-(void)setUseSceneClassifierToGateQRCodeDetection:(BOOL)arg1 ;
-(BOOL)previewEnabled;
-(void)setMetadataObjectConnectionConfiguration:(FigMetadataObjectCaptureConnectionConfiguration *)arg1 ;
-(void)setVideoDataConnectionConfiguration:(FigVideoCaptureConnectionConfiguration *)arg1 ;
-(void)setBoxedMetadataEnabled:(BOOL)arg1 ;
-(BOOL)useSceneClassifierToGateQRCodeDetection;
-(void)setPreviewEnabled:(BOOL)arg1 ;
-(void)setDeferredPrepareEnabled:(BOOL)arg1 ;
-(void)setSmartCameraPipelineVersion:(SCD_Struct_BW57)arg1 ;
-(FigVideoCaptureConnectionConfiguration *)videoDataConnectionConfiguration;
-(BOOL)boxedMetadataEnabled;
-(void)setMotionAttachmentsSource:(int)arg1 ;
-(FigMetadataObjectCaptureConnectionConfiguration *)metadataObjectConnectionConfiguration;
-(SCD_Struct_BW57)smartCameraPipelineVersion;
-(void)setMrcLowPowerModeEnabled:(BOOL)arg1 ;
-(void)setDetectedObjectMovieFileOutputMetadataConnectionConfigurations:(NSArray *)arg1 ;
-(NSArray *)detectedObjectMovieFileOutputMetadataConnectionConfigurations;
-(int)motionAttachmentsSource;
-(BOOL)deferredPrepareEnabled;
-(void)dealloc;
@end

