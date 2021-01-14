/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, HKConcept;

@interface HKConceptRelationship : NSObject <NSObject, NSCopying, NSSecureCoding> {

	NSString* _name;
	long long _identifier;
	long long _type;
	HKConcept* _destination;

}

@property (nonatomic,readonly) long long identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long type;                            //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) HKConcept * destination;              //@synthesize destination=_destination - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)relationshipWithIdentifier:(long long)arg1 type:(long long)arg2 destination:(id)arg3 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)debugDescription;
-(id)initWithIdentifier:(long long)arg1 type:(long long)arg2 name:(id)arg3 destination:(id)arg4 ;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
-(long long)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HKConcept *)destination;
-(BOOL)isEqual:(id)arg1 ;
@end

