/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
*/

#import <CalendarFoundation/CalAsyncBlockPerformer.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface CalDispatchQueueAsyncBlockPerformer : NSObject <CalAsyncBlockPerformer> {

	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(id)initWithQueue:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)performAsync:(/*^block*/id)arg1 ;
-(id)performAfterDelay:(double)arg1 block:(/*^block*/id)arg2 ;
@end

