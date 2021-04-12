/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


@protocol OS_dispatch_semaphore;
#import <CFNetwork/CFNetwork-Structs.h>
@class NSObject;

@interface __CoreSchedulingSetRunnable : NSObject {

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
-(CFRunLoopRef)copyRunLoopWhenAvailable;
-(id)initWithSetupHadler:(/*^block*/id)arg1 ;
-(void)startedRunLoop:(CFRunLoopRef)arg1 ;
-(void)runForever;
-(void)__SITUATIONAL_ABORT__:(const char*)arg1 reason:(id)arg2 ;
-(void)performed;
-(void)canceled:(CFRunLoopRef)arg1 mode:(CFStringRef)arg2 ;
-(void)pinCurrentRunLoop;
@end

