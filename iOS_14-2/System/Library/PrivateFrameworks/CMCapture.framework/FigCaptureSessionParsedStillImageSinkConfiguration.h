/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@class FigVideoCaptureConnectionConfiguration, FigPointCloudDataCaptureConnectionConfiguration;

@interface FigCaptureSessionParsedStillImageSinkConfiguration : NSObject {

	FigVideoCaptureConnectionConfiguration* _stillImageConnectionConfiguration;
	FigVideoCaptureConnectionConfiguration* _movieFileVideoConnectionConfiguration;
	FigPointCloudDataCaptureConnectionConfiguration* _pointCloudDataConnectionConfiguration;

}

@property (nonatomic,readonly) FigVideoCaptureConnectionConfiguration * stillImageConnectionConfiguration;                           //@synthesize stillImageConnectionConfiguration=_stillImageConnectionConfiguration - In the implementation block
@property (nonatomic,readonly) FigVideoCaptureConnectionConfiguration * movieFileVideoConnectionConfiguration;                       //@synthesize movieFileVideoConnectionConfiguration=_movieFileVideoConnectionConfiguration - In the implementation block
@property (nonatomic,readonly) FigPointCloudDataCaptureConnectionConfiguration * pointCloudDataConnectionConfiguration;              //@synthesize pointCloudDataConnectionConfiguration=_pointCloudDataConnectionConfiguration - In the implementation block
-(FigVideoCaptureConnectionConfiguration *)stillImageConnectionConfiguration;
-(FigPointCloudDataCaptureConnectionConfiguration *)pointCloudDataConnectionConfiguration;
-(FigVideoCaptureConnectionConfiguration *)movieFileVideoConnectionConfiguration;
-(id)initWithStillImageConnectionConfiguration:(id)arg1 movieFileVideoConnectionConfiguration:(id)arg2 pointCloudDataConnectionConfiguration:(id)arg3 ;
-(void)dealloc;
@end

