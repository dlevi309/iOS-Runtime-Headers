/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/


@interface WLKSettingsCloudUtilities : NSObject
+(id)_queue;
+(id)_connection;
+(BOOL)cloudSyncEnabled;
+(void)deleteAllHistoryWithCompletion:(/*^block*/id)arg1 ;
+(BOOL)synchronizeSettingsFromCloudIfNeeded:(id*)arg1 ;
+(void)forceUpdateWithCompletion:(/*^block*/id)arg1 ;
+(void)updateCloudStoreAppSettings:(id)arg1 deleteHistory:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
+(id)_syncDictionaryForLocalStore;
+(void)_postChangeDictionaryToCloud:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)updateCloudStoreAppSettings:(id)arg1 deleteHistory:(BOOL)arg2 removeEntry:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
+(id)_syncDictionaryForAppSettings:(id)arg1 ;
+(void)updateCloudStoreAccountLevelSetting:(id)arg1 value:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)_fetchSyncDictionary:(/*^block*/id)arg1 ;
+(void)synchronizeSettingsFromCloudIfNeededWithCompletion:(/*^block*/id)arg1 ;
+(void)updateCloudStoreWithCompletion:(/*^block*/id)arg1 ;
+(void)resetAccountWithCompletion:(/*^block*/id)arg1 ;
+(void)updateLocalStoreWithCompletion:(/*^block*/id)arg1 ;
@end

