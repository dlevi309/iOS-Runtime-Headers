/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordServices.framework/HealthRecordServices
*/

#import <HealthRecordServices/HDFHIRJSONObject.h>

@class HKFHIRIdentifier, NSDate, NSURL;

@interface HDFHIRResourceObject : HDFHIRJSONObject {

	HKFHIRIdentifier* _identifier;
	NSDate* _receivedDate;
	unsigned long long _extractionHints;

}

@property (nonatomic,copy,readonly) HKFHIRIdentifier * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSDate * receivedDate;                      //@synthesize receivedDate=_receivedDate - In the implementation block
@property (nonatomic,copy,readonly) NSURL * serverBaseURL; 
@property (nonatomic,readonly) unsigned long long extractionHints;              //@synthesize extractionHints=_extractionHints - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)identifierDetectedInJSONObject:(id)arg1 error:(id*)arg2 ;
+(id)hrs_sampleResourceObjectWithFHIRResource:(id)arg1 error:(id*)arg2 ;
+(id)resourceObjectWithJSONObject:(id)arg1 sourceURL:(id)arg2 FHIRVersion:(id)arg3 receivedDate:(id)arg4 extractionHints:(unsigned long long)arg5 error:(id*)arg6 ;
+(id)hrs_sampleResourceObjectWithFHIRResource:(id)arg1 ;
+(id)resourceObjectWithResourceData:(id)arg1 receivedDate:(id)arg2 extractionHints:(unsigned long long)arg3 error:(id*)arg4 ;
+(id)resourceObjectWithJSONObject:(id)arg1 serverBaseURL:(id)arg2 FHIRVersion:(id)arg3 receivedDate:(id)arg4 error:(id*)arg5 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSURL *)serverBaseURL;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(HKFHIRIdentifier *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(NSDate *)receivedDate;
-(unsigned long long)extractionHints;
-(id)_initWithResourceIdentifier:(id)arg1 JSONObject:(id)arg2 sourceURL:(id)arg3 FHIRVersion:(id)arg4 receivedDate:(id)arg5 extractionHints:(unsigned long long)arg6 ;
-(id)copyWithOriginDataFrom:(id)arg1 ;
@end

