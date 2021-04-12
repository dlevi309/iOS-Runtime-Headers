/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface AXActionCoalescer : NSObject {

	NSObject*<OS_dispatch_queue> _targetQueue;
	/*^block*/id _block;
	NSObject*<OS_dispatch_queue> _consistencyQueue;
	BOOL _coalescing;

}
+(id)mainQueueCoalescerWithBlock:(/*^block*/id)arg1 ;
-(id)initWithQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)performCoalescedAsynchronously;
@end

