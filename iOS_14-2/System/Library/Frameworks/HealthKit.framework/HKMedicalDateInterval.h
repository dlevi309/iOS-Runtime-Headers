/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HKMedicalDate;

@interface HKMedicalDateInterval : NSObject <NSSecureCoding, NSCopying> {

	HKMedicalDate* _startDate;
	HKMedicalDate* _endDate;

}

@property (nonatomic,copy,readonly) HKMedicalDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy,readonly) HKMedicalDate * endDate;                //@synthesize endDate=_endDate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)medicalDateIntervalWithStartDate:(id)arg1 ;
+(id)medicalDateIntervalWithEndDate:(id)arg1 ;
+(id)medicalDateIntervalWithStartDate:(id)arg1 endDate:(id)arg2 error:(out id*)arg3 ;
-(HKMedicalDate *)endDate;
-(HKMedicalDate *)startDate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)_initWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

