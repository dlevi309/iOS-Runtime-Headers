/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordServices.framework/HealthRecordServices
*/

#import <HealthRecordServices/HDFHIRJSONObject.h>

@class NSString;

@interface HDRedactedFHIRResourceObject : HDFHIRJSONObject {

	NSString* _resourceType;

}

@property (nonatomic,copy,readonly) NSString * resourceType;              //@synthesize resourceType=_resourceType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)resourceObjectWithFHIRJSONObject:(id)arg1 redactedJSONObject:(id)arg2 error:(id*)arg3 ;
-(NSString *)resourceType;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithResourceType:(id)arg1 sourceURL:(id)arg2 FHIRVersion:(id)arg3 JSONObject:(id)arg4 ;
@end

