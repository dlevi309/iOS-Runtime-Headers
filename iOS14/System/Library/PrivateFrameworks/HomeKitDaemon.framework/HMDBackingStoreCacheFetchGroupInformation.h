/*
* Generated on Thursday, January 14, 2021 at 2:25:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class HMDBackingStoreCacheGroup;

@interface HMDBackingStoreCacheFetchGroupInformation : HMDBackingStoreOperation {

	HMDBackingStoreCacheGroup* _group;
	/*^block*/id _fetchResult;

}

@property (nonatomic,retain) HMDBackingStoreCacheGroup * group;              //@synthesize group=_group - In the implementation block
@property (nonatomic,copy) id fetchResult;                                   //@synthesize fetchResult=_fetchResult - In the implementation block
-(void)setGroup:(HMDBackingStoreCacheGroup *)arg1 ;
-(HMDBackingStoreCacheGroup *)group;
-(id)fetchResult;
-(void)setFetchResult:(id)arg1 ;
-(id)mainReturningError;
-(id)initWithGroup:(id)arg1 fetchResult:(/*^block*/id)arg2 ;
@end

