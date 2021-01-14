/*
* Generated on Thursday, January 14, 2021 at 2:26:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

