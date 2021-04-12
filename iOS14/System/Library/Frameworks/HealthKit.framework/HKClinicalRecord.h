/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKSample.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, HKFHIRResource, HKClinicalType;

@interface HKClinicalRecord : HKSample <NSSecureCoding, NSCopying> {

	NSString* _displayName;
	HKFHIRResource* _FHIRResource;

}

@property (copy,readonly) HKClinicalType * clinicalType; 
@property (copy,readonly) NSString * displayName; 
@property (copy,readonly) HKFHIRResource * FHIRResource; 
+(BOOL)supportsSecureCoding;
+(id)_newClinicalRecordWithType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 device:(id)arg4 metadata:(id)arg5 displayName:(id)arg6 FHIRResource:(id)arg7 config:(/*^block*/id)arg8 ;
+(id)clinicalRecordWithType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 device:(id)arg4 metadata:(id)arg5 displayName:(id)arg6 FHIRResource:(id)arg7 ;
+(BOOL)_isConcreteObjectClass;
+(BOOL)supportsEquivalence;
-(BOOL)isEquivalent:(id)arg1 ;
-(void)_setDisplayName:(id)arg1 ;
-(id)init;
-(HKClinicalType *)clinicalType;
-(void)_setFHIRResource:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)_validateWithConfiguration:(HKObjectValidationConfiguration)arg1 ;
-(HKFHIRResource *)FHIRResource;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
@end

