/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)supportsEquivalence;
+(BOOL)_isConcreteObjectClass;
+(id)_newClinicalRecordWithType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 device:(id)arg4 metadata:(id)arg5 displayName:(id)arg6 FHIRResource:(id)arg7 config:(/*^block*/id)arg8 ;
+(id)clinicalRecordWithType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 device:(id)arg4 metadata:(id)arg5 displayName:(id)arg6 FHIRResource:(id)arg7 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)displayName;
-(void)_setDisplayName:(id)arg1 ;
-(BOOL)isEquivalent:(id)arg1 ;
-(id)_validateConfigurationWithOptions:(unsigned long long)arg1 ;
-(HKFHIRResource *)FHIRResource;
-(void)_setFHIRResource:(id)arg1 ;
-(HKClinicalType *)clinicalType;
@end

