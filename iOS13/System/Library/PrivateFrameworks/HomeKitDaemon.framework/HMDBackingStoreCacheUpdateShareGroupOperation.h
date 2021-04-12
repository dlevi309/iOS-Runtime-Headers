/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class HMDBackingStoreCacheShareGroup, CKShare, NSArray;

@interface HMDBackingStoreCacheUpdateShareGroupOperation : HMDBackingStoreOperation {

	HMDBackingStoreCacheShareGroup* _record;
	CKShare* _share;
	NSArray* _users;

}

@property (nonatomic,retain) HMDBackingStoreCacheShareGroup * record;              //@synthesize record=_record - In the implementation block
@property (nonatomic,retain) CKShare * share;                                      //@synthesize share=_share - In the implementation block
@property (nonatomic,retain) NSArray * users;                                      //@synthesize users=_users - In the implementation block
-(NSArray *)users;
-(CKShare *)share;
-(void)setShare:(CKShare *)arg1 ;
-(HMDBackingStoreCacheShareGroup *)record;
-(void)setRecord:(HMDBackingStoreCacheShareGroup *)arg1 ;
-(void)setUsers:(NSArray *)arg1 ;
-(id)mainReturningError;
-(id)initWithShareGroup:(id)arg1 share:(id)arg2 users:(id)arg3 resultBlock:(/*^block*/id)arg4 ;
@end

