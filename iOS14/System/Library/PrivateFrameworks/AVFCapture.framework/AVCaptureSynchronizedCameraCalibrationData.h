/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVCaptureSynchronizedData.h>

@class AVCameraCalibrationData;

@interface AVCaptureSynchronizedCameraCalibrationData : AVCaptureSynchronizedData {

	AVCameraCalibrationData* _cameraCalibrationData;
	BOOL _cameraCalibrationDataWasDropped;
	long long _droppedReason;

}

@property (readonly) AVCameraCalibrationData * cameraCalibrationData; 
@property (readonly) BOOL cameraCalibrationDataWasDropped; 
@property (readonly) long long droppedReason; 
-(id)_initWithCameraCalibrationData:(id)arg1 timestamp:(SCD_Struct_AV0)arg2 cameraCalibrationDataWasDropped:(BOOL)arg3 droppedReason:(long long)arg4 ;
-(long long)droppedReason;
-(BOOL)cameraCalibrationDataWasDropped;
-(AVCameraCalibrationData *)cameraCalibrationData;
-(void)dealloc;
@end

