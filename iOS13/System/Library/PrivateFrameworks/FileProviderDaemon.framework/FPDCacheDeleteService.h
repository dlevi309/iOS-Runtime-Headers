/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
*/


@class FPDExtensionManager;

@interface FPDCacheDeleteService : NSObject {

	FPDExtensionManager* _extensionManager;

}

@property (nonatomic,retain) FPDExtensionManager * extensionManager;              //@synthesize extensionManager=_extensionManager - In the implementation block
+(int)urgencyAtWhichItIsAcceptableToPurgeItemWithLastUsedDate:(id)arg1 ;
-(void)start;
-(void)dumpStateTo:(id)arg1 ;
-(void)setExtensionManager:(FPDExtensionManager *)arg1 ;
-(FPDExtensionManager *)extensionManager;
-(void)enumeratePurgeableFilesOnVolume:(id)arg1 forUrgency:(int)arg2 sizeOnly:(BOOL)arg3 handler:(/*^block*/id)arg4 ;
-(id)nonPurgableSpacePerProviderOnVolume:(id)arg1 ;
-(void)evictItems:(id)arg1 ;
-(void)registerActivity;
-(void)enumerateProviderDomainOnVolume:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)allStorageVolumes;
-(id)purgableSpaceForAllUrgenciesOnVolume:(id)arg1 ;
-(BOOL)getVolume:(int*)arg1 forPath:(id)arg2 ;
-(id)volumesByProviderDomain;
-(id)queryWithAttributes:(id)arg1 ;
-(BOOL)shouldSearchableItem:(id)arg1 beEvictedAtUrgency:(int)arg2 ;
-(id)evictableByProviderDomainID:(int)arg1 ;
@end

