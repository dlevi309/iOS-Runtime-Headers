/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPhotosCore.framework/NanoPhotosCore
*/


@class NPSDomainAccessor, NPTONotificationCenter, NSMutableArray, NRDevice;

@interface NPTOPreferencesAccessor : NSObject {

	NPSDomainAccessor* _domainAccessor;
	NPTONotificationCenter* _notificationCenter;
	NSMutableArray* _batchUpdatesKeyStack;
	NRDevice* _device;

}

@property (nonatomic,readonly) NRDevice * device;              //@synthesize device=_device - In the implementation block
-(id)initWithDevice:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(NRDevice *)device;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)npto_fetchSyncedAlbum;
-(id)_npto_defaultAlbum;
-(id)npto_syncedAlbumIdentifier;
-(unsigned long long)npto_syncedPhotosLimit;
-(void)performBatchUpdates:(/*^block*/id)arg1 synchronizeToRemoteDevice:(BOOL)arg2 ;
-(unsigned long long)npto_fetchCountForAssetCollection:(id)arg1 ;
-(void)npto_setFetchCount:(unsigned long long)arg1 forAssetCollection:(id)arg2 ;
-(void)npto_removeFetchCountForAssetCollection:(id)arg1 ;
-(BOOL)npto_isAlwaysUpdatingEnabledForAssetCollection:(id)arg1 ;
-(void)npto_setAlwaysUpdatingEnabled:(BOOL)arg1 forAssetCollection:(id)arg2 ;
-(id)npto_fetchCountsForAllCollections;
-(void)npto_setFetchCountsForAllCollections:(id)arg1 ;
-(id)npto_alwaysUpdatingEnabledForAllCollections;
-(void)npto_setAlwaysUpdatingEnabledForAllCollections:(id)arg1 ;
-(id)_notificationNameForKey:(id)arg1 ;
-(id)changeObserverForKey:(id)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
@end

