/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
*/

#import <BookDataStore/BCCloudKitTransaction.h>

@class BCCloudDataSyncManager;

@interface BCCloudKitSyncToCKTransaction : BCCloudKitTransaction {

	BCCloudDataSyncManager* _syncManager;

}

@property (nonatomic,retain) BCCloudDataSyncManager * syncManager;              //@synthesize syncManager=_syncManager - In the implementation block
+(id)transactionNameForEntityName:(id)arg1 ;
-(void)setSyncManager:(BCCloudDataSyncManager *)arg1 ;
-(double)coalescingDelay;
-(BCCloudDataSyncManager *)syncManager;
-(void)performWorkWithCompletion:(/*^block*/id)arg1 ;
-(double)transactionLifetimeTimout;
-(id)initWithEntityName:(id)arg1 syncManager:(id)arg2 delegate:(id)arg3 ;
@end

