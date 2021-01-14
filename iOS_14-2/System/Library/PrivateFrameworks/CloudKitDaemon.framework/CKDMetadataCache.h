/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKit/CKSQLite.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface CKDMetadataCache : CKSQLite {

	NSObject*<OS_dispatch_queue> _cacheQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> cacheQueue;              //@synthesize cacheQueue=_cacheQueue - In the implementation block
+(id)dbFileName;
+(id)sharedCache;
-(id)inlock_containerInfoForContainerID:(id)arg1 accountID:(id)arg2 ;
-(void)willCreateDatabase;
-(void)setCachedDSID:(id)arg1 forAccountID:(id)arg2 ;
-(id)inlock_applicationMetadataForApplicationID:(id)arg1 ;
-(void)setPublicKey:(id)arg1 ofType:(id)arg2 withIdentifier:(id)arg3 ;
-(void)removeContainerID:(id)arg1 ;
-(id)cachedDSIDForAccountID:(id)arg1 ;
-(void)setPushToken:(id)arg1 forAppContainerAccountTuple:(id)arg2 ;
-(void)setContainerInfo:(id)arg1 forContainerID:(id)arg2 accountID:(id)arg3 ;
-(id)appContainerIntersectionMetadataForAppContainerAccountTuple:(id)arg1 ;
-(void)setGlobalConfiguration:(id)arg1 ;
-(void)removeKnownApplicationID:(id)arg1 ;
-(void)inlock_setDateOfLastTokenUpdate:(id)arg1 ;
-(id)publicKeyOfType:(id)arg1 withIdentifier:(id)arg2 ;
-(void)setCacheQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)knownContainerizedApplicationBundleIDs;
-(NSObject*<OS_dispatch_queue>)cacheQueue;
-(id)_initWithCacheDir:(id)arg1 ;
-(id)pushTokenForAppContainerAccountTuple:(id)arg1 filterOldTokens:(BOOL)arg2 ;
-(id)knownAppContainerAccountTuples;
-(id)knownApplicationBundleIDs;
-(id)applicationMetadataForApplicationID:(id)arg1 ;
-(id)dateOfLastTokenUpdate;
-(id)knownAppContainerTuplesForAccountID:(id)arg1 ;
-(id)globalConfiguration;
-(void)expungeStaleAccountIDs;
-(void)setDateOfLastTokenUpdate:(id)arg1 ;
-(void)setAppContainerIntersectionMetadata:(id)arg1 forAppContainerAccountTuple:(id)arg2 ;
-(void)setApplicationMetadata:(id)arg1 forApplicationID:(id)arg2 ;
-(void)expungeAllData;
-(void)expungeDataForAccountID:(id)arg1 ;
-(void)expungeOldData;
-(id)containerInfoForContainerID:(id)arg1 accountID:(id)arg2 ;
-(void)inlock_expungeDataForAccountID:(id)arg1 ;
@end

