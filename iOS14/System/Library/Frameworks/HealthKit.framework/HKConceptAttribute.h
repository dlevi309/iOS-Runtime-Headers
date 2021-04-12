/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NSCopyingNSSecureCodingNSObject;
@class NSString, NSNumber;

@interface HKConceptAttribute : NSObject <NSSecureCoding, NSCopying> {

	long long _identifier;
	long long _type;
	long long _valueType;
	id<NSCopying><NSSecureCoding><NSObject> _value;

}

@property (nonatomic,readonly) long long identifier;                                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long type;                                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long valueType;                                             //@synthesize valueType=_valueType - In the implementation block
@property (nonatomic,copy,readonly) id<NSCopying><NSSecureCoding><NSObject> value;              //@synthesize value=_value - In the implementation block
@property (nonatomic,copy,readonly) NSString * stringValue; 
@property (nonatomic,copy,readonly) NSNumber * numberValue; 
@property (nonatomic,readonly) BOOL boolValue; 
@property (nonatomic,readonly) long long longLongValue; 
+(BOOL)supportsSecureCoding;
+(id)attributeWithIdentifier:(long long)arg1 type:(long long)arg2 valueType:(long long)arg3 value:(id)arg4 ;
+(id)attributeWithIdentifier:(long long)arg1 type:(long long)arg2 stringValue:(id)arg3 ;
+(id)attributeWithIdentifier:(long long)arg1 type:(long long)arg2 numberValue:(id)arg3 ;
+(id)attributeWithIdentifier:(long long)arg1 type:(long long)arg2 boolValue:(BOOL)arg3 ;
-(long long)valueType;
-(NSNumber *)numberValue;
-(BOOL)boolValue;
-(id)init;
-(id)initWithIdentifier:(long long)arg1 type:(long long)arg2 valueType:(long long)arg3 value:(id)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(id)description;
-(long long)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(long long)identifier;
-(long long)longLongValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<NSCopying><NSSecureCoding><NSObject>)value;
-(BOOL)isEqual:(id)arg1 ;
@end

