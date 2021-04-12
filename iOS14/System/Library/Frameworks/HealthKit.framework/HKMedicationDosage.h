/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)instruction;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithInstruction:(id)arg1 timingPeriod:(id)arg2 ;
-(HKMedicalDateInterval *)timingPeriod;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

