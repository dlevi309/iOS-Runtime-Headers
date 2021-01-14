/*
* Generated on Thursday, January 14, 2021 at 2:25:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class HMDBackingStoreCacheGroup, NSArray;

@interface HMDBackingStoreCacheDeleteRecordOperation : HMDBackingStoreOperation {

	HMDBackingStoreCacheGroup* _group;
	NSArray* _recordNames;

}

@property (nonatomic,retain) HMDBackingStoreCacheGroup * group;              //@synthesize group=_group - In the implementation block
@property (nonatomic,retain) NSArray * recordNames;                          //@synthesize recordNames=_recordNames - In the implementation block
-(void)setGroup:(HMDBackingStoreCacheGroup *)arg1 ;
-(HMDBackingStoreCacheGroup *)group;
-(NSArray *)recordNames;
-(id)mainReturningError;
-(id)initWithGroup:(id)arg1 recordNames:(id)arg2 resultBlock:(/*^block*/id)arg3 ;
-(void)setRecordNames:(NSArray *)arg1 ;
@end

