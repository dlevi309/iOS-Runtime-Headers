/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject;

@interface CalLimitingQueue : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _source;

}
-(id)initWithQueue:(id)arg1 andBlock:(/*^block*/id)arg2 ;
-(id)queue;
-(void)executeBlock;
@end

