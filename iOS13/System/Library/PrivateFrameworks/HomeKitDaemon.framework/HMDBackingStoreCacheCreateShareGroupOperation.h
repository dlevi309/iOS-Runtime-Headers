/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class HMDBackingStoreCacheShareGroup;

@interface HMDBackingStoreCacheCreateShareGroupOperation : HMDBackingStoreOperation {

	HMDBackingStoreCacheShareGroup* _record;
	/*^block*/id _creationBlock;

}

@property (nonatomic,retain) HMDBackingStoreCacheShareGroup * record;              //@synthesize record=_record - In the implementation block
@property (nonatomic,copy) id creationBlock;                                       //@synthesize creationBlock=_creationBlock - In the implementation block
-(void)setCreationBlock:(id)arg1 ;
-(id)creationBlock;
-(HMDBackingStoreCacheShareGroup *)record;
-(void)setRecord:(HMDBackingStoreCacheShareGroup *)arg1 ;
-(id)mainReturningError;
-(id)initWithGroup:(id)arg1 targetOwner:(id)arg2 rootRecord:(id)arg3 creationBlock:(/*^block*/id)arg4 ;
@end

