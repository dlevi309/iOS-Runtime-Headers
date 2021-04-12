/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)resourceType;
-(id)_initWithResourceType:(id)arg1 sourceURL:(id)arg2 FHIRVersion:(id)arg3 JSONObject:(id)arg4 ;
@end

