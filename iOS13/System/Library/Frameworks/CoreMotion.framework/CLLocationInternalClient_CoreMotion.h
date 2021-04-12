/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


#import <CoreMotion/CoreMotion-Structs.h>
@class NSXPCConnection;

@interface CLLocationInternalClient_CoreMotion : NSObject {

	NSXPCConnection* _connection;

}
+(id)sharedServiceClient;
-(void)setLocationServicesEnabled:(unsigned char)arg1 ;
-(id)setAuthorizationPromptMapDisplayEnabled:(unsigned char)arg1 ;
-(unsigned char)shutdownDaemon;
-(void)setPrivateMode:(unsigned char)arg1 ;
-(void)notifyPassKitPayment:(id)arg1 transaction:(id)arg2 info:(id)arg3 ;
-(void)notifyWeatherForecast:(id)arg1 airQualityConditions:(id)arg2 hourlyForecasts:(id)arg3 dailyForecasts:(id)arg4 latitude:(double)arg5 longitude:(double)arg6 ;
-(id)synchronousRemoteObject;
-(unsigned char)setAuthorizationStatus:(unsigned char)arg1 withCorrectiveCompensation:(unsigned char)arg2 forBundleID:(const CFStringRef)arg3 orBundlePath:(const CFStringRef)arg4 ;
-(unsigned char)clearLocationAuthorizations;
-(id)getArchivedAuthorizationDecisionsWithError:(id*)arg1 ;
-(id)applyArchivedAuthorizationDecisions:(id)arg1 ;
-(const CFDictionaryRef)copyAppsUsingLocation;
-(const CFArrayRef)copyTechnologiesInUse;
-(const CFArrayRef)copyGnssBandsInUse;
-(void)setLocationDefaultForKey:(const CFStringRef)arg1 value:(const void*)arg2 ;
-(const void*)getLocationDefaultForKey:(const CFStringRef)arg1 ;
-(id)timeZoneAtLocation:(id)arg1 ;
-(unsigned char)getPrivateMode;
-(unsigned char)pingDaemon;
-(unsigned char)getLocationServicesEnabled:(char*)arg1 ;
-(unsigned char)getAuthorizationPromptMapDisplayEnabled:(char*)arg1 ;
-(void)setGestureServiceEnabled:(unsigned char)arg1 ;
-(unsigned char)getGestureServiceEnabled:(char*)arg1 ;
-(unsigned char)getAuthorizationStatus:(int*)arg1 forBundleID:(const CFStringRef)arg2 orBundlePath:(const CFStringRef)arg3 ;
-(unsigned char)performMigration;
-(unsigned char)displayStatistics;
-(unsigned char)dumpLogs:(const CFStringRef)arg1 ;
-(const CFDictionaryRef)copyMonitoredRegionsForBundleIdentifier:(const CFStringRef)arg1 orBundlePath:(const CFStringRef)arg2 ;
-(BOOL)checkAndExerciseAuthorizationForBundleID:(id)arg1 orBundlePath:(id)arg2 services:(unsigned long long)arg3 error:(id*)arg4 ;
-(unsigned char)getLocationForBundleID:(const CFStringRef)arg1 orBundlePath:(const CFStringRef)arg2 dynamicAccuracyReductionEnabled:(unsigned char)arg3 allowsAlteredAccessoryLocations:(unsigned char)arg4 location:(SCD_Struct_CL351*)arg5 ;
-(void)setMapMatchingRouteHint:(SCD_Struct_CL352*)arg1 count:(int)arg2 routingType:(int)arg3 ;
-(unsigned char)copyLastLog;
-(unsigned char)setStatusBarIconEnabled:(BOOL)arg1 forEntityClass:(unsigned)arg2 ;
-(unsigned char)getStatusBarIconEnabled:(BOOL*)arg1 forEntityClass:(unsigned)arg2 ;
-(int)getStatusBarIconState;
-(id)getPipelinedCache;
-(BOOL)startStopAdvertisingBeacon:(id)arg1 power:(id)arg2 ;
-(unsigned char)getGyroCalibrationDatabaseBiasFit:(SCD_Struct_CM344*)arg1 atTemperature:(float)arg2 ;
-(unsigned char)insertGyroCalibrationDatabaseBiasEstimateIfValid:(SCD_Struct_CM1)arg1 temperature:(float)arg2 variance:(SCD_Struct_CM1)arg3 timestamp:(double)arg4 ;
-(unsigned char)gyroCalibrationDatabaseWipe;
-(unsigned char)getGyroCalibrationDatabaseNumTemperatures:(int*)arg1 ;
-(unsigned char)compassCalibrationDatabaseGetBias:(SCD_Struct_CL353*)arg1 magneticField:(SCD_Struct_CM1)arg2 acceleration:(SCD_Struct_CM1)arg3 ;
-(unsigned char)compassCalibrationDatabaseSetBias:(SCD_Struct_CM1)arg1 magneticField:(SCD_Struct_CM1)arg2 level:(int)arg3 magnitude:(float)arg4 inclination:(float)arg5 ;
-(unsigned char)configure:(SCD_Struct_CL354)arg1 ;
-(unsigned char)getControlPlaneStatusReportClear:(int)arg1 startTime:(double*)arg2 endTime:(double*)arg3 latitude:(double*)arg4 longitude:(double*)arg5 altitude:(double*)arg6 accuracy:(double*)arg7 status:(unsigned*)arg8 ;
-(unsigned char)getEmergencyLocationSettingsCompatibilityVersion:(int*)arg1 andContentVersion:(int*)arg2 ;
-(unsigned char)deleteCurrentEmergencyLocationAsset;
-(const CFDictionaryRef)copyNearbyAssetSettings;
-(id)getMotionSensorLogs;
-(id)getAccessoryMotionSensorLogs;
-(const CFArrayRef)copyActivityAlarms;
-(unsigned char)setAuthorizationStatusByType:(int)arg1 withCorrectiveCompensation:(unsigned char)arg2 forBundleID:(const CFStringRef)arg3 orBundlePath:(const CFStringRef)arg4 ;
-(unsigned char)setTemporaryAuthorizationGranted:(unsigned char)arg1 forBundleID:(const CFStringRef)arg2 orBundlePath:(const CFStringRef)arg3 ;
-(unsigned char)setBackgroundIndicatorForBundleID:(const CFStringRef)arg1 orBundlePath:(const CFStringRef)arg2 enabled:(unsigned char)arg3 ;
-(unsigned char)gyroCalibrationDatabaseSupportsMiniCalibration:(int*)arg1 ;
-(unsigned char)timeSyncMachTimeStamp:(unsigned long long*)arg1 oscarTimeStamp:(unsigned long long*)arg2 ;
@end

