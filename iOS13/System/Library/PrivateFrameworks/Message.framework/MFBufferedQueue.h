/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


@class NSMutableArray;

@interface MFBufferedQueue : NSObject {

	unsigned _maximumSize;
	double _maximumLatency;
	double _timeOfLastFlush;
	NSMutableArray* _queue;
	unsigned _currentSize;

}

@property (nonatomic,readonly) unsigned size;                    //@synthesize currentSize=_currentSize - In the implementation block
@property (assign,nonatomic) unsigned maximumSize;               //@synthesize maximumSize=_maximumSize - In the implementation block
@property (assign,nonatomic) double maximumLatency;              //@synthesize maximumLatency=_maximumLatency - In the implementation block
-(id)init;
-(BOOL)isEmpty;
-(void)removeAllObjects;
-(unsigned)size;
-(unsigned)maximumSize;
-(BOOL)flush;
-(BOOL)addItem:(id)arg1 ;
-(void)setMaximumSize:(unsigned)arg1 ;
-(BOOL)_flush;
-(id)initWithMaximumSize:(unsigned)arg1 latency:(double)arg2 ;
-(unsigned long long)sizeForItem:(id)arg1 ;
-(BOOL)flushIfNecessary;
-(BOOL)handleItems:(id)arg1 ;
-(double)maximumLatency;
-(void)setMaximumLatency:(double)arg1 ;
@end

