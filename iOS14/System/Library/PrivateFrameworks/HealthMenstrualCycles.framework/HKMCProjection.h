/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles
*/

#import <HealthMenstrualCycles/HealthMenstrualCycles-Structs.h>
#import <libobjc.A.dylib/HKRedactedDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HKMCProjection : NSObject <HKRedactedDescription, NSSecureCoding, NSCopying> {

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
@property (copy,readonly) NSString * hk_redactedDescription; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(SCD_Struct_HK0)allDays;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)hk_redactedDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithStartMean:(double)arg1 startStandardDeviation:(double)arg2 endMean:(double)arg3 endStandardDeviation:(double)arg4 allDays:(SCD_Struct_HK0)arg5 partiallyLogged:(BOOL)arg6 ;
-(SCD_Struct_HK0)mostLikelyDays;
-(BOOL)isPartiallyLogged;
-(long long)_dayIndexFromMean:(double)arg1 standardDeviation:(double)arg2 coefficient:(double)arg3 ;
-(long long)dayIndexFromStartWithCoefficient:(double)arg1 ;
-(long long)dayIndexFromEndWithCoefficient:(double)arg1 ;
-(SCD_Struct_HK0)startDayRange;
@end

