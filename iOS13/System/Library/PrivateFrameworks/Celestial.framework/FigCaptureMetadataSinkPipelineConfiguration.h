/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


#import <Celestial/Celestial-Structs.h>
@class FigMetadataObjectCaptureConnectionConfiguration, FigVideoCaptureConnectionConfiguration, NSArray;

@interface FigCaptureMetadataSinkPipelineConfiguration : NSObject {

	FigMetadataObjectCaptureConnectionConfiguration* _metadataObjectConnectionConfiguration;
	FigVideoCaptureConnectionConfiguration* _videoDataConnectionConfiguration;
	BOOL _mrcLowPowerModeEnabled;
	BOOL _useSceneClassifierToGateQRCodeDetection;
	SCD_Struct_BW94 _smartCameraPipelineVersion;
	BOOL _deferredPrepareEnabled;
	BOOL _previewEnabled;
	int _motionAttachmentsSource;
	NSArray* _detectedObjectMovieFileOutputMetadataConnectionConfigurations;

}

@property (nonatomic,retain) FigMetadataObjectCaptureConnectionConfiguration * metadataObjectConnectionConfiguration;              //@synthesize metadataObjectConnectionConfiguration=_metadataObjectConnectionConfiguration - In the implementation block
@property (nonatomic,retain) FigVideoCaptureConnectionConfiguration * videoDataConnectionConfiguration;                            //@synthesize videoDataConnectionConfiguration=_videoDataConnectionConfiguration - In the implementation block
@property (nonatomic,retain) NSArray * detectedObjectMovieFileOutputMetadataConnectionConfigurations;                              //@synthesize detectedObjectMovieFileOutputMetadataConnectionConfigurations=_detectedObjectMovieFileOutputMetadataConnectionConfigurations - In the implementation block
@property (assign,nonatomic) BOOL mrcLowPowerModeEnabled;                                                                          //@synthesize mrcLowPowerModeEnabled=_mrcLowPowerModeEnabled - In the implementation block
@property (assign,nonatomic) BOOL useSceneClassifierToGateQRCodeDetection;                                                         //@synthesize useSceneClassifierToGateQRCodeDetection=_useSceneClassifierToGateQRCodeDetection - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW94 smartCameraPipelineVersion;                                                           //@synthesize smartCameraPipelineVersion=_smartCameraPipelineVersion - In the implementation block
@property (assign,nonatomic) BOOL deferredPrepareEnabled;                                                                          //@synthesize deferredPrepareEnabled=_deferredPrepareEnabled - In the implementation block
@property (assign,nonatomic) BOOL previewEnabled;                                                                                  //@synthesize previewEnabled=_previewEnabled - In the implementation block
@property (assign,nonatomic) int motionAttachmentsSource;                                                                          //@synthesize motionAttachmentsSource=_motionAttachmentsSource - In the implementation block
-(void)dealloc;
-(void)setPreviewEnabled:(BOOL)arg1 ;
-(BOOL)previewEnabled;
-(FigVideoCaptureConnectionConfiguration *)videoDataConnectionConfiguration;
-(FigMetadataObjectCaptureConnectionConfiguration *)metadataObjectConnectionConfiguration;
-(int)motionAttachmentsSource;
-(void)setMotionAttachmentsSource:(int)arg1 ;
-(void)setVideoDataConnectionConfiguration:(FigVideoCaptureConnectionConfiguration *)arg1 ;
-(void)setMetadataObjectConnectionConfiguration:(FigMetadataObjectCaptureConnectionConfiguration *)arg1 ;
-(void)setDeferredPrepareEnabled:(BOOL)arg1 ;
-(BOOL)mrcLowPowerModeEnabled;
-(void)setMrcLowPowerModeEnabled:(BOOL)arg1 ;
-(void)setUseSceneClassifierToGateQRCodeDetection:(BOOL)arg1 ;
-(void)setSmartCameraPipelineVersion:(SCD_Struct_BW94)arg1 ;
-(void)setDetectedObjectMovieFileOutputMetadataConnectionConfigurations:(NSArray *)arg1 ;
-(SCD_Struct_BW94)smartCameraPipelineVersion;
-(BOOL)useSceneClassifierToGateQRCodeDetection;
-(BOOL)deferredPrepareEnabled;
-(NSArray *)detectedObjectMovieFileOutputMetadataConnectionConfigurations;
@end

