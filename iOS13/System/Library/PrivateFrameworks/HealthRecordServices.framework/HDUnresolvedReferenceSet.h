/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HDFHIRResourceObject *)resource;
-(NSSet *)references;
-(id)initWithReferences:(id)arg1 resource:(id)arg2 ;
@end

