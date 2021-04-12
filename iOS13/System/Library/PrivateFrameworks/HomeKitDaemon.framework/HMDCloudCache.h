/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@protocol OS_dispatch_queue;
@class HMFUnfairLock, HMDCloudZone, HMDCloudLegacyZone, HMDCloudMetadataZone, HMDCloudHomeManagerZone, NSMutableDictionary, HMDBackingStore, NSObject, CKServerChangeToken;

@interface HMDCloudCache : HMFObject {

	HMFUnfairLock* _lock;
	HMDCloudZone* _homeDataInformation;
	HMDCloudLegacyZone* _legacyZone;
	HMDCloudMetadataZone* _metadataZone;
	HMDCloudHomeManagerZone* _homeManagerZone;
	NSMutableDictionary* _homeZones;
	HMDBackingStore* _backingStore;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (nonatomic,retain) HMDCloudZone * homeDataInformation;                           //@synthesize homeDataInformation=_homeDataInformation - In the implementation block
@property (nonatomic,retain) HMDCloudLegacyZone * legacyZone;                              //@synthesize legacyZone=_legacyZone - In the implementation block
@property (nonatomic,retain) HMDCloudMetadataZone * metadataZone;                          //@synthesize metadataZone=_metadataZone - In the implementation block
@property (nonatomic,retain) HMDCloudHomeManagerZone * homeManagerZone;                    //@synthesize homeManagerZone=_homeManagerZone - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * homeZones;                              //@synthesize homeZones=_homeZones - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                       //@synthesize workQueue=_workQueue - In the implementation block
@property (assign,nonatomic,__weak) HMDBackingStore * backingStore;                        //@synthesize backingStore=_backingStore - In the implementation block
@property (nonatomic,retain) CKServerChangeToken * databaseServerChangeToken; 
-(id)init;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(HMDBackingStore *)backingStore;
-(void)setBackingStore:(HMDBackingStore *)arg1 ;
-(void)_createZones:(id)arg1 completion:(/*^block*/id)arg2 ;
-(HMDCloudLegacyZone *)legacyZone;
-(HMDCloudMetadataZone *)metadataZone;
-(HMDCloudHomeManagerZone *)homeManagerZone;
-(void)homeZoneWithName:(id)arg1 owner:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)deleteHomeZoneWithName:(id)arg1 ;
-(void)setDatabaseServerChangeToken:(CKServerChangeToken *)arg1 ;
-(id)allHomeZones;
-(void)deleteAllZones;
-(void)createAndFetchZonesFromBackingStore:(/*^block*/id)arg1 ;
-(BOOL)homeZoneExists:(id)arg1 ;
-(CKServerChangeToken *)databaseServerChangeToken;
-(id)_findStoreCacheZone:(id)arg1 byName:(id)arg2 ;
-(void)setHomeDataInformation:(HMDCloudZone *)arg1 ;
-(void)setLegacyZone:(HMDCloudLegacyZone *)arg1 ;
-(void)setMetadataZone:(HMDCloudMetadataZone *)arg1 ;
-(void)setHomeManagerZone:(HMDCloudHomeManagerZone *)arg1 ;
-(NSMutableDictionary *)homeZones;
-(HMDCloudZone *)homeDataInformation;
-(void)setHomeZones:(NSMutableDictionary *)arg1 ;
-(id)initWithBackingStore:(id)arg1 workQueue:(id)arg2 ;
@end

