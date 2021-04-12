/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
*/

#import <MetricMeasurement/MetricMeasurement-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface MXMSampleAttribute : NSObject <NSCopying, NSSecureCoding> {

	NSString* _name;
	long long _valueType;
	id _value;

}

@property (nonatomic,copy,readonly) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) long long valueType;                       //@synthesize valueType=_valueType - In the implementation block
@property (nonatomic,copy,readonly) NSString * stringValue; 
@property (nonatomic,copy,readonly) NSNumber * numericValue; 
@property (nonatomic,copy,readonly) id value;                             //@synthesize value=_value - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)attributeWithName:(id)arg1 numericValue:(id)arg2 ;
+(id)attributeWithName:(id)arg1 stringValue:(id)arg2 ;
+(id)attributeWithName:(id)arg1 ;
+(id)attributeWithName:(id)arg1 valueType:(long long)arg2 ;
+(id)attributeWithName:(id)arg1 valueType:(long long)arg2 value:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(id)value;
-(long long)valueType;
-(NSNumber *)numericValue;
-(BOOL)isEqualTo:(id)arg1 ;
-(BOOL)isEqualToAttribute:(id)arg1 ;
-(id)initWithAttributeName:(id)arg1 numericValue:(id)arg2 ;
-(id)initWithAttributeName:(id)arg1 stringValue:(id)arg2 ;
-(id)initWithAttributeName:(id)arg1 valueType:(long long)arg2 value:(id)arg3 ;
-(id)initWithAttributeName:(id)arg1 ;
-(id)initWithAttributeName:(id)arg1 valueType:(long long)arg2 ;
@end

