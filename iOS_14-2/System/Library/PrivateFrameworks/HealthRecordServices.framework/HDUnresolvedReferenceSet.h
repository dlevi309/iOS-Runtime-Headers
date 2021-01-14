/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordServices.framework/HealthRecordServices
*/

#import <HealthRecordServices/HealthRecordServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet, HDFHIRResourceObject;

@interface HDUnresolvedReferenceSet : NSObject <NSSecureCoding, NSCopying> {

	NSSet* _references;
	HDFHIRResourceObject* _resource;

}

@property (nonatomic,copy,readonly) NSSet * references;                      //@synthesize references=_references - In the implementation block
@property (nonatomic,readonly) HDFHIRResourceObject * resource;              //@synthesize resource=_resource - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(HDFHIRResourceObject *)resource;
-(id)initWithCoder:(id)arg1 ;
-(NSSet *)references;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithReferences:(id)arg1 resource:(id)arg2 ;
@end

