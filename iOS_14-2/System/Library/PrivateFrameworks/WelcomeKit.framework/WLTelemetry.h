/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKit.framework/WelcomeKit
*/


@interface WLTelemetry : NSObject
+(id)sharedInstance;
-(void)_connectionToAndroidDeviceDidCompleteWithResult:(unsigned long long)arg1 ;
-(id)_telemetryDictionaryForPreparatoryDataDidComplete:(id)arg1 contentType:(id)arg2 duration:(double)arg3 metadata:(id)arg4 ;
-(id)_telemetryDictionaryForContentTypeDidComplete:(id)arg1 statistics:(id)arg2 metadata:(id)arg3 ;
-(id)_telemetryForMigrationDidCompleteWithSuccess:(BOOL)arg1 error:(id)arg2 metadata:(id)arg3 ;
-(void)wifiDidStartWithSuccess:(BOOL)arg1 ;
-(void)connectionToAndroidDeviceDidSucceed;
-(void)connectionToAndroidDeviceDidFailWithTimeout;
-(void)connectionToAndroidDeviceDidFailWithAuthenticationError;
-(void)preparatoryDataDidComplete:(id)arg1 contentType:(id)arg2 duration:(double)arg3 metadata:(id)arg4 ;
-(void)contentTypeDidComplete:(id)arg1 statistics:(id)arg2 metadata:(id)arg3 ;
-(void)migrationDidCompleteWithSuccess:(BOOL)arg1 error:(id)arg2 metadata:(id)arg3 ;
-(void)importDidFailSilentlyForContentType:(id)arg1 ;
-(void)didResolveTimeEstimate:(unsigned long long)arg1 forDownloadTask:(id)arg2 threshold:(unsigned long long)arg3 actualTime:(unsigned long long)arg4 ;
-(void)priorConnectionDidFailWithReason:(id)arg1 androidOSAPIVersion:(id)arg2 ;
-(void)userDidChooseToInstallMigratableApps:(BOOL)arg1 ;
@end

