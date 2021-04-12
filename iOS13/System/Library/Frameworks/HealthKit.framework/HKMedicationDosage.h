/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, HKMedicalDateInterval;

@interface HKMedicationDosage : NSObject <NSSecureCoding, NSCopying> {

	NSString* _instruction;
	HKMedicalDateInterval* _timingPeriod;

}

@property (nonatomic,copy,readonly) NSString * instruction;                            //@synthesize instruction=_instruction - In the implementation block
@property (nonatomic,copy,readonly) HKMedicalDateInterval * timingPeriod;              //@synthesize timingPeriod=_timingPeriod - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)dosageWithInstruction:(id)arg1 timingPeriod:(id)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)instruction;
-(id)initWithInstruction:(id)arg1 timingPeriod:(id)arg2 ;
-(HKMedicalDateInterval *)timingPeriod;
@end

