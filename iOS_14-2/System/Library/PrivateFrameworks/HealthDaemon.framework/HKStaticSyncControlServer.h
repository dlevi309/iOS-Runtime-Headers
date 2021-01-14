/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HKStaticSyncControlServer <NSObject>
@required
-(id)remote_runStaticSyncExportWithOptions:(unsigned long long)arg1 storeIdentifier:(id)arg2 URL:(id)arg3 batchSize:(unsigned long long)arg4 completion:(/*^block*/id)arg5;
-(id)remote_runStaticSyncImportWithOptions:(unsigned long long)arg1 storeIdentifier:(id)arg2 URL:(id)arg3 completion:(/*^block*/id)arg4;

@end

