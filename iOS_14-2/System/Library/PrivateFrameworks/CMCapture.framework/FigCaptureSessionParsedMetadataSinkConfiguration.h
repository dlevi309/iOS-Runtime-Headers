/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@class FigMetadataObjectCaptureConnectionConfiguration, FigVideoCaptureConnectionConfiguration, NSArray;

@interface FigCaptureSessionParsedMetadataSinkConfiguration : NSObject {

	FigMetadataObjectCaptureConnectionConfiguration* _metadataObjectConnectionConfiguration;
	FigVideoCaptureConnectionConfiguration* _sceneClassifierConnectionConfiguration;
	FigVideoCaptureConnectionConfiguration* _videoDataConnectionConfiguration;
	FigVideoCaptureConnectionConfiguration* _videoPreviewSinkConnectionConfiguration;
	FigVideoCaptureConnectionConfiguration* _movieFileVideoConnectionConfiguration;
	NSArray* _movieFileDetectedObjectMetadataConnectionConfigurations;

}

@property (nonatomic,readonly) FigMetadataObjectCaptureConnectionConfiguration * metadataObjectConnectionConfiguration;              //@synthesize metadataObjectConnectionConfiguration=_metadataObjectConnectionConfiguration - In the implementation block
@property (nonatomic,readonly) FigVideoCaptureConnectionConfiguration * sceneClassifierConnectionConfiguration;                      //@synthesize sceneClassifierConnectionConfiguration=_sceneClassifierConnectionConfiguration - In the implementation block
@property (nonatomic,readonly) FigVideoCaptureConnectionConfiguration * videoDataConnectionConfiguration;                            //@synthesize videoDataConnectionConfiguration=_videoDataConnectionConfiguration - In the implementation block
@property (nonatomic,readonly) FigVideoCaptureConnectionConfiguration * videoPreviewSinkConnectionConfiguration;                     //@synthesize videoPreviewSinkConnectionConfiguration=_videoPreviewSinkConnectionConfiguration - In the implementation block
@property (nonatomic,readonly) FigVideoCaptureConnectionConfiguration * movieFileVideoConnectionConfiguration;                       //@synthesize movieFileVideoConnectionConfiguration=_movieFileVideoConnectionConfiguration - In the implementation block
@property (nonatomic,readonly) NSArray * movieFileDetectedObjectMetadataConnectionConfigurations;                                    //@synthesize movieFileDetectedObjectMetadataConnectionConfigurations=_movieFileDetectedObjectMetadataConnectionConfigurations - In the implementation block
-(NSArray *)movieFileDetectedObjectMetadataConnectionConfigurations;
-(FigVideoCaptureConnectionConfiguration *)movieFileVideoConnectionConfiguration;
-(FigVideoCaptureConnectionConfiguration *)videoPreviewSinkConnectionConfiguration;
-(FigVideoCaptureConnectionConfiguration *)sceneClassifierConnectionConfiguration;
-(FigVideoCaptureConnectionConfiguration *)videoDataConnectionConfiguration;
-(FigMetadataObjectCaptureConnectionConfiguration *)metadataObjectConnectionConfiguration;
-(id)initWithMetadataObjectConnectionConfiguration:(id)arg1 sceneClassifierConnectionConfiguration:(id)arg2 videoDataConnectionConfiguration:(id)arg3 videoPreviewSinkConnectionConfiguration:(id)arg4 movieFileVideoConnectionConfiguration:(id)arg5 movieFileDetectedObjectMetadataConnectionConfigurations:(id)arg6 ;
-(void)dealloc;
@end

