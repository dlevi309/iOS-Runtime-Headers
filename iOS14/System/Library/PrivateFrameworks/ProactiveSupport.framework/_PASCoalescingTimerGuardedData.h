/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

