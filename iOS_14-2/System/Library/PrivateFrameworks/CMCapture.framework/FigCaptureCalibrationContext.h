/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


#import <CMCapture/CMCapture-Structs.h>
@class NSMutableDictionary, NSString, NSArray, NSDictionary;

@interface FigCaptureCalibrationContext : NSObject {

	NSMutableDictionary* _lastSuccessfulCalibrationData;
	double _lastSuccessfulCalibrationTimeStamp;
	SCD_Struct_Fi86 _lastSuccessfulCalibrationMagneticField;
	NSString* _activityName;
	NSString* _preferenceString;
	NSString* _propertyName;
	unsigned long long _expectedDataSize;
	int _interval;
	int _minimumBatteryLevelToRun;
	NSString* _internalLogName;
	NSArray* _supportedDevices;

}

@property (nonatomic,retain) NSDictionary * lastSuccessfulCalibrationData; 
@property (assign,nonatomic) double lastSuccessfulCalibrationTimeStamp;                           //@synthesize lastSuccessfulCalibrationTimeStamp=_lastSuccessfulCalibrationTimeStamp - In the implementation block
@property (assign,nonatomic) SCD_Struct_Fi86 lastSuccessfulCalibrationMagneticField;              //@synthesize lastSuccessfulCalibrationMagneticField=_lastSuccessfulCalibrationMagneticField - In the implementation block
@property (nonatomic,readonly) NSString * activityName;                                           //@synthesize activityName=_activityName - In the implementation block
@property (nonatomic,readonly) NSString * propertyName;                                           //@synthesize propertyName=_propertyName - In the implementation block
@property (nonatomic,readonly) unsigned long long expectedDataSize;                               //@synthesize expectedDataSize=_expectedDataSize - In the implementation block
@property (nonatomic,readonly) int interval;                                                      //@synthesize interval=_interval - In the implementation block
@property (nonatomic,readonly) int minimumBatteryLevelToRun;                                      //@synthesize minimumBatteryLevelToRun=_minimumBatteryLevelToRun - In the implementation block
+(void)initialize;
+(void)printDebugInfoForRawStreamCalibrationData:(id)arg1 ;
+(unsigned)calibrationStatusFromRawStreamCalibrationData:(id)arg1 ;
+(id)calibrationDataStringForInternalLogging:(id)arg1 ;
+(id)createRawStreamCalibrationDataWithFailureReasons:(int)arg1 ;
+(void)setStatusForCalibrationData:(id)arg1 status:(int)arg2 ;
-(id)calibrationDataHistory;
-(int)interval;
-(NSDictionary *)lastSuccessfulCalibrationData;
-(NSString *)activityName;
-(int)minimumBatteryLevelToRun;
-(void)updateWithNewCalibrationData:(id)arg1 orExternalErrors:(unsigned)arg2 magneticFieldAttempts:(int)arg3 magneticField:(SCD_Struct_Fi86)arg4 isCalibrationValid:(BOOL*)arg5 calibrationStatus:(unsigned*)arg6 ;
-(unsigned long long)expectedDataSize;
-(NSString *)propertyName;
-(double)lastSuccessfulCalibrationTimeStamp;
-(unsigned)_updateAndStashCalibrationData:(id)arg1 externalErrors:(unsigned)arg2 hasFirmwareErrors:(BOOL)arg3 magneticFieldAttempts:(int)arg4 magneticField:(SCD_Struct_Fi86)arg5 ;
-(void)_writeCalibrationDataToInternalLogFile:(id)arg1 magneticField:(SCD_Struct_Fi86)arg2 ;
-(void)setLastSuccessfulCalibrationMagneticField:(SCD_Struct_Fi86)arg1 ;
-(id)_createDictionaryForFailureOutsideFirmwareWithReasons:(unsigned)arg1 ;
-(SCD_Struct_Fi86)lastSuccessfulCalibrationMagneticField;
-(id)initWithPreferenceString:(id)arg1 withActivityName:(id)arg2 withPropertyName:(id)arg3 withExpectedDataSize:(unsigned long long)arg4 withInterval:(int)arg5 withMinimumBatteryLevel:(int)arg6 withInternalLogName:(id)arg7 supportedDeviceNames:(id)arg8 ;
-(void)reportForAggdLoggingWithCalibrationData:(id)arg1 isValid:(BOOL)arg2 magneticFieldMagnitude:(double)arg3 ;
-(id)initWithSupportedDeviceNames:(id)arg1 ;
-(void)setLastSuccessfulCalibrationData:(NSDictionary *)arg1 ;
-(void)setLastSuccessfulCalibrationTimeStamp:(double)arg1 ;
-(void)pushCalibrationDataToHistory:(id)arg1 isRejected:(BOOL*)arg2 ;
@end
