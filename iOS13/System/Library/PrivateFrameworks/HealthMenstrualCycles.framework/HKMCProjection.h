/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles
*/

#import <HealthMenstrualCycles/HealthMenstrualCycles-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HKMCProjection : NSObject <NSSecureCoding, NSCopying> {

	double _startMean;
	double _startStandardDeviation;
	double _endMean;
	double _endStandardDeviation;
	BOOL _partiallyLogged;
	SCD_Struct_HK0 _allDays;

}

@property (nonatomic,readonly) SCD_Struct_HK0 mostLikelyDays; 
@property (nonatomic,readonly) SCD_Struct_HK0 allDays;                                     //@synthesize allDays=_allDays - In the implementation block
@property (getter=isPartiallyLogged,nonatomic,readonly) BOOL partiallyLogged;              //@synthesize partiallyLogged=_partiallyLogged - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)redactedDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithStartMean:(double)arg1 startStandardDeviation:(double)arg2 endMean:(double)arg3 endStandardDeviation:(double)arg4 allDays:(SCD_Struct_HK0)arg5 partiallyLogged:(BOOL)arg6 ;
-(SCD_Struct_HK0)mostLikelyDays;
-(SCD_Struct_HK0)allDays;
-(long long)_dayIndexFromMean:(double)arg1 standardDeviation:(double)arg2 coefficient:(double)arg3 ;
-(long long)dayIndexFromStartWithCoefficient:(double)arg1 ;
-(long long)dayIndexFromEndWithCoefficient:(double)arg1 ;
-(SCD_Struct_HK0)startDayRange;
-(BOOL)isPartiallyLogged;
@end

