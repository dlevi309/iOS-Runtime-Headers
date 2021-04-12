/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class HMDBackingStoreCacheGroup, HMDBackingStoreCacheShareGroup;

@interface HMDBackingStoreCacheFetchMigratedResult : HMDBackingStoreOperation {

	BOOL _update;
	BOOL _migration;
	HMDBackingStoreCacheGroup* _group;
	HMDBackingStoreCacheShareGroup* _share;
	/*^block*/id _fetchResult;

}

@property (nonatomic,retain) HMDBackingStoreCacheGroup * group;                   //@synthesize group=_group - In the implementation block
@property (nonatomic,retain) HMDBackingStoreCacheShareGroup * share;              //@synthesize share=_share - In the implementation block
@property (readonly) BOOL update;                                                 //@synthesize update=_update - In the implementation block
@property (readonly) BOOL migration;                                              //@synthesize migration=_migration - In the implementation block
@property (nonatomic,copy) id fetchResult;                                        //@synthesize fetchResult=_fetchResult - In the implementation block
-(void)setGroup:(HMDBackingStoreCacheGroup *)arg1 ;
-(HMDBackingStoreCacheGroup *)group;
-(BOOL)update;
-(id)fetchResult;
-(HMDBackingStoreCacheShareGroup *)share;
-(void)setShare:(HMDBackingStoreCacheShareGroup *)arg1 ;
-(BOOL)migration;
-(void)setFetchResult:(id)arg1 ;
-(id)mainReturningError;
-(id)initWithShareGroup:(id)arg1 update:(BOOL)arg2 migration:(BOOL)arg3 fetchResult:(/*^block*/id)arg4 ;
-(id)initWithGroup:(id)arg1 update:(BOOL)arg2 migration:(BOOL)arg3 fetchResult:(/*^block*/id)arg4 ;
@end

