/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
*/


@interface SUUtility : NSObject
+(id)systemContainerURL;
+(id)serialNumber;
+(BOOL)isDaemon;
+(id)taskQueue;
+(BOOL)isCellularDataCapable;
+(void)setIsDaemon:(BOOL)arg1 ;
+(id)errorWithCode:(long long)arg1 ;
+(id)gregorianCalendar;
+(void)setCacheable:(BOOL)arg1 ;
+(id)currentDeviceName;
+(id)currentProductVersion;
+(id)currentProductBuild;
+(id)currentProductType;
+(id)currentReleaseType;
+(void)assignError:(id*)arg1 withCode:(long long)arg2 ;
+(id)currentProductCategory;
+(void)purgeV1SUAssets;
+(void)assignError:(id*)arg1 withError:(id)arg2 translate:(BOOL)arg3 ;
+(BOOL)hasEnoughDiskSpace:(unsigned long long)arg1 growth:(unsigned long long)arg2 deltaSpaceNeeded:(unsigned long long*)arg3 isAutoDownload:(BOOL)arg4 includePurging:(BOOL)arg5 ;
+(unsigned long long)totalPurgeableSpace:(id)arg1 ;
+(long long)demoteApps:(unsigned long long)arg1 withError:(id*)arg2 ;
+(id)errorWithCode:(long long)arg1 originalError:(id)arg2 ;
+(BOOL)currentReleaseTypeIsInternal;
+(id)internalRecoveryStringForErrorCode:(long long)arg1 ;
+(id)translateError:(id)arg1 ;
+(id)translateError:(id)arg1 withAddedUserInfo:(id)arg2 ;
+(long long)translateErrorCodeFromError:(id)arg1 ;
+(BOOL)isProductionFused;
+(BOOL)hasEnoughDiskSpace:(unsigned long long)arg1 growth:(unsigned long long)arg2 deltaSpaceNeeded:(unsigned long long*)arg3 ;
+(BOOL)hasEnoughDiskSpace:(unsigned long long)arg1 growth:(unsigned long long)arg2 deltaSpaceNeeded:(unsigned long long*)arg3 isAutoDownload:(BOOL)arg4 ;
+(BOOL)hasEnoughDiskSpace:(unsigned long long)arg1 growth:(unsigned long long)arg2 deltaSpaceNeeded:(unsigned long long*)arg3 isAutoDownload:(BOOL)arg4 disableCDLevelFour:(BOOL)arg5 disableCDLevelThree:(BOOL)arg6 disableSiriDeletion:(BOOL)arg7 disableAppDemotion:(BOOL)arg8 ;
+(long long)appDemoteableSpace;
+(BOOL)appDemotionIsEnabled;
+(void)enableAppDemotion:(BOOL)arg1 ;
+(id)appDemotionSettingQueue;
+(BOOL)freeCachedSpaceSynchronous:(unsigned long long)arg1 timeout:(double)arg2 isAutoDownload:(BOOL)arg3 ;
+(BOOL)freeCachedSpaceSynchronous:(unsigned long long)arg1 timeout:(double)arg2 isAutoDownload:(BOOL)arg3 disableCDLevelFour:(BOOL)arg4 disableSiriDeletion:(BOOL)arg5 disableAppDemotion:(BOOL)arg6 ;
+(long long)cacheDelete:(id)arg1 ;
+(BOOL)isWiFiCapable;
+(BOOL)hasCellularRadio;
+(BOOL)cellularDataIsEnabled;
+(BOOL)alarmSetBeforeDate:(id)arg1 ;
+(long long)MADownloadErrorCodeToSUDownloadErrorCode:(long long)arg1 ;
+(void)postAutoUpdateInformationalNotification:(id)arg1 body:(id)arg2 buttonText:(id)arg3 altButtonText:(id)arg4 withCompletion:(/*^block*/id)arg5 ;
+(void)postFailureNotification:(id)arg1 body:(id)arg2 buttonText:(id)arg3 altButtonText:(id)arg4 ;
+(BOOL)hasEnoughDiskSpace:(unsigned long long)arg1 growth:(unsigned long long)arg2 ;
+(BOOL)freeCachedSpaceSynchronous:(unsigned long long)arg1 timeout:(double)arg2 ;
+(unsigned long long)devicePadding:(id)arg1 ;
+(id)URLIfFileExists:(id)arg1 ;
+(id)addToDate:(id)arg1 numberOfDays:(long long)arg2 ;
+(id)prettyPrintDate:(id)arg1 ;
+(BOOL)writeKeepAliveFile;
+(BOOL)deleteKeepAliveFile;
@end

