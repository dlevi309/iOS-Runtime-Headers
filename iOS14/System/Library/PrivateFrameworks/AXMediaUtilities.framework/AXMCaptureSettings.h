/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/


@class AVCaptureDevice, AVCaptureDeviceFormat;

@interface AXMCaptureSettings : NSObject {

	AVCaptureDevice* _captureDevice;
	AVCaptureDeviceFormat* _captureFormat;

}

@property (nonatomic,retain) AVCaptureDevice * captureDevice;                    //@synthesize captureDevice=_captureDevice - In the implementation block
@property (nonatomic,retain) AVCaptureDeviceFormat * captureFormat;              //@synthesize captureFormat=_captureFormat - In the implementation block
-(AVCaptureDevice *)captureDevice;
-(AVCaptureDeviceFormat *)captureFormat;
-(void)setCaptureDevice:(AVCaptureDevice *)arg1 ;
-(void)setCaptureFormat:(AVCaptureDeviceFormat *)arg1 ;
@end

