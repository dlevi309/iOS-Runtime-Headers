/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NSCopyingNSSecureCoding;
@class NSString, HKConcept, NSNumber;

@interface HKConceptAttribute : NSObject <NSSecureCoding, NSCopying> {

	NSString* _name;
	long long _identifier;
	HKConcept* _concept;
	long long _valueType;
	id<NSCopying><NSSecureCoding> _value;

}

@property (nonatomic,readonly) long long identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,__weak,readonly) HKConcept * concept;                            //@synthesize concept=_concept - In the implementation block
@property (nonatomic,readonly) long long valueType;                                   //@synthesize valueType=_valueType - In the implementation block
@property (nonatomic,copy,readonly) id<NSCopying><NSSecureCoding> value;              //@synthesize value=_value - In the implementation block
@property (nonatomic,copy,readonly) NSString * stringValue; 
@property (nonatomic,copy,readonly) NSNumber * numberValue; 
+(BOOL)supportsSecureCoding;
+(id)attributeWithIdentifier:(long long)arg1 name:(id)arg2 valueType:(long long)arg3 value:(id)arg4 ;
+(id)attributeWithIdentifier:(long long)arg1 name:(id)arg2 stringValue:(id)arg3 ;
+(id)attributeWithIdentifier:(long long)arg1 name:(id)arg2 numberValue:(id)arg3 ;
-(id)init;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(long long)identifier;
-(id<NSCopying><NSSecureCoding>)value;
-(long long)valueType;
-(NSNumber *)numberValue;
-(HKConcept *)concept;
-(id)attributeBySettingConcept:(id)arg1 ;
-(id)initWithIdentifier:(long long)arg1 name:(id)arg2 valueType:(long long)arg3 value:(id)arg4 concept:(id)arg5 ;
@end

