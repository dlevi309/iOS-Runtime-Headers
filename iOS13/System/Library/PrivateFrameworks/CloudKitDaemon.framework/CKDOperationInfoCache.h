/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)sharedCache;
+(id)dbFileName;
-(NSObject*<OS_dispatch_queue>)cacheQueue;
-(void)setCacheQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)resumableOperationInfosByAppContainerTuplesWithProgressPurged:(BOOL)arg1 ;
-(void)deleteAllInfoForOperationWithID:(id)arg1 ;
-(void)setOperationInfo:(id)arg1 forOperationID:(id)arg2 appContainerTuple:(id)arg3 accountID:(id)arg4 ;
-(id)outstandingOperationInfosForIDs:(id)arg1 ;
-(id)allOutstandingOperationIDsForAppContainerTuple:(id)arg1 accountID:(id)arg2 ;
-(void)registerAttemptForOperationWithID:(id)arg1 ;
-(id)_initWithCacheDir:(id)arg1 ;
-(id)operationInfoMetadataForOperationWithID:(id)arg1 ;
-(void)registerOperationAndSetResult:(id)arg1 forOperationInfo:(id)arg2 appContainerTuple:(id)arg3 accountID:(id)arg4 ;
-(NSObject*<OS_dispatch_queue>)cacheDelegateQueue;
-(NSMutableDictionary *)delegateWrappersByOperationID;
-(void)_locked_enumerateCallbackArgumentsForOperationWithID:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)_lockedResultForOperationWithID:(id)arg1 ;
-(void)_lockedSetOperationInfo:(id)arg1 forOperationID:(id)arg2 appContainerTuple:(id)arg3 accountID:(id)arg4 ;
-(void)_lockedSetOperationResult:(id)arg1 forOperationID:(id)arg2 ;
-(id)_locked_operationInfoForID:(id)arg1 ;
-(void)expungeOperationInfoForDeletedAccountID:(id)arg1 ;
-(void)registerDelegate:(id)arg1 forOperationWithID:(id)arg2 ;
-(void)unregisterDelegate:(id)arg1 forOperationWithID:(id)arg2 ;
-(id)resultForOperationWithID:(id)arg1 ;
-(void)enumerateCallbackArgumentsForOperationWithID:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)setProgressCallbackArguments:(id)arg1 forOperationID:(id)arg2 ;
-(void)setOperationResult:(id)arg1 forOperationID:(id)arg2 ;
-(void)registerCacheEvictionActivity;
-(void)setCacheDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDelegateWrappersByOperationID:(NSMutableDictionary *)arg1 ;
@end

