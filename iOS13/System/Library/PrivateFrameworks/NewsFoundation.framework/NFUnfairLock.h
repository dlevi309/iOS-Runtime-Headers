/*
* Generated on Monday, March 1, 2021 at 2:32:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)initWithOptions:(long long)arg1 ;
-(void)lock;
-(void)unlock;
-(void)performWithLockSync:(/*^block*/id)arg1 ;
-(os_unfair_lock_s)unfairLock;
-(void)setUnfairLock:(os_unfair_lock_s)arg1 ;
-(unsigned)unfairLockOptions;
-(void)setUnfairLockOptions:(unsigned)arg1 ;
@end

