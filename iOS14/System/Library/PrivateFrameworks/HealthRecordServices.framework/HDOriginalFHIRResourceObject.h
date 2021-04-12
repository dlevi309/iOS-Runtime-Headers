/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordServices.framework/HealthRecordServices
*/

#import <HealthRecordServices/HealthRecordServices-Structs.h>
#import <HealthRecordServices/HDFHIRResourceObject.h>

@class NSDate, HDHRSOriginInformation, NSString;

@interface HDOriginalFHIRResourceObject : HDFHIRResourceObject {

	NSDate* _firstSeenDate;
	HDHRSOriginInformation* _originInformation;
	NSString* _country;

}

@property (nonatomic,copy,readonly) NSDate * firstSeenDate;                                  //@synthesize firstSeenDate=_firstSeenDate - In the implementation block
@property (nonatomic,copy,readonly) HDHRSOriginInformation * originInformation;              //@synthesize originInformation=_originInformation - In the implementation block
@property (nonatomic,copy,readonly) NSString * country;                                      //@synthesize country=_country - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)resourceObjectWithData:(id)arg1 sourceURL:(id)arg2 FHIRVersion:(id)arg3 receivedDate:(id)arg4 firstSeenDate:(id)arg5 extractionHints:(unsigned long long)arg6 originVersion:(SCD_Struct_HD1)arg7 originBuild:(id)arg8 country:(id)arg9 error:(id*)arg10 ;
-(NSString *)country;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(NSDate *)firstSeenDate;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)_initWithResourceIdentifier:(id)arg1 JSONObject:(id)arg2 sourceURL:(id)arg3 FHIRVersion:(id)arg4 receivedDate:(id)arg5 firstSeenDate:(id)arg6 extractionHints:(unsigned long long)arg7 originInformation:(id)arg8 country:(id)arg9 ;
-(HDHRSOriginInformation *)originInformation;
@end

