/*
* Generated on Thursday, January 14, 2021 at 2:25:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class HMDBackingStoreCacheGroup;

@interface HMDBackingStoreCacheFetchMigratedResult : HMDBackingStoreOperation {

	BOOL _update;
	BOOL _migration;
	HMDBackingStoreCacheGroup* _group;
	/*^block*/id _fetchResult;

}

@property (nonatomic,retain) HMDBackingStoreCacheGroup * group;              //@synthesize group=_group - In the implementation block
@property (readonly) BOOL update;                                            //@synthesize update=_update - In the implementation block
@property (readonly) BOOL migration;                                         //@synthesize migration=_migration - In the implementation block
@property (nonatomic,copy) id fetchResult;                                   //@synthesize fetchResult=_fetchResult - In the implementation block
-(void)setGroup:(HMDBackingStoreCacheGroup *)arg1 ;
-(HMDBackingStoreCacheGroup *)group;
-(id)fetchResult;
-(BOOL)migration;
-(BOOL)update;
-(void)setFetchResult:(id)arg1 ;
-(id)mainReturningError;
-(id)initWithGroup:(id)arg1 update:(BOOL)arg2 migration:(BOOL)arg3 fetchResult:(/*^block*/id)arg4 ;
@end

