/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCapacity:(unsigned long long)arg1 ;
-(unsigned long long)position;
-(void)setMin:(double)arg1 ;
-(unsigned long long)capacity;
-(NSMutableArray *)values;
-(double)min;
-(void)setValues:(NSMutableArray *)arg1 ;
-(id)description;
-(NSDictionary *)dictionary;
-(double)max;
-(void)setPosition:(unsigned long long)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)setMax:(double)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 dictionary:(id)arg2 ;
-(void)insertValue:(double)arg1 ;
@end

