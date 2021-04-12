/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordServices.framework/HealthRecordServices
*/

#import <HealthRecordServices/HealthRecordServices-Structs.h>
#import <HealthRecordServices/HDFHIRResourceObject.h>

@class HDHRSOriginInformation, NSString;

@interface HDOriginalFHIRResourceObject : HDFHIRResourceObject {

	HDHRSOriginInformation* _originInformation;
	NSString* _country;

}

@property (nonatomic,copy,readonly) HDHRSOriginInformation * originInformation;              //@synthesize originInformation=_originInformation - In the implementation block
@property (nonatomic,copy,readonly) NSString * country;                                      //@synthesize country=_country - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)resourceObjectWithData:(id)arg1 sourceURL:(id)arg2 FHIRVersion:(id)arg3 receivedDate:(id)arg4 extractionHints:(unsigned long long)arg5 originVersion:(SCD_Struct_HD1)arg6 originBuild:(id)arg7 country:(id)arg8 error:(id*)arg9 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)country;
-(id)_initWithResourceIdentifier:(id)arg1 JSONObject:(id)arg2 sourceURL:(id)arg3 FHIRVersion:(id)arg4 receivedDate:(id)arg5 extractionHints:(unsigned long long)arg6 originInformation:(id)arg7 country:(id)arg8 ;
-(HDHRSOriginInformation *)originInformation;
@end

