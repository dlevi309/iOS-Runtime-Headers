/*
* Generated on Thursday, January 14, 2021 at 2:25:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class HMDBackingStoreCacheGroup, CKRecordZoneSubscription;

@interface HMDBackingStoreCacheUpdateGroupSubscriptionOperation : HMDBackingStoreOperation {

	HMDBackingStoreCacheGroup* _record;
	CKRecordZoneSubscription* _subscription;

}

@property (nonatomic,retain) HMDBackingStoreCacheGroup * record;                   //@synthesize record=_record - In the implementation block
@property (nonatomic,retain) CKRecordZoneSubscription * subscription;              //@synthesize subscription=_subscription - In the implementation block
-(HMDBackingStoreCacheGroup *)record;
-(void)setRecord:(HMDBackingStoreCacheGroup *)arg1 ;
-(void)setSubscription:(CKRecordZoneSubscription *)arg1 ;
-(CKRecordZoneSubscription *)subscription;
-(id)mainReturningError;
-(id)initWithGroup:(id)arg1 subscription:(id)arg2 resultBlock:(/*^block*/id)arg3 ;
@end

