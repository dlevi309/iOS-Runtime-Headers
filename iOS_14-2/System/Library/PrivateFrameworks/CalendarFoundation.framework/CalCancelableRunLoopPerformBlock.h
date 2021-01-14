/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
*/

#import <CalendarFoundation/CalCancelable.h>

@class NSRunLoop;

@interface CalCancelableRunLoopPerformBlock : NSObject <CalCancelable> {

	NSRunLoop* _runLoop;
	/*^block*/id _block;

}

@property (nonatomic,readonly) NSRunLoop * runLoop;              //@synthesize runLoop=_runLoop - In the implementation block
@property (nonatomic,copy) id block;                             //@synthesize block=_block - In the implementation block
-(void)performAfterDelay:(double)arg1 ;
-(id)block;
-(void)setBlock:(id)arg1 ;
-(void)_performBlock:(/*^block*/id)arg1 ;
-(void)cancel;
-(id)initWithBlock:(/*^block*/id)arg1 inRunLoop:(id)arg2 ;
-(NSRunLoop *)runLoop;
@end

