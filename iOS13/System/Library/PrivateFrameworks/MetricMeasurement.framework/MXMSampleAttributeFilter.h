/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
*/

#import <MetricMeasurement/MetricMeasurement-Structs.h>
#import <MetricMeasurement/MXMSampleAttribute.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSSet, NSString, NSNumber;

@interface MXMSampleAttributeFilter : MXMSampleAttribute <NSCopying, NSSecureCoding> {

	NSArray* _matchingStringAttributeValues;
	NSArray* _matchingNumericAttributeValues;

}

@property (nonatomic,readonly) BOOL finite; 
@property (getter=finite,nonatomic,readonly) BOOL isFinite; 
@property (nonatomic,copy,readonly) id value; 
@property (nonatomic,copy,readonly) NSSet * values; 
@property (nonatomic,copy,readonly) NSString * stringValue; 
@property (nonatomic,copy,readonly) NSNumber * numericValue; 
@property (nonatomic,copy,readonly) NSSet * stringValues; 
@property (nonatomic,copy,readonly) NSSet * numericValues; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(NSSet *)values;
-(id)value;
-(NSSet *)stringValues;
-(NSNumber *)numericValue;
-(id)initWithAttribute:(id)arg1 ;
-(id)initWithAttributeName:(id)arg1 numericValue:(id)arg2 ;
-(id)initWithAttributeName:(id)arg1 stringValue:(id)arg2 ;
-(BOOL)finite;
-(NSSet *)numericValues;
-(id)initWithAttributeName:(id)arg1 valueType:(long long)arg2 value:(id)arg3 ;
-(id)initWithAttributeName:(id)arg1 stringValues:(id)arg2 ;
-(id)initWithAttributeName:(id)arg1 numericValues:(id)arg2 ;
-(BOOL)_matchesSampleAttributeNameWithName:(id)arg1 ;
-(BOOL)_matchesSampleAttributeValueTypeWithAttributeValueType:(long long)arg1 ;
-(BOOL)_matchesSampleAttributeValueWithValue:(id)arg1 ;
-(BOOL)matchesSampleWithAttribute:(id)arg1 ;
@end

