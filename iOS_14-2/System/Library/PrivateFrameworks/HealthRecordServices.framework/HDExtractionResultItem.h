/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordServices.framework/HealthRecordServices
*/

#import <HealthRecordServices/HealthRecordServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HKFHIRIdentifier, HKMedicalRecord, HKClinicalRecord;

@interface HDExtractionResultItem : NSObject <NSCopying, NSSecureCoding> {

	HKFHIRIdentifier* _resourceIdentifier;
	HKMedicalRecord* _medicalRecord;
	HKClinicalRecord* _clinicalRecord;

}

@property (nonatomic,copy,readonly) HKFHIRIdentifier * resourceIdentifier;              //@synthesize resourceIdentifier=_resourceIdentifier - In the implementation block
@property (nonatomic,copy,readonly) HKMedicalRecord * medicalRecord;                    //@synthesize medicalRecord=_medicalRecord - In the implementation block
@property (nonatomic,copy,readonly) HKClinicalRecord * clinicalRecord;                  //@synthesize clinicalRecord=_clinicalRecord - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(HKMedicalRecord *)medicalRecord;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HKFHIRIdentifier *)resourceIdentifier;
-(id)initWithResourceIdentifier:(id)arg1 medicalRecord:(id)arg2 clinicalRecord:(id)arg3 ;
-(HKClinicalRecord *)clinicalRecord;
@end

