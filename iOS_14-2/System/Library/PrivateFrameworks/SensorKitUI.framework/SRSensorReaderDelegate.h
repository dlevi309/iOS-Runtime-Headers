/*
* Generated on Thursday, January 14, 2021 at 2:28:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SensorKitUI.framework/SensorKitUI
*/


@protocol SRSensorReaderDelegate <NSObject>
@optional
-(BOOL)sensorReader:(id)arg1 fetchingRequest:(id)arg2 didFetchResult:(id)arg3;
-(void)sensorReader:(id)arg1 didCompleteFetch:(id)arg2;
-(void)sensorReader:(id)arg1 fetchingRequest:(id)arg2 failedWithError:(id)arg3;
-(void)sensorReader:(id)arg1 didFetchDevices:(id)arg2;
-(void)sensorReader:(id)arg1 fetchDevicesDidFailWithError:(id)arg2;
-(void)sensorReaderWillStartRecording:(id)arg1;
-(void)sensorReader:(id)arg1 startRecordingFailedWithError:(id)arg2;
-(void)sensorReaderDidStopRecording:(id)arg1;
-(void)sensorReader:(id)arg1 stopRecordingFailedWithError:(id)arg2;
-(void)sensorReader:(id)arg1 didChangeAuthorizationStatus:(long long)arg2;

@end

