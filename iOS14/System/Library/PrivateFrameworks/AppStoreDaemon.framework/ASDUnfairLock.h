/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/NSLocking.h>

@interface ASDUnfairLock : NSObject <NSLocking> {

	os_unfair_lock_s _lock;

}
-(void)unlock;
-(id)init;
-(void)lock;
@end

