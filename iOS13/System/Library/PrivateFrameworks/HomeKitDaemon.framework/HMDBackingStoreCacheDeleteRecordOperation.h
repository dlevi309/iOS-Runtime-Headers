/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class HMDBackingStoreCacheGroup, HMDBackingStoreCacheShareGroup, NSArray;

@interface HMDBackingStoreCacheDeleteRecordOperation : HMDBackingStoreOperation {

	HMDBackingStoreCacheGroup* _group;
	HMDBackingStoreCacheShareGroup* _share;
	NSArray* _recordNames;

}

@property (nonatomic,retain) HMDBackingStoreCacheGroup * group;                   //@synthesize group=_group - In the implementation block
@property (nonatomic,retain) HMDBackingStoreCacheShareGroup * share;              //@synthesize share=_share - In the implementation block
@property (nonatomic,retain) NSArray * recordNames;                               //@synthesize recordNames=_recordNames - In the implementation block
-(void)setGroup:(HMDBackingStoreCacheGroup *)arg1 ;
-(HMDBackingStoreCacheGroup *)group;
-(HMDBackingStoreCacheShareGroup *)share;
-(void)setShare:(HMDBackingStoreCacheShareGroup *)arg1 ;
-(id)mainReturningError;
-(id)initWithGroup:(id)arg1 share:(id)arg2 recordNames:(id)arg3 resultBlock:(/*^block*/id)arg4 ;
-(NSArray *)recordNames;
-(id)initWithGroup:(id)arg1 recordNames:(id)arg2 resultBlock:(/*^block*/id)arg3 ;
-(id)initWithShareGroup:(id)arg1 recordNames:(id)arg2 resultBlock:(/*^block*/id)arg3 ;
-(void)setRecordNames:(NSArray *)arg1 ;
@end

