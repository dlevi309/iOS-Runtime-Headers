/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@interface CAMURLConfigurationRequest : NSObject {

	BOOL _wantsQRCodeForSession;
	long long _requestedCaptureMode;
	long long _requestedCaptureDevice;

}

@property (nonatomic,readonly) long long requestedCaptureMode;                //@synthesize requestedCaptureMode=_requestedCaptureMode - In the implementation block
@property (nonatomic,readonly) long long requestedCaptureDevice;              //@synthesize requestedCaptureDevice=_requestedCaptureDevice - In the implementation block
@property (nonatomic,readonly) BOOL wantsQRCodeForSession;                    //@synthesize wantsQRCodeForSession=_wantsQRCodeForSession - In the implementation block
-(long long)requestedCaptureMode;
-(long long)requestedCaptureDevice;
-(BOOL)wantsQRCodeForSession;
-(BOOL)_initializeFromQueryDictionary:(id)arg1 ;
-(BOOL)_captureModeFromString:(id)arg1 outCaptureMode:(long long*)arg2 ;
-(long long)_captureDeviceFromString:(id)arg1 outCaptureDevice:(long long*)arg2 ;
-(id)initWithQueryDictionary:(id)arg1 ;
@end

