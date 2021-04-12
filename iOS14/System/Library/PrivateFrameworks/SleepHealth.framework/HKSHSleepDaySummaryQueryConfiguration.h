/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepHealth.framework/SleepHealth
*/

#import <SleepHealth/SleepHealth-Structs.h>
#import <HealthKit/HKQueryServerConfiguration.h>

@interface HKSHSleepDaySummaryQueryConfiguration : HKQueryServerConfiguration {

	BOOL _ascending;
	BOOL _requireSleepAnalysis;
	BOOL _onlySleepAnalysis;
	long long _limit;
	SCD_Struct_HK0 _morningIndexRange;

}

@property (assign,nonatomic) SCD_Struct_HK0 morningIndexRange;              //@synthesize morningIndexRange=_morningIndexRange - In the implementation block
@property (assign,nonatomic) BOOL ascending;                                //@synthesize ascending=_ascending - In the implementation block
@property (assign,nonatomic) long long limit;                               //@synthesize limit=_limit - In the implementation block
@property (assign,nonatomic) BOOL requireSleepAnalysis;                     //@synthesize requireSleepAnalysis=_requireSleepAnalysis - In the implementation block
@property (assign,nonatomic) BOOL onlySleepAnalysis;                        //@synthesize onlySleepAnalysis=_onlySleepAnalysis - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setLimit:(long long)arg1 ;
-(long long)limit;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAscending:(BOOL)arg1 ;
-(BOOL)ascending;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCD_Struct_HK0)morningIndexRange;
-(void)setMorningIndexRange:(SCD_Struct_HK0)arg1 ;
-(void)setRequireSleepAnalysis:(BOOL)arg1 ;
-(void)setOnlySleepAnalysis:(BOOL)arg1 ;
-(BOOL)requireSleepAnalysis;
-(BOOL)onlySleepAnalysis;
@end

