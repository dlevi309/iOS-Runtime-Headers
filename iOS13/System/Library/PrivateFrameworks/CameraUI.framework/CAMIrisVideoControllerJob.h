/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@class CAMStillImageCaptureRequest, CAMVideoCaptureResult;

@interface CAMIrisVideoControllerJob : NSObject {

	CAMStillImageCaptureRequest* _request;
	CAMVideoCaptureResult* _videoCaptureResult;

}

@property (nonatomic,readonly) CAMStillImageCaptureRequest * request;                   //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) CAMVideoCaptureResult * videoCaptureResult;              //@synthesize videoCaptureResult=_videoCaptureResult - In the implementation block
-(CAMStillImageCaptureRequest *)request;
-(id)initWithRequest:(id)arg1 videoCaptureResult:(id)arg2 ;
-(CAMVideoCaptureResult *)videoCaptureResult;
@end

