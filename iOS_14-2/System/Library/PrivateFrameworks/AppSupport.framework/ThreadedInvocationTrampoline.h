/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
*/

#import <AppSupport/InvocationTrampoline.h>

@class NSThread;

@interface ThreadedInvocationTrampoline : InvocationTrampoline {

	NSThread* _thread;
	BOOL _immediateForMatchingThread;

}
-(id)initWithTarget:(id)arg1 thread:(id)arg2 immediateForMatchingThread:(BOOL)arg3 ;
-(void)dealloc;
-(void)forwardInvocation:(id)arg1 ;
@end

