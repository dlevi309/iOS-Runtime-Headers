/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/


@protocol OS_dispatch_group;
@class NSPointerArray, NSObject, NSMutableSet;

@interface _SYQuiescenceObserver : NSObject {

	NSPointerArray* _quiescenceQueues;
	NSObject*<OS_dispatch_group> _allocationGroup;
	NSMutableSet* _allocations;

}
+(id)sharedInstance;
+(BOOL)isQuiescenceEnabled;
+(void)setQuiescenceEnabled:(BOOL)arg1 ;
-(id)init;
-(void)registerQueue:(id)arg1 ;
-(BOOL)waitForQuiescenceWithTimeout:(double)arg1 ;
-(void)notifyOnQuiescence:(/*^block*/id)arg1 ;
-(void)incrementAllocationCount:(id)arg1 ;
-(void)decrementAllocationCount:(id)arg1 ;
-(BOOL)waitForDeallocationCompleteWithTimeout:(double)arg1 ;
-(void)notifyOnDeallocationComplete:(/*^block*/id)arg1 ;
@end

