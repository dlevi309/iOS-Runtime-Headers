/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
*/


@interface SUUtility : NSObject
+(BOOL)isDaemon;
+(id)serialNumber;
+(id)taskQueue;
+(BOOL)isCellularDataCapable;
+(void)setIsDaemon:(BOOL)arg1 ;
+(id)errorWithCode:(long long)arg1 ;
+(id)gregorianCalendar;
+(id)systemContainerURL;
+(id)currentDeviceName;
+(void)setCacheable:(BOOL)arg1 ;
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
+(id)errorRemovingUserInfoKey:(id)arg1 originalError:(id)arg2 ;
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
+(unsigned long long)devicePadding:(id)arg1 ;
+(id)appDemotionSettingQueue;
+(BOOL)freeCachedSpaceSynchronous:(unsigned long long)arg1 timeout:(double)arg2 isAutoDownload:(BOOL)arg3 ;
+(BOOL)freeCachedSpaceSynchronous:(unsigned long long)arg1 timeout:(double)arg2 isAutoDownload:(BOOL)arg3 disableCDLevelFour:(BOOL)arg4 disableSiriDeletion:(BOOL)arg5 disableAppDemotion:(BOOL)arg6 ;
+(long long)cacheDelete:(id)arg1 ;
+(id)mainWorkQueue;
+(id)fastWorkQueue;
+(BOOL)isWiFiCapable;
+(BOOL)hasCellularRadio;
+(BOOL)cellularDataIsEnabled;
+(BOOL)alarmSetBeforeDate:(id)arg1 ;
+(int)randomIntWithMinVal:(unsigned)arg1 maxVal:(unsigned)arg2 ;
+(long long)MADownloadErrorCodeToSUDownloadErrorCode:(long long)arg1 ;
+(id)autoDownloadExpiredError:(BOOL)arg1 ;
+(void)postAutoUpdateInformationalNotification:(id)arg1 body:(id)arg2 buttonText:(id)arg3 altButtonText:(id)arg4 withCompletion:(/*^block*/id)arg5 ;
+(void)postFailureNotification:(id)arg1 body:(id)arg2 buttonText:(id)arg3 altButtonText:(id)arg4 ;
+(BOOL)hasEnoughDiskSpace:(unsigned long long)arg1 growth:(unsigned long long)arg2 ;
+(unsigned long long)systemPartitionGrowth:(id)arg1 ;
+(BOOL)freeCachedSpaceSynchronous:(unsigned long long)arg1 timeout:(double)arg2 ;
+(id)URLIfFileExists:(id)arg1 ;
+(id)addToDate:(id)arg1 numberOfDays:(long long)arg2 ;
+(id)prettyPrintDate:(id)arg1 ;
+(BOOL)writeKeepAliveFile;
+(BOOL)deleteKeepAliveFile;
+(id)bootTime;
@end

