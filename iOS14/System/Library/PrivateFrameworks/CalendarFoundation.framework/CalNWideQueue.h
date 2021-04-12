/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
*/


@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSObject;

@interface CalNWideQueue : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_semaphore> _semaphore;

}
-(id)initWithSerialQueue:(id)arg1 andWidth:(unsigned long long)arg2 ;
-(void)executeBlock:(/*^block*/id)arg1 ;
@end

