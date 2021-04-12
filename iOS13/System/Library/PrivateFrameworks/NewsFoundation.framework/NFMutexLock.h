/*
* Generated on Monday, March 1, 2021 at 2:32:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
*/

#import <NewsFoundation/NewsFoundation-Structs.h>
#import <libobjc.A.dylib/NFLocking.h>

@interface NFMutexLock : NSObject <NFLocking> {

	opaque_pthread_mutex_t _lock;

}
-(id)init;
-(void)dealloc;
-(id)initWithOptions:(unsigned long long)arg1 ;
-(void)lock;
-(void)unlock;
-(void)performWithLockSync:(/*^block*/id)arg1 ;
@end

