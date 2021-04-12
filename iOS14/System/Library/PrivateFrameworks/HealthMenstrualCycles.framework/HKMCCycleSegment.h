/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles
*/

#import <HealthMenstrualCycles/HealthMenstrualCycles-Structs.h>
#import <libobjc.A.dylib/HKRedactedDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface HKMCCycleSegment : NSObject <HKRedactedDescription, NSSecureCoding> {

	SCD_Struct_HK0 _days;
	long long _type;

}

@property (nonatomic,readonly) long long type;                            //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) SCD_Struct_HK0 days;                       //@synthesize days=_days - In the implementation block
@property (copy,readonly) NSString * hk_redactedDescription; 
+(BOOL)supportsSecureCoding;
+(id)_menstruationSegmentWithDays:(SCD_Struct_HK0)arg1 ;
+(id)_fertileWindowSegmentWithDays:(SCD_Struct_HK0)arg1 ;
-(SCD_Struct_HK0)days;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(long long)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)hk_redactedDescription;
-(BOOL)isEqual:(id)arg1 ;
-(id)_initWithType:(long long)arg1 days:(SCD_Struct_HK0)arg2 ;
@end

