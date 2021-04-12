/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
*/

#import <CalendarFoundation/CalAsyncBlockPerformer.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface CalDispatchQueueAsyncBlockPerformer : NSObject <CalAsyncBlockPerformer> {

	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithQueue:(id)arg1 ;
-(id)performAsync:(/*^block*/id)arg1 ;
-(id)performAfterDelay:(double)arg1 block:(/*^block*/id)arg2 ;
@end

