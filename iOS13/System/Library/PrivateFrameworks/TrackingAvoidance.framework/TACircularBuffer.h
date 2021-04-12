/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/


@class NSMutableArray;

@interface TACircularBuffer : NSObject {

	unsigned long long _capacity;
	NSMutableArray* _buffer;

}

@property (nonatomic,retain) NSMutableArray * buffer;                    //@synthesize buffer=_buffer - In the implementation block
@property (nonatomic,readonly) unsigned long long capacity;              //@synthesize capacity=_capacity - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(unsigned long long)count;
-(id)removeLastObject;
-(id)firstObject;
-(id)lastObject;
-(unsigned long long)capacity;
-(void)setBuffer:(NSMutableArray *)arg1 ;
-(NSMutableArray *)buffer;
-(id)add:(id)arg1 ;
-(id)objectsMatchingPredicate:(id)arg1 ;
-(id)removeUntilFirstPredicateFail:(id)arg1 ;
-(id)bufferCopy;
-(id)insert:(id)arg1 at:(unsigned long long)arg2 ;
-(id)dropOldestElement;
-(id)firstObjectMatchingTest:(/*^block*/id)arg1 withOptions:(unsigned long long)arg2 ;
-(id)removeWithPredicate:(id)arg1 ;
@end

