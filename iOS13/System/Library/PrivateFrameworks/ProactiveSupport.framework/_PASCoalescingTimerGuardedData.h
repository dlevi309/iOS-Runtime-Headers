/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/


@protocol OS_dispatch_source;
@class NSObject, NSDate, NSMutableSet;

@interface _PASCoalescingTimerGuardedData : NSObject {

	NSObject*<OS_dispatch_source> coalescingSource;
	unsigned long long currentCoalescingTimerId;
	NSDate* nextCoalescedEventTime;
	NSMutableSet* nonCoalescingSources;
	unsigned long long currentNonCoalescingTimerGeneration;
	id acc;

}
@end

