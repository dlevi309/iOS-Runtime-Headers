/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCapacity:(unsigned long long)arg1 ;
-(void)clear;
-(void)setCount:(unsigned long long)arg1 ;
-(id)init;
-(*)vectors;
-(void)setVectors:(*)arg1 ;
-(1)lastVector;
-(void)removeVectorAtIndex:(unsigned long long)arg1 ;
-(2)vectorAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)capacity;
-(unsigned long long)count;
-(void)addVector:;
-(void)reset;
-(void)dealloc;
@end

