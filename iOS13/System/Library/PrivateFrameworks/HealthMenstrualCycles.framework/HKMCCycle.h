/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class HKMCCycleSegment, NSNumber;

@interface HKMCCycle : NSObject <NSSecureCoding> {

	HKMCCycleSegment* _menstruationSegment;
	HKMCCycleSegment* _fertileWindowSegment;
	NSNumber* _lastDayIndex;

}

@property (nonatomic,readonly) HKMCCycleSegment * menstruationSegment;               //@synthesize menstruationSegment=_menstruationSegment - In the implementation block
@property (nonatomic,readonly) HKMCCycleSegment * fertileWindowSegment;              //@synthesize fertileWindowSegment=_fertileWindowSegment - In the implementation block
@property (nonatomic,readonly) NSNumber * lastDayIndex;                              //@synthesize lastDayIndex=_lastDayIndex - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_cycleWithMenstruationSegment:(id)arg1 fertileWindowSegment:(id)arg2 lastDayIndex:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)redactedDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithMenstruationSegment:(id)arg1 fertileWindowSegment:(id)arg2 lastDayIndex:(id)arg3 ;
-(HKMCCycleSegment *)menstruationSegment;
-(HKMCCycleSegment *)fertileWindowSegment;
-(NSNumber *)lastDayIndex;
@end

