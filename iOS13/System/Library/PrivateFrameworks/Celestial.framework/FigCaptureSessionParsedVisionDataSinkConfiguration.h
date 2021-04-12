/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@class FigVisionDataCaptureConnectionConfiguration, FigVideoCaptureConnectionConfiguration;

@interface FigCaptureSessionParsedVisionDataSinkConfiguration : NSObject {

	FigVisionDataCaptureConnectionConfiguration* _visionDataConnectionConfiguration;
	FigVideoCaptureConnectionConfiguration* _videoDataConnectionConfiguration;

}

@property (nonatomic,readonly) FigVisionDataCaptureConnectionConfiguration * visionDataConnectionConfiguration;              //@synthesize visionDataConnectionConfiguration=_visionDataConnectionConfiguration - In the implementation block
@property (nonatomic,readonly) FigVideoCaptureConnectionConfiguration * videoDataConnectionConfiguration;                    //@synthesize videoDataConnectionConfiguration=_videoDataConnectionConfiguration - In the implementation block
-(void)dealloc;
-(FigVideoCaptureConnectionConfiguration *)videoDataConnectionConfiguration;
-(id)initWithVisionDataConnectionConfiguration:(id)arg1 videoDataConnectionConfiguration:(id)arg2 ;
-(FigVisionDataCaptureConnectionConfiguration *)visionDataConnectionConfiguration;
@end

