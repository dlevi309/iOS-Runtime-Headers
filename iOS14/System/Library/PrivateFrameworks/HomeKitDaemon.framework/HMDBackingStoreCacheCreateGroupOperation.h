/*
* Generated on Thursday, January 14, 2021 at 2:25:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(HMDBackingStoreCacheGroup *)record;
-(void)setCreationBlock:(id)arg1 ;
-(id)creationBlock;
-(void)setRecord:(HMDBackingStoreCacheGroup *)arg1 ;
-(id)mainReturningError;
-(id)initWithZone:(id)arg1 owner:(id)arg2 rootRecord:(id)arg3 subscriptionName:(id)arg4 subscription:(id)arg5 creationBlock:(/*^block*/id)arg6 ;
@end

