/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles
*/

#import <HealthMenstrualCycles/HealthMenstrualCycles-Structs.h>
#import <libobjc.A.dylib/HKRedactedDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HKMCStatistics, NSArray, HKQuantity, NSNumber, NSString;

@interface HKMCAnalysis : NSObject <HKRedactedDescription, NSSecureCoding, NSCopying> {

	HKMCStatistics* _statistics;
	NSArray* _menstruationProjections;
	NSArray* _fertileWindowProjections;
	NSArray* _cycles;
	unsigned long long _recentSymptoms;
	HKQuantity* _recentBasalBodyTemperature;
	NSNumber* _lastLoggedDayIndex;
	NSNumber* _lastMenstrualFlowDayIndex;
	NSNumber* _anchor;

}

@property (nonatomic,copy) NSNumber * anchor;                                          //@synthesize anchor=_anchor - In the implementation block
@property (nonatomic,readonly) HKMCStatistics * statistics;                            //@synthesize statistics=_statistics - In the implementation block
@property (nonatomic,readonly) NSArray * menstruationProjections;                      //@synthesize menstruationProjections=_menstruationProjections - In the implementation block
@property (nonatomic,readonly) NSArray * fertileWindowProjections;                     //@synthesize fertileWindowProjections=_fertileWindowProjections - In the implementation block
@property (nonatomic,readonly) NSArray * cycles;                                       //@synthesize cycles=_cycles - In the implementation block
@property (nonatomic,readonly) unsigned long long recentSymptoms;                      //@synthesize recentSymptoms=_recentSymptoms - In the implementation block
@property (nonatomic,readonly) HKQuantity * recentBasalBodyTemperature;                //@synthesize recentBasalBodyTemperature=_recentBasalBodyTemperature - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * lastLoggedDayIndex;                     //@synthesize lastLoggedDayIndex=_lastLoggedDayIndex - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * lastMenstrualFlowDayIndex;              //@synthesize lastMenstrualFlowDayIndex=_lastMenstrualFlowDayIndex - In the implementation block
@property (copy,readonly) NSString * hk_redactedDescription; 
+(BOOL)supportsSecureCoding;
-(HKMCStatistics *)statistics;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)cycles;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)anchor;
-(NSString *)hk_redactedDescription;
-(void)setAnchor:(NSNumber *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)menstruationProjections;
-(NSArray *)fertileWindowProjections;
-(unsigned long long)recentSymptoms;
-(HKQuantity *)recentBasalBodyTemperature;
-(NSNumber *)lastLoggedDayIndex;
-(NSNumber *)lastMenstrualFlowDayIndex;
-(id)initWithStatistics:(id)arg1 menstruationProjections:(id)arg2 fertileWindowProjections:(id)arg3 cycles:(id)arg4 recentSymptoms:(unsigned long long)arg5 recentBasalBodyTemperature:(id)arg6 lastLoggedDayIndex:(id)arg7 lastMenstrualFlowDayIndex:(id)arg8 ;
@end

