/*
* Generated on Monday, March 1, 2021 at 2:32:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HKMedicalDate *)startDate;
-(HKMedicalDate *)endDate;
-(id)_initWithStartDate:(id)arg1 endDate:(id)arg2 ;
@end

