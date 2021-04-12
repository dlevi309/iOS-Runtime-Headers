/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
*/

#import <AppSupport/InvocationTrampoline.h>

@class NSThread;

@interface ThreadedInvocationTrampoline : InvocationTrampoline {

	NSThread* _thread;
	BOOL _immediateForMatchingThread;

}
-(void)dealloc;
-(void)forwardInvocation:(id)arg1 ;
-(id)initWithTarget:(id)arg1 thread:(id)arg2 immediateForMatchingThread:(BOOL)arg3 ;
@end

