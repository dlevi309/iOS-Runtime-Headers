/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
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
-(FigCaptureSourceConfiguration *)cameraConfiguration;
-(id)initWithVideoDataConnectionConfiguration:(id)arg1 metadataObjectConnectionConfiguration:(id)arg2 sourceDeviceType:(int)arg3 ;
-(FigVideoCaptureConnectionConfiguration *)videoDataConnectionConfiguration;
-(FigMetadataObjectCaptureConnectionConfiguration *)metadataObjectConnectionConfiguration;
-(int)sourceDeviceType;
-(void)dealloc;
@end

