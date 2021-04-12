/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@class FigMetadataObjectCaptureConnectionConfiguration, FigVideoCaptureConnectionConfiguration, NSArray;

@interface FigCaptureSessionParsedMetadataSinkConfiguration : NSObject {

	FigMetadataObjectCaptureConnectionConfiguration* _metadataObjectConnectionConfiguration;
	FigVideoCaptureConnectionConfiguration* _sceneClassifierConnectionConfiguration;
	FigVideoCaptureConnectionConfiguration* _videoDataConnectionConfiguration;
	FigVideoCaptureConnectionConfiguration* _videoPreviewSinkConnectionConfiguration;
	NSArray* _movieFileDetectedObjectMetadataConnectionConfigurations;

}

@property (nonatomic,readonly) FigMetadataObjectCaptureConnectionConfiguration * metadataObjectConnectionConfiguration;              //@synthesize metadataObjectConnectionConfiguration=_metadataObjectConnectionConfiguration - In the implementation block
@property (nonatomic,readonly) FigVideoCaptureConnectionConfiguration * sceneClassifierConnectionConfiguration;                      //@synthesize sceneClassifierConnectionConfiguration=_sceneClassifierConnectionConfiguration - In the implementation block
@property (nonatomic,readonly) FigVideoCaptureConnectionConfiguration * videoDataConnectionConfiguration;                            //@synthesize videoDataConnectionConfiguration=_videoDataConnectionConfiguration - In the implementation block
@property (nonatomic,readonly) FigVideoCaptureConnectionConfiguration * videoPreviewSinkConnectionConfiguration;                     //@synthesize videoPreviewSinkConnectionConfiguration=_videoPreviewSinkConnectionConfiguration - In the implementation block
@property (nonatomic,readonly) NSArray * movieFileDetectedObjectMetadataConnectionConfigurations;                                    //@synthesize movieFileDetectedObjectMetadataConnectionConfigurations=_movieFileDetectedObjectMetadataConnectionConfigurations - In the implementation block
-(void)dealloc;
-(FigVideoCaptureConnectionConfiguration *)videoPreviewSinkConnectionConfiguration;
-(NSArray *)movieFileDetectedObjectMetadataConnectionConfigurations;
-(FigVideoCaptureConnectionConfiguration *)videoDataConnectionConfiguration;
-(FigVideoCaptureConnectionConfiguration *)sceneClassifierConnectionConfiguration;
-(FigMetadataObjectCaptureConnectionConfiguration *)metadataObjectConnectionConfiguration;
-(id)initWithMetadataObjectConnectionConfiguration:(id)arg1 sceneClassifierConnectionConfiguration:(id)arg2 videoDataConnectionConfiguration:(id)arg3 videoPreviewSinkConnectionConfiguration:(id)arg4 movieFileDetectedObjectMetadataConnectionConfigurations:(id)arg5 ;
@end

