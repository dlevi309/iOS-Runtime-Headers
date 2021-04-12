/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@protocol OS_dispatch_queue;
#import <TSReading/TSReading-Structs.h>
@class NSObject;

@interface TSDTilingLimitedQueue : NSObject {

	NSObject*<OS_dispatch_queue> mManagerQueue;
	NSObject*<OS_dispatch_queue> mTargetQueue;
	unsigned long long mLimit;
	unsigned long long mReaderCount;
	os_unfair_lock_s mSpinLock;

}
-(id)init;
-(void)dealloc;
-(void)performAsync:(/*^block*/id)arg1 ;
-(id)initWithLimit:(unsigned long long)arg1 ;
@end

