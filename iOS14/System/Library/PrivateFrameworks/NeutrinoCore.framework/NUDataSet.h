/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface NUDataSet : NSObject <NSCopying, NSMutableCopying> {

	SCD_Struct_NU33 _stats;
	struct {
		unsigned sum : 1;
		unsigned min : 1;
		unsigned max : 1;
		unsigned mean : 1;
		unsigned geomean : 1;
		unsigned median : 1;
		unsigned variance : 1;
		unsigned stddev : 1;
		unsigned stderr : 1;
		unsigned ci95 : 1;
		unsigned cv : 1;
		unsigned mad : 1;
	}  _flags;
	DataSet* _data;

}

@property (nonatomic,readonly) long long count; 
@property (nonatomic,readonly) double sum; 
@property (nonatomic,readonly) double min; 
@property (nonatomic,readonly) double max; 
@property (nonatomic,readonly) double mean; 
@property (nonatomic,readonly) double geometricMean; 
@property (nonatomic,readonly) double median; 
@property (nonatomic,readonly) double variance; 
@property (nonatomic,readonly) double standardDeviation; 
@property (nonatomic,readonly) double standardError; 
@property (nonatomic,readonly) double confidenceInterval95; 
@property (nonatomic,readonly) double coefficientOfVariation; 
@property (nonatomic,readonly) double medianAbsoluteDeviation; 
@property (nonatomic,readonly) double estimatedStandardDeviation; 
@property (nonatomic,readonly) double estimatedStandardError; 
@property (nonatomic,readonly) double estimatedConfidenceInterval95; 
@property (nonatomic,readonly) double estimatedCoefficientOfVariation; 
-(double)sum;
-(id)map:(/*^block*/id)arg1 ;
-(double)valueAtIndex:(long long)arg1 ;
-(double)mean;
-(double)median;
-(id)init;
-(id)filter:(/*^block*/id)arg1 ;
-(id)initWithValue:(double)arg1 ;
-(long long)count;
-(double)min;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(double)variance;
-(id)description;
-(double)standardError;
-(double)max;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithValues:(const double*)arg1 count:(long long)arg2 ;
-(double)standardDeviation;
-(const DataSet*)_const_data;
-(id)initWithDataSet:(id)arg1 ;
-(void)enumerateValues:(/*^block*/id)arg1 ;
-(BOOL)isEqualToDataSet:(id)arg1 ;
-(void)_resetStats;
-(double)geometricMean;
-(double)confidenceInterval95;
-(double)coefficientOfVariation;
-(double)medianAbsoluteDeviation;
-(double)estimatedStandardDeviation;
-(double)estimatedStandardError;
-(double)estimatedConfidenceInterval95;
-(double)estimatedCoefficientOfVariation;
-(double)percentile:(double)arg1 ;
@end

