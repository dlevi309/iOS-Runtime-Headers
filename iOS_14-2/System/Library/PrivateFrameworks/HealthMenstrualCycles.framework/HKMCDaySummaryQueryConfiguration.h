/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles
*/

#import <HealthMenstrualCycles/HealthMenstrualCycles-Structs.h>
#import <HealthKit/HKQueryServerConfiguration.h>

@interface HKMCDaySummaryQueryConfiguration : HKQueryServerConfiguration {

	BOOL _ascending;
	long long _limit;
	SCD_Struct_HK0 _dayIndexRange;

}

@property (assign,nonatomic) SCD_Struct_HK0 dayIndexRange;              //@synthesize dayIndexRange=_dayIndexRange - In the implementation block
@property (assign,nonatomic) BOOL ascending;                            //@synthesize ascending=_ascending - In the implementation block
@property (assign,nonatomic) long long limit;                           //@synthesize limit=_limit - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setLimit:(long long)arg1 ;
-(long long)limit;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAscending:(BOOL)arg1 ;
-(BOOL)ascending;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCD_Struct_HK0)dayIndexRange;
-(void)setDayIndexRange:(SCD_Struct_HK0)arg1 ;
@end

