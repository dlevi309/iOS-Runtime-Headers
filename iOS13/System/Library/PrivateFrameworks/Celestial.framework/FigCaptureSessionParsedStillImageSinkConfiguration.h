/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@class FigVideoCaptureConnectionConfiguration;

@interface FigCaptureSessionParsedStillImageSinkConfiguration : NSObject {

	FigVideoCaptureConnectionConfiguration* _stillImageConnectionConfiguration;
	FigVideoCaptureConnectionConfiguration* _movieFileVideoConnectionConfiguration;

}

@property (nonatomic,readonly) FigVideoCaptureConnectionConfiguration * stillImageConnectionConfiguration;                  //@synthesize stillImageConnectionConfiguration=_stillImageConnectionConfiguration - In the implementation block
@property (nonatomic,readonly) FigVideoCaptureConnectionConfiguration * movieFileVideoConnectionConfiguration;              //@synthesize movieFileVideoConnectionConfiguration=_movieFileVideoConnectionConfiguration - In the implementation block
-(void)dealloc;
-(FigVideoCaptureConnectionConfiguration *)stillImageConnectionConfiguration;
-(id)initWithStillImageConnectionConfiguration:(id)arg1 movieFileVideoConnectionConfiguration:(id)arg2 ;
-(FigVideoCaptureConnectionConfiguration *)movieFileVideoConnectionConfiguration;
@end

