/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
*/

#import <BookDataStore/BCCloudKitTransaction.h>

@class BCCloudDataSyncManager;

@interface BCCloudKitSyncToCKTransaction : BCCloudKitTransaction {

	BCCloudDataSyncManager* _syncManager;

}

@property (nonatomic,retain) BCCloudDataSyncManager * syncManager;              //@synthesize syncManager=_syncManager - In the implementation block
+(id)transactionNameForEntityName:(id)arg1 ;
-(BCCloudDataSyncManager *)syncManager;
-(void)setSyncManager:(BCCloudDataSyncManager *)arg1 ;
-(void)performWorkWithCompletion:(/*^block*/id)arg1 ;
-(double)coalescingDelay;
-(double)transactionLifetimeTimout;
-(id)initWithEntityName:(id)arg1 syncManager:(id)arg2 delegate:(id)arg3 ;
@end

