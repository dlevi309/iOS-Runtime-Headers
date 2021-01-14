/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordServices.framework/HealthRecordServices
*/

#import <HealthRecordServices/HealthRecordServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSSet;

@interface HRSSupportedFHIRRelease : NSObject <NSCopying, NSSecureCoding> {

	NSString* _FHIRRelease;
	NSSet* _resourceTypes;

}

@property (nonatomic,copy,readonly) NSString * FHIRRelease;              //@synthesize FHIRRelease=_FHIRRelease - In the implementation block
@property (nonatomic,copy,readonly) NSSet * resourceTypes;               //@synthesize resourceTypes=_resourceTypes - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)FHIRRelease;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSSet *)resourceTypes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithFHIRRelease:(id)arg1 resourceTypes:(id)arg2 ;
@end

