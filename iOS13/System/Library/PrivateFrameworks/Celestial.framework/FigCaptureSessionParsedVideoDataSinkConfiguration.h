/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@class FigVideoCaptureConnectionConfiguration, FigMetadataObjectCaptureConnectionConfiguration, FigCaptureSourceConfiguration;

@interface FigCaptureSessionParsedVideoDataSinkConfiguration : NSObject {

	FigVideoCaptureConnectionConfiguration* _videoDataConnectionConfiguration;
	FigMetadataObjectCaptureConnectionConfiguration* _metadataObjectConnectionConfiguration;
	FigCaptureSourceConfiguration* _cameraConfiguration;
	int _sourceDeviceType;

}

@property (nonatomic,readonly) FigVideoCaptureConnectionConfiguration * videoDataConnectionConfiguration;                            //@synthesize videoDataConnectionConfiguration=_videoDataConnectionConfiguration - In the implementation block
@property (nonatomic,readonly) FigMetadataObjectCaptureConnectionConfiguration * metadataObjectConnectionConfiguration;              //@synthesize metadataObjectConnectionConfiguration=_metadataObjectConnectionConfiguration - In the implementation block
@property (nonatomic,readonly) FigCaptureSourceConfiguration * cameraConfiguration;                                                  //@synthesize cameraConfiguration=_cameraConfiguration - In the implementation block
@property (nonatomic,readonly) int sourceDeviceType;                                                                                 //@synthesize sourceDeviceType=_sourceDeviceType - In the implementation block
-(void)dealloc;
-(int)sourceDeviceType;
-(FigCaptureSourceConfiguration *)cameraConfiguration;
-(FigVideoCaptureConnectionConfiguration *)videoDataConnectionConfiguration;
-(FigMetadataObjectCaptureConnectionConfiguration *)metadataObjectConnectionConfiguration;
-(id)initWithVideoDataConnectionConfiguration:(id)arg1 metadataObjectConnectionConfiguration:(id)arg2 sourceDeviceType:(int)arg3 ;
@end

