/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@class FigVisionDataCaptureConnectionConfiguration, FigVideoCaptureConnectionConfiguration;

@interface FigCaptureSessionParsedVisionDataSinkConfiguration : NSObject {

	FigVisionDataCaptureConnectionConfiguration* _visionDataConnectionConfiguration;
	FigVideoCaptureConnectionConfiguration* _videoDataConnectionConfiguration;

}

@property (nonatomic,readonly) FigVisionDataCaptureConnectionConfiguration * visionDataConnectionConfiguration;              //@synthesize visionDataConnectionConfiguration=_visionDataConnectionConfiguration - In the implementation block
@property (nonatomic,readonly) FigVideoCaptureConnectionConfiguration * videoDataConnectionConfiguration;                    //@synthesize videoDataConnectionConfiguration=_videoDataConnectionConfiguration - In the implementation block
-(id)initWithVisionDataConnectionConfiguration:(id)arg1 videoDataConnectionConfiguration:(id)arg2 ;
-(FigVisionDataCaptureConnectionConfiguration *)visionDataConnectionConfiguration;
-(FigVideoCaptureConnectionConfiguration *)videoDataConnectionConfiguration;
-(void)dealloc;
@end

