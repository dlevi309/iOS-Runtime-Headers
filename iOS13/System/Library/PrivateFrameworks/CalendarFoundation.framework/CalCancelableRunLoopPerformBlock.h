/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)cancel;
-(id)block;
-(NSRunLoop *)runLoop;
-(void)setBlock:(id)arg1 ;
-(void)_performBlock:(/*^block*/id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 inRunLoop:(id)arg2 ;
@end

