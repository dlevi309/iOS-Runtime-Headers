/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/JasperDepth.framework/JasperDepth
*/


#import <JasperDepth/JasperDepth-Structs.h>
@class JDCameraCalibrationData, JDJasperModuleCalibrationData;

@interface JDJasperCameraSystemCalibrationData : NSObject {

	int _platform;
	int _jasperChipRevision;
	JDCameraCalibrationData* _jasperCamera;
	JDCameraCalibrationData* _fullSensorSuperWideCamera;
	JDJasperModuleCalibrationData* _jasperModule;

}

@property (nonatomic,readonly) int platform;                                                     //@synthesize platform=_platform - In the implementation block
@property (nonatomic,readonly) int jasperChipRevision;                                           //@synthesize jasperChipRevision=_jasperChipRevision - In the implementation block
@property (nonatomic,readonly) JDCameraCalibrationData * jasperCamera;                           //@synthesize jasperCamera=_jasperCamera - In the implementation block
@property (nonatomic,readonly) JDCameraCalibrationData * fullSensorSuperWideCamera;              //@synthesize fullSensorSuperWideCamera=_fullSensorSuperWideCamera - In the implementation block
@property (nonatomic,readonly) JDJasperModuleCalibrationData * jasperModule;                     //@synthesize jasperModule=_jasperModule - In the implementation block
+(id)calibrationDataWithJasperCalibDataDictionary:(id)arg1 ;
+(id)calibrationDataWithJasperCalib:(id)arg1 platformId:(int)arg2 sensorVersion:(int)arg3 ;
-(int)platform;
-(JDCameraCalibrationData *)fullSensorSuperWideCamera;
-(id)getSuperWideCameraCalibrationForRawSensorSize:(CGSize)arg1 crop:(CGRect)arg2 scaledTo:(CGSize)arg3 ;
-(JDCameraCalibrationData *)jasperCamera;
-(id)initWithJasperModuleCalibration:(id)arg1 platformId:(int)arg2 sensorVersion:(int)arg3 ;
-(int)jasperChipRevision;
-(JDJasperModuleCalibrationData *)jasperModule;
@end

