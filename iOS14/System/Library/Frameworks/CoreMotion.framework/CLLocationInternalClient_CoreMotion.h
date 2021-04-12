/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


#import <CoreMotion/CoreMotion-Structs.h>
@class NSXPCConnection;

@interface CLLocationInternalClient_CoreMotion : NSObject {

	NSXPCConnection* _connection;

}
+(id)sharedServiceClient;
-(unsigned char)configure:(SCD_Struct_CL57)arg1 ;
-(unsigned char)performMigration;
-(unsigned char)getGestureServiceEnabled:(char*)arg1 ;
-(id)setAuthorizationPromptMapDisplayEnabled:(unsigned char)arg1 ;
-(unsigned char)getControlPlaneStatusReportClear:(int)arg1 startTime:(double*)arg2 endTime:(double*)arg3 latitude:(double*)arg4 longitude:(double*)arg5 altitude:(double*)arg6 accuracy:(double*)arg7 status:(unsigned*)arg8 ;
-(unsigned char)updateCorrectiveCompensationChoiceForOutstandingPrompt:(int)arg1 ;
-(unsigned char)getPrecisionPermission:(char*)arg1 forBundleID:(const CFStringRef)arg2 orBundlePath:(const CFStringRef)arg3 ;
-(unsigned char)getLocationServicesEnabled:(char*)arg1 ;
-(unsigned char)getGyroCalibrationDatabaseBiasFit:(SCD_Struct_CM34*)arg1 atTemperature:(float)arg2 ;
-(int)getAccessoryTypeBitSet;
-(id)timeZoneAtLocation:(id)arg1 ;
-(const CFDictionaryRef)copyNearbyAssetSettingsOfAccessoryFile:(const CFStringRef)arg1 ;
-(const CFArrayRef)copyActivityAlarms;
-(void)setLocationServicesEnabled:(unsigned char)arg1 ;
-(unsigned char)setIncidentalUseMode:(int)arg1 forBundleID:(const CFStringRef)arg2 orBundlePath:(const CFStringRef)arg3 ;
-(const CFDictionaryRef)copyAppsUsingLocation;
-(unsigned char)dumpLogs:(const CFStringRef)arg1 ;
-(unsigned char)compassCalibrationDatabaseSetBias:(SCD_Struct_CM1)arg1 magneticField:(SCD_Struct_CM1)arg2 level:(int)arg3 magnitude:(float)arg4 inclination:(float)arg5 ;
-(unsigned char)clearLocationAuthorizations;
-(unsigned char)getPrivateMode;
-(unsigned char)getLocationForBundleID:(const CFStringRef)arg1 orBundlePath:(const CFStringRef)arg2 dynamicAccuracyReductionEnabled:(unsigned char)arg3 allowsAlteredAccessoryLocations:(unsigned char)arg4 location:(SCD_Struct_CL61*)arg5 ;
-(unsigned char)pingDaemon;
-(id)triggerExpiredAuthorizationPurgeOnClientManager;
-(id)getAccessoryMotionSensorLogs;
-(unsigned char)compassCalibrationDatabaseGetBias:(SCD_Struct_CL62*)arg1 magneticField:(SCD_Struct_CM1)arg2 acceleration:(SCD_Struct_CM1)arg3 ;
-(unsigned char)gyroCalibrationDatabaseSupportsMiniCalibration:(int*)arg1 ;
-(id)getArchivedAuthorizationDecisionsWithError:(id*)arg1 ;
-(unsigned char)getIncidentalUseMode:(int*)arg1 forBundleID:(const CFStringRef)arg2 orBundlePath:(const CFStringRef)arg3 ;
-(unsigned char)gyroCalibrationDatabaseWipe;
-(void)setMapMatchingRouteHint:(SCD_Struct_CL63*)arg1 count:(int)arg2 routingType:(int)arg3 stepType:(int)arg4 ;
-(unsigned char)getEmergencyLocationSettingsCompatibilityVersion:(int*)arg1 andContentVersion:(int*)arg2 ;
-(const CFDictionaryRef)copyNearbyAssetSettings;
-(void)setLocationDefaultForKey:(const CFStringRef)arg1 value:(const void*)arg2 ;
-(unsigned char)getGroundAltitudeForBundleID:(const CFStringRef)arg1 orBundlePath:(const CFStringRef)arg2 location:(id)arg3 groundAltitude:(SCD_Struct_CL64*)arg4 ;
-(void)notifyPassKitPayment:(id)arg1 transaction:(id)arg2 info:(id)arg3 ;
-(unsigned char)shutdownDaemon;
-(void)notifyWeatherForecast:(id)arg1 airQualityConditions:(id)arg2 hourlyForecasts:(id)arg3 dailyForecasts:(id)arg4 latitude:(double)arg5 longitude:(double)arg6 ;
-(id)connection;
-(const CFArrayRef)copyGnssBandsInUse;
-(id)getMotionSensorLogs;
-(id)getTemporaryAuthorizationStatusForBundleId:(id)arg1 orBundlePath:(id)arg2 error:(id*)arg3 ;
-(unsigned char)getAuthorizationStatus:(int*)arg1 forBundleID:(const CFStringRef)arg2 orBundlePath:(const CFStringRef)arg3 ;
-(id)getPipelinedCache;
-(id)setTemporaryAuthorizationStatusForBundleId:(id)arg1 orBundlePath:(id)arg2 statusData:(id)arg3 ;
-(unsigned char)getStatusBarIconEnabled:(BOOL*)arg1 forEntityClass:(unsigned)arg2 ;
-(unsigned char)deleteCurrentEmergencyLocationAsset;
-(const void*)getLocationDefaultForKey:(const CFStringRef)arg1 ;
-(const CFDictionaryRef)copyMonitoredRegionsForBundleIdentifier:(const CFStringRef)arg1 orBundlePath:(const CFStringRef)arg2 ;
-(unsigned char)copyLastLog;
-(unsigned char)shouldDisplayEEDUI;
-(unsigned char)timeSyncMachTimeStamp:(unsigned long long*)arg1 oscarTimeStamp:(unsigned long long*)arg2 ;
-(BOOL)startStopAdvertisingBeacon:(id)arg1 power:(id)arg2 ;
-(unsigned char)getGyroCalibrationDatabaseNumTemperatures:(int*)arg1 ;
-(unsigned char)insertGyroCalibrationDatabaseBiasEstimateIfValid:(SCD_Struct_CM1)arg1 temperature:(float)arg2 variance:(SCD_Struct_CM1)arg3 timestamp:(double)arg4 ;
-(const CFArrayRef)copyTechnologiesInUse;
-(unsigned char)getAuthorizationPromptMapDisplayEnabled:(char*)arg1 ;
-(unsigned char)setStatusBarIconEnabled:(BOOL)arg1 forEntityClass:(unsigned)arg2 ;
-(int)getStatusBarIconState;
-(void)setPrivateMode:(unsigned char)arg1 ;
-(unsigned char)setAuthorizationStatusByType:(int)arg1 withCorrectiveCompensation:(int)arg2 forBundleID:(const CFStringRef)arg3 orBundlePath:(const CFStringRef)arg4 ;
-(BOOL)checkAndExerciseAuthorizationForBundleID:(id)arg1 orBundlePath:(id)arg2 services:(unsigned long long)arg3 error:(id*)arg4 ;
-(void)setGestureServiceEnabled:(unsigned char)arg1 ;
-(id)applyArchivedAuthorizationDecisions:(id)arg1 ;
-(unsigned char)setBackgroundIndicatorForBundleID:(const CFStringRef)arg1 orBundlePath:(const CFStringRef)arg2 enabled:(unsigned char)arg3 ;
-(unsigned char)displayStatistics;
-(unsigned char)setTemporaryAuthorizationGranted:(unsigned char)arg1 forBundleID:(const CFStringRef)arg2 orBundlePath:(const CFStringRef)arg3 ;
-(unsigned char)setAuthorizationStatus:(unsigned char)arg1 withCorrectiveCompensation:(int)arg2 forBundleID:(const CFStringRef)arg3 orBundlePath:(const CFStringRef)arg4 ;
-(double)modifyOrSetAuthorizationTime:(double)arg1 forBundleID:(id)arg2 orBundlePath:(id)arg3 ;
-(id)synchronousRemoteObject;
@end

