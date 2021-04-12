/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSKThreadDispatcher.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface TSKLowPriorityThreadDispatcher : TSKThreadDispatcher {

	NSObject*<OS_dispatch_queue> _queue;
	int _suspendCount;

}

@property (getter=isSuspended,readonly) BOOL suspended; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)_singletonAlloc;
+(id)sharedLowPriorityDispatcher;
-(id)init;
-(unsigned long long)retainCount;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)resume;
-(BOOL)isSuspended;
-(void)suspend;
-(id)p_dispatchQueue;
@end

