/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HKFHIRIdentifier : NSObject <NSSecureCoding, NSCopying> {

	NSString* _resourceType;
	NSString* _identifier;

}

@property (nonatomic,copy,readonly) NSString * resourceType;              //@synthesize resourceType=_resourceType - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * stringValue; 
+(BOOL)supportsSecureCoding;
+(id)FHIRIdentifierWithString:(id)arg1 error:(out id*)arg2 ;
-(id)init;
-(NSString *)resourceType;
-(id)initWithResourceType:(id)arg1 identifier:(id)arg2 ;
-(id)identifierForContainedResourceWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)parentResourceIdentifierWithError:(id*)arg1 ;
-(id)SQLWildcardIdentifierForContainedResources;
-(id)SQLWildcardIdentifierForContainedResourcesIdentifierOnly;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

