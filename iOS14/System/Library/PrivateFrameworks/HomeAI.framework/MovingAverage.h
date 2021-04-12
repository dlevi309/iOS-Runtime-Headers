/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/


@class HMFUnfairLock, NSMutableArray;

@interface MovingAverage : NSObject {

	double _movingAverage;
	HMFUnfairLock* _lock;
	NSMutableArray* _queue;
	unsigned long long _windowSize;

}

@property (nonatomic,readonly) HMFUnfairLock * lock;                       //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) NSMutableArray * queue;                       //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) unsigned long long windowSize;              //@synthesize windowSize=_windowSize - In the implementation block
@property (assign) double movingAverage;                                   //@synthesize movingAverage=_movingAverage - In the implementation block
-(unsigned long long)windowSize;
-(HMFUnfairLock *)lock;
-(id)initWithWindowSize:(unsigned long long)arg1 ;
-(NSMutableArray *)queue;
-(void)setQueue:(NSMutableArray *)arg1 ;
-(double)movingAverage;
-(void)addNumber:(id)arg1 ;
-(double)movingAverageForInterval:(double)arg1 defaultValue:(double)arg2 ;
-(void)setMovingAverage:(double)arg1 ;
@end

