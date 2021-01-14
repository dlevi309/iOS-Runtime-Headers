/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
*/

#import <NewsFoundation/NewsFoundation-Structs.h>
#import <libobjc.A.dylib/NFLocking.h>

@interface NFMutexLock : NSObject <NFLocking> {

	opaque_pthread_mutex_t _lock;

}
-(void)unlock;
-(id)initWithOptions:(unsigned long long)arg1 ;
-(id)init;
-(void)lock;
-(void)performWithLockSync:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

