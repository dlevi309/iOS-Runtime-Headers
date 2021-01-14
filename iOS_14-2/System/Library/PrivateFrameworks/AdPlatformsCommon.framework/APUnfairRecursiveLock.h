/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AdPlatformsCommon.framework/AdPlatformsCommon
*/

#import <AdPlatformsCommon/AdPlatformsCommon-Structs.h>
#import <libobjc.A.dylib/NSLocking.h>

@interface APUnfairRecursiveLock : NSObject <NSLocking> {

	os_unfair_recursive_lock_s _lock;

}
-(void)unlock;
-(id)init;
-(void)lock;
@end

