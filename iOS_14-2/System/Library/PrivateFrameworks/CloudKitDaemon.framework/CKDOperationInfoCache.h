/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKit/CKSQLite.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface CKDOperationInfoCache : CKSQLite {

	NSObject*<OS_dispatch_queue> _cacheQueue;
	NSObject*<OS_dispatch_queue> _cacheDelegateQueue;
	NSMutableDictionary* _delegateWrappersByOperationID;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> cacheQueue;                          //@synthesize cacheQueue=_cacheQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> cacheDelegateQueue;                  //@synthesize cacheDelegateQueue=_cacheDelegateQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * delegateWrappersByOperationID;              //@synthesize delegateWrappersByOperationID=_delegateWrappersByOperationID - In the implementation block
+(id)dbFileName;
+(id)sharedCache;
-(void)archiveCallback:(id)arg1 forOperationID:(id)arg2 ;
-(id)resumableOperationInfosByAppContainerTuplesWithProgressPurged:(BOOL)arg1 ;
-(id)outstandingOperationInfosForIDs:(id)arg1 ;
-(void)setCacheDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableDictionary *)delegateWrappersByOperationID;
-(void)registerDelegate:(id)arg1 forOperationWithID:(id)arg2 ;
-(void)deleteAllInfoForOperationWithID:(id)arg1 ;
-(void)_locked_enumerateCallbacksForOperationWithID:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)setOperationInfo:(id)arg1 forOperationID:(id)arg2 appContainerTuple:(id)arg3 accountID:(id)arg4 ;
-(void)_lockedSetOperationInfo:(id)arg1 forOperationID:(id)arg2 appContainerTuple:(id)arg3 accountID:(id)arg4 ;
-(void)setCacheQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)_locked_operationInfoForID:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)cacheQueue;
-(id)_initWithCacheDir:(id)arg1 ;
-(void)expungeOperationInfoForDeletedAccountID:(id)arg1 ;
-(void)setDelegateWrappersByOperationID:(NSMutableDictionary *)arg1 ;
-(id)operationInfoMetadataForOperationWithID:(id)arg1 ;
-(void)_lockedArchiveCallback:(id)arg1 forOperationID:(id)arg2 ;
-(void)registerAttemptForOperationWithID:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)cacheDelegateQueue;
-(void)enumerateCallbacksForOperationWithID:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)allOutstandingOperationIDsForAppContainerTuple:(id)arg1 accountID:(id)arg2 ;
-(void)unregisterDelegate:(id)arg1 forOperationWithID:(id)arg2 ;
-(void)registerCacheEvictionActivity;
@end

