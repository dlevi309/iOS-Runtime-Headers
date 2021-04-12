/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_container;
-(id)init;
-(NSObject*<OS_dispatch_queue>)ckQueue;
-(void)_scheduleOperation:(id)arg1 ;
-(void)dealloc;
-(void)clearLocalSyncState;
-(NSString *)cachedSalt;
-(void)setCachedSalt:(NSString *)arg1 ;
-(void)fetchLatestRecordKeyFromCKAndCreateIfKeyDoesNotExistWithCompletion:(/*^block*/id)arg1 forceFetch:(BOOL)arg2 ;
-(id)_CKUtilitiesSharedInstance;
-(void)_fetchLatestSaltFromCloudKitAndPersistWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchLatestRecordKeyFromCKAndCreateIfKeyDoesNotExistWithCompletion:(/*^block*/id)arg1 ;
-(void)deleteDeDupeRecordZone;
@end

