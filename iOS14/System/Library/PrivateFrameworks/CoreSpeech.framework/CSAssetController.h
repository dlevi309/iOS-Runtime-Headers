/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <libobjc.A.dylib/CSEventMonitorDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSDictionary, NSMutableDictionary, NSString;

@interface CSAssetController : NSObject <CSEventMonitorDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _assetsMigrationQueue;
	NSDictionary* _csAssetsDictionary;
	NSMutableDictionary* _observers;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                             //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> assetsMigrationQueue;              //@synthesize assetsMigrationQueue=_assetsMigrationQueue - In the implementation block
@property (nonatomic,retain) NSDictionary * csAssetsDictionary;                              //@synthesize csAssetsDictionary=_csAssetsDictionary - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * observers;                                //@synthesize observers=_observers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)getAdBlockerCurrentCompatibilityVersion;
+(unsigned long long)getVoiceTriggerAssetCurrentCompatibilityVersion;
+(id)getAssetTypeStringForType:(unsigned long long)arg1 ;
+(id)getEndpointAssetTypeString;
+(id)filteredAssetsForAssets:(id)arg1 assetType:(unsigned long long)arg2 language:(id)arg3 ;
+(void)addKeyValuePairForQuery:(id*)arg1 assetType:(unsigned long long)arg2 ;
+(id)filteredAssetsForFetchRemoteMetaDataForAssets:(id)arg1 assetType:(unsigned long long)arg2 ;
+(id)getAdBlockerAssetTypeString;
+(unsigned long long)getEndpointAssetCurrentCompatibilityVersion;
+(unsigned long long)getSpeakerRecognitionCurrentCompatibilityVersion;
+(id)getVoiceTriggerAssetTypeString;
+(unsigned long long)getLanguageDetectorCurrentCompatibilityVersion;
+(id)getSpeakerRecognitionAssetTypeString;
+(id)sharedController;
+(id)getLanguageDetectorAssetTypeString;
-(void)fetchRemoteMetaOfType:(unsigned long long)arg1 ;
-(id)installedAssetOfType:(unsigned long long)arg1 withLanguage:(id)arg2 ;
-(NSMutableDictionary *)observers;
-(void)_fetchRemoteAssetOfType:(unsigned long long)arg1 withLanguage:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)init;
-(id)allInstalledAssetsOfType:(unsigned long long)arg1 language:(id)arg2 ;
-(void)fetchRemoteMetaOfType:(unsigned long long)arg1 allowRetry:(BOOL)arg2 ;
-(void)_downloadAssetCatalogForAssetType:(unsigned long long)arg1 complete:(/*^block*/id)arg2 ;
-(void)_startDownloadingAsset:(id)arg1 progress:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_updateFromRemoteToLocalAssets:(id)arg1 forAssetType:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeObserver:(id)arg1 forAssetType:(unsigned long long)arg2 ;
-(void)setObservers:(NSMutableDictionary *)arg1 ;
-(id)_findLatestInstalledAsset:(id)arg1 ;
-(id)_assetQueryForAssetType:(unsigned long long)arg1 ;
-(void)setCsAssetsDictionary:(NSDictionary *)arg1 ;
-(void)setAssetsMigrationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)assetOfType:(unsigned long long)arg1 language:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)_isReadyToUse;
-(void)_installedAssetOfType:(unsigned long long)arg1 withLanguage:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_cleanUpMobileAssetV1Directory;
-(NSObject*<OS_dispatch_queue>)assetsMigrationQueue;
-(BOOL)_isRetryRecommendedWithResult:(long long)arg1 ;
-(void)installedAssetOfType:(unsigned long long)arg1 withLanguage:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_runAssetQuery:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)assetOfType:(unsigned long long)arg1 language:(id)arg2 ;
-(void)installedAssetOfType:(unsigned long long)arg1 language:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_defaultDownloadOptions;
-(void)_downloadAsset:(id)arg1 withComplete:(/*^block*/id)arg2 ;
-(NSDictionary *)csAssetsDictionary;
-(id)installedAssetOfType:(unsigned long long)arg1 language:(id)arg2 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)CSEventMonitorDidReceiveEvent:(id)arg1 ;
-(id)_installedAssetOfType:(unsigned long long)arg1 withLanguage:(id)arg2 ;
-(void)addObserver:(id)arg1 forAssetType:(unsigned long long)arg2 ;
@end

