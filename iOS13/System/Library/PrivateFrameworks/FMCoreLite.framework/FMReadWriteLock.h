/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
*/


#import <FMCoreLite/FMCoreLite-Structs.h>
@class NSString;

@interface FMReadWriteLock : NSObject {

	NSString* _lockName;
	opaque_pthread_rwlock_t _lock;

}

@property (nonatomic,retain) NSString * lockName;                       //@synthesize lockName=_lockName - In the implementation block
@property (assign,nonatomic) opaque_pthread_rwlock_t lock;              //@synthesize lock=_lock - In the implementation block
-(id)init;
-(opaque_pthread_rwlock_t)lock;
-(void)setLock:(opaque_pthread_rwlock_t)arg1 ;
-(id)initWithLockName:(id)arg1 ;
-(void)performWithReadLock:(/*^block*/id)arg1 ;
-(void)performWithWriteLock:(/*^block*/id)arg1 ;
-(NSString *)lockName;
-(void)setLockName:(NSString *)arg1 ;
@end

