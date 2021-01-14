/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@class FigDepthDataCaptureConnectionConfiguration, FigVideoCaptureConnectionConfiguration, FigMetadataObjectCaptureConnectionConfiguration;

@interface FigCaptureSessionParsedDepthDataSinkConfiguration : NSObject {

	FigDepthDataCaptureConnectionConfiguration* _depthDataConnectionConfiguration;
	FigVideoCaptureConnectionConfiguration* _videoDataConnectionConfiguration;
	FigMetadataObjectCaptureConnectionConfiguration* _metadataObjectConnectionConfiguration;

}

@property (nonatomic,readonly) FigDepthDataCaptureConnectionConfiguration * depthDataConnectionConfiguration;                        //@synthesize depthDataConnectionConfiguration=_depthDataConnectionConfiguration - In the implementation block
@property (nonatomic,readonly) FigVideoCaptureConnectionConfiguration * videoDataConnectionConfiguration;                            //@synthesize videoDataConnectionConfiguration=_videoDataConnectionConfiguration - In the implementation block
@property (nonatomic,readonly) FigMetadataObjectCaptureConnectionConfiguration * metadataObjectConnectionConfiguration;              //@synthesize metadataObjectConnectionConfiguration=_metadataObjectConnectionConfiguration - In the implementation block
-(FigDepthDataCaptureConnectionConfiguration *)depthDataConnectionConfiguration;
-(id)initWithDepthDataConnectionConfiguration:(id)arg1 videoDataConnectionConfiguration:(id)arg2 metadataObjectConnectionConfiguration:(id)arg3 ;
-(FigVideoCaptureConnectionConfiguration *)videoDataConnectionConfiguration;
-(FigMetadataObjectCaptureConnectionConfiguration *)metadataObjectConnectionConfiguration;
-(void)dealloc;
@end

