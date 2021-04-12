/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCaptureSynchronizedData.h>

@class AVCameraCalibrationData;

@interface AVCaptureSynchronizedCameraCalibrationData : AVCaptureSynchronizedData {

	AVCameraCalibrationData* _cameraCalibrationData;
	BOOL _cameraCalibrationDataWasDropped;
	long long _droppedReason;

}

@property (readonly) AVCameraCalibrationData * cameraCalibrationData; 
@property (readonly) BOOL cameraCalibrationDataWasDropped; 
@property (readonly) long long droppedReason; 
-(void)dealloc;
-(AVCameraCalibrationData *)cameraCalibrationData;
-(long long)droppedReason;
-(BOOL)cameraCalibrationDataWasDropped;
-(id)_initWithCameraCalibrationData:(id)arg1 timestamp:(SCD_Struct_AV7)arg2 cameraCalibrationDataWasDropped:(BOOL)arg3 droppedReason:(long long)arg4 ;
@end

