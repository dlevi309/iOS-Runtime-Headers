/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
*/

#import <NewsFoundation/NewsFoundation-Structs.h>
#import <libobjc.A.dylib/NFLocking.h>

@interface NFUnfairLock : NSObject <NFLocking> {

	os_unfair_lock_s _unfairLock;
	unsigned _unfairLockOptions;

}

@property (assign,nonatomic) os_unfair_lock_s unfairLock;              //@synthesize unfairLock=_unfairLock - In the implementation block
@property (assign,nonatomic) unsigned unfairLockOptions;               //@synthesize unfairLockOptions=_unfairLockOptions - In the implementation block
-(void)unlock;
-(os_unfair_lock_s)unfairLock;
-(id)initWithOptions:(long long)arg1 ;
-(id)init;
-(void)lock;
-(void)performWithLockSync:(/*^block*/id)arg1 ;
-(void)setUnfairLock:(os_unfair_lock_s)arg1 ;
-(void)setUnfairLockOptions:(unsigned)arg1 ;
-(unsigned)unfairLockOptions;
@end

