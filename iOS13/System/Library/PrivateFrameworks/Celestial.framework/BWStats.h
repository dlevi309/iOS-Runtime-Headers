/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


#import <Celestial/Celestial-Structs.h>
@class NSString;

@interface BWStats : NSObject {

	double _multiplier;
	NSString* _unitDesignator;
	long long _numberOfSamples;
	double _min;
	double _max;
	double _sumX;
	double _sumXX;

}

@property (assign,nonatomic) double multiplier;                        //@synthesize multiplier=_multiplier - In the implementation block
@property (nonatomic,copy) NSString * unitDesignator;                  //@synthesize unitDesignator=_unitDesignator - In the implementation block
@property (nonatomic,readonly) long long numberOfSamples;              //@synthesize numberOfSamples=_numberOfSamples - In the implementation block
@property (nonatomic,readonly) double min;                             //@synthesize min=_min - In the implementation block
@property (nonatomic,readonly) double max;                             //@synthesize max=_max - In the implementation block
@property (nonatomic,readonly) double average; 
@property (nonatomic,readonly) double standardDeviation; 
-(id)init;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)multiplier;
-(void)setMultiplier:(double)arg1 ;
-(double)max;
-(double)min;
-(long long)numberOfSamples;
-(double)average;
-(double)standardDeviation;
-(void)setUnitDesignator:(NSString *)arg1 ;
-(void)addDataPoint:(double)arg1 ;
-(NSString *)unitDesignator;
-(id)initWithStats:(id)arg1 ;
-(void)removeDataPoint:(double)arg1 ;
@end

