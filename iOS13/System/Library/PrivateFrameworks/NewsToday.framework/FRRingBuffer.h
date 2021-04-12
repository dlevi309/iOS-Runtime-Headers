/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
*/


@class NSMutableArray, NSDictionary;

@interface FRRingBuffer : NSObject {

	unsigned long long _capacity;
	NSMutableArray* _values;
	unsigned long long _position;
	double _min;
	double _max;

}

@property (assign,nonatomic) unsigned long long capacity;              //@synthesize capacity=_capacity - In the implementation block
@property (nonatomic,retain) NSMutableArray * values;                  //@synthesize values=_values - In the implementation block
@property (assign,nonatomic) unsigned long long position;              //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) double min;                               //@synthesize min=_min - In the implementation block
@property (assign,nonatomic) double max;                               //@synthesize max=_max - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionary; 
-(id)description;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)setValues:(NSMutableArray *)arg1 ;
-(NSMutableArray *)values;
-(NSDictionary *)dictionary;
-(unsigned long long)capacity;
-(void)setMax:(double)arg1 ;
-(double)max;
-(unsigned long long)position;
-(void)setCapacity:(unsigned long long)arg1 ;
-(void)setMin:(double)arg1 ;
-(double)min;
-(void)setPosition:(unsigned long long)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 dictionary:(id)arg2 ;
-(void)insertValue:(double)arg1 ;
@end

