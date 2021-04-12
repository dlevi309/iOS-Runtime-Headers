/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


@interface CMSensorRecorder : NSObject
+(long long)authorizationStatus;
+(BOOL)isRecordingAvailableForType:(int)arg1 ;
+(BOOL)isAccelerometerRecordingAvailable;
+(BOOL)isGyroRecordingAvailable;
+(BOOL)isPressureRecordingAvailable;
+(BOOL)isAuthorizedForRecording;
-(BOOL)setSensorSampleRate:(unsigned)arg1 forType:(int)arg2 ;
-(id)sensorDataFromDate:(id)arg1 toDate:(id)arg2 forType:(int)arg3 ;
-(BOOL)validateTimesFromDate:(id*)arg1 toDate:(id)arg2 ;
-(BOOL)sendSensorDataToUrl:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3 forType:(int)arg4 ;
-(void)recordDataType:(int)arg1 forDuration:(double)arg2 ;
-(id)accelerometerDataSinceId:(unsigned long long)arg1 ;
-(id)gyroDataSinceId:(unsigned long long)arg1 ;
-(id)pressureDataSinceId:(unsigned long long)arg1 ;
-(id)accelerometerDataFromDate:(id)arg1 toDate:(id)arg2 ;
-(id)gyroDataFromDate:(id)arg1 toDate:(id)arg2 ;
-(id)pressureDataFromDate:(id)arg1 toDate:(id)arg2 ;
-(BOOL)sendAccelDataToUrl:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3 ;
-(BOOL)sendGyroDataToUrl:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3 ;
-(BOOL)sendPressureDataToUrl:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3 ;
-(void)recordAccelerometerForDuration:(double)arg1 ;
-(void)recordGyroForDuration:(double)arg1 ;
-(void)recordPressureForDuration:(double)arg1 ;
-(id)accelerometerDataFrom:(id)arg1 to:(id)arg2 ;
-(void)recordAccelerometerFor:(double)arg1 ;
-(id)accelerometerDataSince:(unsigned long long)arg1 ;
-(BOOL)setAccelSampleRate:(unsigned)arg1 ;
-(BOOL)setGyroSampleRate:(unsigned)arg1 ;
-(BOOL)setPressureSampleRate:(unsigned)arg1 ;
@end

