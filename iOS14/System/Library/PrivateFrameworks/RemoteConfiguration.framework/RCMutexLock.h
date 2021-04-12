/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration
*/

#import <RemoteConfiguration/RemoteConfiguration-Structs.h>
#import <libobjc.A.dylib/RCLocking.h>

@interface RCMutexLock : NSObject <RCLocking> {

	opaque_pthread_mutex_t _lock;

}
-(void)unlock;
-(id)initWithOptions:(unsigned long long)arg1 ;
-(id)init;
-(void)lock;
-(void)performWithLockSync:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

