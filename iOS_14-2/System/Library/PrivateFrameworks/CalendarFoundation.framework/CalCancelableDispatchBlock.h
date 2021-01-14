/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
*/

#import <CalendarFoundation/CalCancelable.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface CalCancelableDispatchBlock : NSObject <CalCancelable> {

	/*^block*/id _block;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,copy) id block;                                            //@synthesize block=_block - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(void)performAfterDelay:(double)arg1 ;
-(id)block;
-(void)setBlock:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)cancel;
-(id)initWithBlock:(/*^block*/id)arg1 inQueue:(id)arg2 ;
-(void)performAsync;
@end

