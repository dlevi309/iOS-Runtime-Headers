/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/


@class NSOperationQueue;

@interface WLKDebouncingQueue : NSObject {

	unsigned _delay;
	NSOperationQueue* _queue;

}

@property (nonatomic,retain) NSOperationQueue * queue;              //@synthesize queue=_queue - In the implementation block
@property (assign) unsigned delay;                                  //@synthesize delay=_delay - In the implementation block
-(id)init;
-(void)setDelay:(unsigned)arg1 ;
-(void)addOperationWithBlock:(/*^block*/id)arg1 ;
-(unsigned)delay;
-(NSOperationQueue *)queue;
-(void)setQueue:(NSOperationQueue *)arg1 ;
@end

