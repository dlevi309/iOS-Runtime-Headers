/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@interface PLCloudStorageInfo : NSObject {

	BOOL _hasMaxQuotaTier;
	long long _totalBytes;
	long long _availableBytes;
	long long _usedBytes;
	long long _cameraRollBackupBytes;
	long long _photosMediaUsageBytes;

}

@property (nonatomic,readonly) long long totalBytes;                         //@synthesize totalBytes=_totalBytes - In the implementation block
@property (nonatomic,readonly) long long availableBytes;                     //@synthesize availableBytes=_availableBytes - In the implementation block
@property (nonatomic,readonly) long long usedBytes;                          //@synthesize usedBytes=_usedBytes - In the implementation block
@property (nonatomic,readonly) long long cameraRollBackupBytes;              //@synthesize cameraRollBackupBytes=_cameraRollBackupBytes - In the implementation block
@property (nonatomic,readonly) long long photosMediaUsageBytes;              //@synthesize photosMediaUsageBytes=_photosMediaUsageBytes - In the implementation block
@property (nonatomic,readonly) BOOL hasMaxQuotaTier;                         //@synthesize hasMaxQuotaTier=_hasMaxQuotaTier - In the implementation block
+(id)storageInfoWithTotal:(long long)arg1 available:(long long)arg2 used:(long long)arg3 cameraRollBackupBytes:(long long)arg4 photosMediaUsage:(long long)arg5 hasMaxQuotaTier:(BOOL)arg6 ;
-(long long)totalBytes;
-(id)initWithTotalQuotaBytes:(long long)arg1 totalAvailableBytes:(long long)arg2 totalUsedBytes:(long long)arg3 cameraRollBackupBytes:(long long)arg4 photosMediaUsage:(long long)arg5 hasMaxQuotaTier:(BOOL)arg6 ;
-(long long)availableBytes;
-(long long)cameraRollBackupBytes;
-(long long)photosMediaUsageBytes;
-(BOOL)hasMaxQuotaTier;
-(id)description;
-(long long)usedBytes;
@end

