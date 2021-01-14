/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setRunloop:(NSRunLoop *)arg1 ;
-(void)performAfterDelay:(double)arg1 ;
-(id)block;
-(void)setBlock:(id)arg1 ;
-(NSRunLoop *)runloop;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(void)_performBlock:(/*^block*/id)arg1 ;
-(void)cancel;
@end

