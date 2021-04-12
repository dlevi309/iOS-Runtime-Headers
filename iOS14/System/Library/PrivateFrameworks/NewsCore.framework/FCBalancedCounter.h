/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@protocol OS_dispatch_group;
#import <NewsCore/NewsCore-Structs.h>
@class NSObject;

@interface FCBalancedCounter : NSObject {

	os_unfair_lock_s _lock;
	long long _count;
	NSObject*<OS_dispatch_group> _dispatchGroup;

}

@property (assign,nonatomic) long long count;                                         //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s lock;                                   //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> dispatchGroup;              //@synthesize dispatchGroup=_dispatchGroup - In the implementation block
-(void)decrement;
-(void)setCount:(long long)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_group>)dispatchGroup;
-(os_unfair_lock_s)lock;
-(long long)count;
-(void)setLock:(os_unfair_lock_s)arg1 ;
-(void)_bumpCounterPositively:(BOOL)arg1 ;
-(void)increment;
-(void)setDispatchGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)notifyWhenCountReachesZeroOnQueue:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
@end

