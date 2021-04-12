/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class HMDBackingStoreCacheGroup;

@interface HMDBackingStoreCacheCreateGroupOperation : HMDBackingStoreOperation {

	HMDBackingStoreCacheGroup* _record;
	/*^block*/id _creationBlock;

}

@property (nonatomic,retain) HMDBackingStoreCacheGroup * record;              //@synthesize record=_record - In the implementation block
@property (nonatomic,copy) id creationBlock;                                  //@synthesize creationBlock=_creationBlock - In the implementation block
-(void)setCreationBlock:(id)arg1 ;
-(id)creationBlock;
-(HMDBackingStoreCacheGroup *)record;
-(void)setRecord:(HMDBackingStoreCacheGroup *)arg1 ;
-(id)mainReturningError;
-(id)initWithZone:(id)arg1 owner:(id)arg2 rootRecord:(id)arg3 subscriptionName:(id)arg4 subscription:(id)arg5 creationBlock:(/*^block*/id)arg6 ;
@end

