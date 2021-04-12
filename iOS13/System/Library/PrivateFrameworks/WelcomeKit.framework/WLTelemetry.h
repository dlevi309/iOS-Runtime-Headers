/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKit.framework/WelcomeKit
*/


@interface WLTelemetry : NSObject
+(id)sharedInstance;
-(void)migrationDidStart;
-(id)_telemetryDictionaryForPreparatoryDataDidComplete:(id)arg1 contentType:(id)arg2 duration:(double)arg3 metadata:(id)arg4 ;
-(void)wifiDidStartWithSuccess:(BOOL)arg1 ;
-(void)connectionToAndroidDeviceDidSucceed;
-(void)connectionToAndroidDeviceDidFailWithTimeout;
-(void)connectionToAndroidDeviceDidFailWithAuthenticationError;
-(void)preparatoryDataDidComplete:(id)arg1 contentType:(id)arg2 duration:(double)arg3 metadata:(id)arg4 ;
-(void)migrationDidSucceed;
-(void)migrationDidFail;
-(void)communicationDidFailForDataType:(id)arg1 ;
-(void)importDidFailForDataType:(id)arg1 ;
-(void)importDidFailSilentlyForDataType:(id)arg1 ;
-(void)didResolveTimeEstimate:(unsigned long long)arg1 forDownloadTask:(id)arg2 threshold:(unsigned long long)arg3 actualTime:(unsigned long long)arg4 ;
-(void)priorConnectionDidFailWithReason:(id)arg1 androidOSAPIVersion:(id)arg2 ;
@end

