/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
*/

#import <CalendarFoundation/CalCancelable.h>

@class NSRunLoop;

@interface CalCancelablePerformSelector : NSObject <CalCancelable> {

	/*^block*/id _block;
	NSRunLoop* _runloop;

}

@property (nonatomic,copy) id block;                           //@synthesize block=_block - In the implementation block
@property (nonatomic,retain) NSRunLoop * runloop;              //@synthesize runloop=_runloop - In the implementation block
-(void)performAfterDelay:(double)arg1 ;
-(void)cancel;
-(id)block;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(void)setBlock:(id)arg1 ;
-(NSRunLoop *)runloop;
-(void)_performBlock:(/*^block*/id)arg1 ;
-(void)setRunloop:(NSRunLoop *)arg1 ;
@end

