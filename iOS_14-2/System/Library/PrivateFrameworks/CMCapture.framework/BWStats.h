/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


#import <CMCapture/CMCapture-Structs.h>
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
-(NSString *)unitDesignator;
-(void)setUnitDesignator:(NSString *)arg1 ;
-(double)average;
-(id)init;
-(void)addDataPoint:(double)arg1 ;
-(void)removeDataPoint:(double)arg1 ;
-(id)debugDescription;
-(double)min;
-(double)multiplier;
-(id)description;
-(double)max;
-(void)setMultiplier:(double)arg1 ;
-(id)initWithStats:(id)arg1 ;
-(long long)numberOfSamples;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(double)standardDeviation;
@end

