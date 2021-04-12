/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface IMDCKRecordSaltManager : NSObject {

	NSString* _cachedSalt;
	NSObject*<OS_dispatch_queue> _ckQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> ckQueue;              //@synthesize ckQueue=_ckQueue - In the implementation block
@property (retain) NSString * cachedSalt;                                         //@synthesize cachedSalt=_cachedSalt - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)_container;
-(void)_scheduleOperation:(id)arg1 ;
-(void)clearLocalSyncState;
-(NSString *)cachedSalt;
-(NSObject*<OS_dispatch_queue>)ckQueue;
-(void)setCachedSalt:(NSString *)arg1 ;
-(void)fetchLatestRecordKeyFromCKAndCreateIfKeyDoesNotExistWithCompletion:(/*^block*/id)arg1 forceFetch:(BOOL)arg2 ;
-(id)_CKUtilitiesSharedInstance;
-(void)_fetchLatestSaltFromCloudKitAndPersistWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchLatestRecordKeyFromCKAndCreateIfKeyDoesNotExistWithCompletion:(/*^block*/id)arg1 ;
-(void)deleteDeDupeRecordZone;
@end

