/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/


@interface _UIPointVector : NSObject {

	unsigned long long _count;
	unsigned long long _capacity;
	* _vectors;

}

@property (assign,nonatomic) unsigned long long capacity;              //@synthesize capacity=_capacity - In the implementation block
@property (assign,nonatomic) unsigned long long count;                 //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) * vectors;                                //@synthesize vectors=_vectors - In the implementation block
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(void)clear;
-(void)setCount:(unsigned long long)arg1 ;
-(unsigned long long)capacity;
-(void)reset;
-(void)setCapacity:(unsigned long long)arg1 ;
-(*)vectors;
-(void)setVectors:(*)arg1 ;
-(void)addVector:;
-(void)removeVectorAtIndex:(unsigned long long)arg1 ;
-(2)vectorAtIndex:(unsigned long long)arg1 ;
-(1)lastVector;
@end

