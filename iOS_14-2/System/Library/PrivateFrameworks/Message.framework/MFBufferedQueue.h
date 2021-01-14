/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)addItem:(id)arg1 ;
-(BOOL)flush;
-(id)init;
-(unsigned long long)sizeForItem:(id)arg1 ;
-(unsigned)maximumSize;
-(unsigned)size;
-(void)removeAllObjects;
-(id)initWithMaximumSize:(unsigned)arg1 latency:(double)arg2 ;
-(BOOL)flushIfNecessary;
-(BOOL)handleItems:(id)arg1 ;
-(double)maximumLatency;
-(void)setMaximumLatency:(double)arg1 ;
-(BOOL)_flush;
-(BOOL)isEmpty;
-(void)setMaximumSize:(unsigned)arg1 ;
@end

