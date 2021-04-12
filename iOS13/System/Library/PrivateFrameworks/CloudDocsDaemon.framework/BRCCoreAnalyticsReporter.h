/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/


@interface BRCCoreAnalyticsReporter : NSObject
+(void)uploadMetricsReport:(id)arg1 ;
+(id)dictionaryForErrorsByZone:(id)arg1 wantPrivateZone:(BOOL)arg2 ;
+(BOOL)uploadSyncErrorsAsIndividualEvents:(id)arg1 syncType:(id)arg2 totalItemsCount:(unsigned long long)arg3 zoneType:(id)arg4 zoneCountsOnly:(BOOL)arg5 isFolderSharingEnabled:(BOOL)arg6 dsid:(id)arg7 rampNumber:(id)arg8 ;
+(BOOL)uploadLoadErrorsAsIndividualEvents:(id)arg1 syncType:(id)arg2 totalItemsCount:(unsigned long long)arg3 zoneCountsOnly:(BOOL)arg4 isFolderSharingEnabled:(BOOL)arg5 dsid:(id)arg6 rampNumber:(id)arg7 ;
+(void)sendTelemetryReport:(id)arg1 ;
+(id)telemetryDictionaryToUploadForError:(id)arg1 errorMessage:(id)arg2 count:(id)arg3 syncType:(id)arg4 totalItemsCount:(id)arg5 zoneType:(id)arg6 zoneCountsOnly:(BOOL)arg7 isFolderSharingEnabled:(BOOL)arg8 dsid:(id)arg9 rampNumber:(id)arg10 lastFailureDate:(id)arg11 pcsState:(id)arg12 ;
@end

