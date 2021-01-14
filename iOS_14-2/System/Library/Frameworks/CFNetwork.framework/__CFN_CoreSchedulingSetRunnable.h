/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


@protocol OS_dispatch_semaphore;
#import <CFNetwork/CFNetwork-Structs.h>
@class NSObject;

@interface __CFN_CoreSchedulingSetRunnable : NSObject {

	NSObject*<OS_dispatch_semaphore> _sem;
	/*^block*/id _setup;
	opaque_pthread_t* _tid;
	CFRunLoopRef _rl;
	long long _performCount;
	CFRunLoopSourceRef _pinnedSource;
	long long _count[5];

}
+(void)_run:(id)arg1 ;
-(void)dealloc;
@end

