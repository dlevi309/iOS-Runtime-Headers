/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles
*/

#import <libobjc.A.dylib/HKRedactedDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HKMCCycleSegment, NSNumber, NSString;

@interface HKMCCycle : NSObject <HKRedactedDescription, NSSecureCoding> {

	HKMCCycleSegment* _menstruationSegment;
	HKMCCycleSegment* _fertileWindowSegment;
	NSNumber* _lastDayIndex;

}

@property (nonatomic,readonly) HKMCCycleSegment * menstruationSegment;               //@synthesize menstruationSegment=_menstruationSegment - In the implementation block
@property (nonatomic,readonly) HKMCCycleSegment * fertileWindowSegment;              //@synthesize fertileWindowSegment=_fertileWindowSegment - In the implementation block
@property (nonatomic,readonly) NSNumber * lastDayIndex;                              //@synthesize lastDayIndex=_lastDayIndex - In the implementation block
@property (copy,readonly) NSString * hk_redactedDescription; 
+(BOOL)supportsSecureCoding;
+(id)_cycleWithMenstruationSegment:(id)arg1 fertileWindowSegment:(id)arg2 lastDayIndex:(id)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)hk_redactedDescription;
-(BOOL)isEqual:(id)arg1 ;
-(id)_initWithMenstruationSegment:(id)arg1 fertileWindowSegment:(id)arg2 lastDayIndex:(id)arg3 ;
-(HKMCCycleSegment *)menstruationSegment;
-(HKMCCycleSegment *)fertileWindowSegment;
-(NSNumber *)lastDayIndex;
@end

