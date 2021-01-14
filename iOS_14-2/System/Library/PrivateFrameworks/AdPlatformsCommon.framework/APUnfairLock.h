/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AdPlatformsCommon.framework/AdPlatformsCommon
*/

#import <AdPlatformsCommon/AdPlatformsCommon-Structs.h>
#import <libobjc.A.dylib/NSLocking.h>

@interface APUnfairLock : NSObject <NSLocking> {

	os_unfair_lock_s _unfairLock;
	unsigned _unfairLockOptions;

}

@property (assign,nonatomic) os_unfair_lock_s unfairLock;              //@synthesize unfairLock=_unfairLock - In the implementation block
@property (assign,nonatomic) unsigned unfairLockOptions;               //@synthesize unfairLockOptions=_unfairLockOptions - In the implementation block
-(void)unlock;
-(os_unfair_lock_s)unfairLock;
-(id)initWithOptions:(long long)arg1 ;
-(void)lock;
-(void)setUnfairLock:(os_unfair_lock_s)arg1 ;
-(void)setUnfairLockOptions:(unsigned)arg1 ;
-(unsigned)unfairLockOptions;
@end

