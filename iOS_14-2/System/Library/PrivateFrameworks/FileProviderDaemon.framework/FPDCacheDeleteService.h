/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
*/


@class FPDExtensionManager;

@interface FPDCacheDeleteService : NSObject {

	FPDExtensionManager* _extensionManager;

}

@property (nonatomic,retain) FPDExtensionManager * extensionManager;              //@synthesize extensionManager=_extensionManager - In the implementation block
+(int)urgencyAtWhichItIsAcceptableToPurgeItemWithLastUsedDate:(id)arg1 ;
-(void)enumerateFPFSDomainsUsingBlock:(/*^block*/id)arg1 ;
-(FPDExtensionManager *)extensionManager;
-(BOOL)getVolume:(int*)arg1 forPath:(id)arg2 ;
-(void)enumerateProviderDomainOnVolume:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)start;
-(id)queryWithAttributes:(id)arg1 ;
-(void)enumeratePurgeableFilesOnVolume:(id)arg1 forUrgency:(int)arg2 sizeOnly:(BOOL)arg3 activity:(id)arg4 handler:(/*^block*/id)arg5 ;
-(id)purgableSpaceForAllUrgenciesOnVolume:(id)arg1 activity:(id)arg2 ;
-(BOOL)shouldSearchableItem:(id)arg1 beEvictedAtUrgency:(int)arg2 ;
-(void)dumpStateTo:(id)arg1 ;
-(id)volumesByProviderDomain;
-(id)allStorageVolumes;
-(void)setExtensionManager:(FPDExtensionManager *)arg1 ;
-(id)evictableByProviderDomainID:(int)arg1 activity:(id)arg2 ;
-(void)registerActivity;
-(id)nonPurgableSpacePerProviderOnVolume:(id)arg1 ;
-(void)evictItems:(id)arg1 ;
@end

