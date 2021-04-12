/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
*/

#import <MetricMeasurement/MetricMeasurement-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUnit, NSData, NSSet, MXMSampleTag, NSMeasurement, NSNumber, NSString;

@interface MXMSample : NSObject <NSSecureCoding, NSCopying> {

	NSUnit* _unit;
	void* _underlyingValue;
	unsigned long long _underlyingValueLength;
	NSData* _date;
	unsigned long long _timestamp;
	NSSet* _attributes;
	unsigned long long _valueType;
	unsigned long long _length;
	MXMSampleTag* _tag;

}

@property (nonatomic,copy,readonly) NSMeasurement * asMeasurementValue; 
@property (nonatomic,copy,readonly) NSNumber * asNumberValue; 
@property (nonatomic,readonly) double floatValue; 
@property (nonatomic,readonly) long long integerValue; 
@property (nonatomic,readonly) unsigned long long unsignedValue; 
@property (nonatomic,readonly) NSData * date;                                        //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) unsigned long long timestamp;                         //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy,readonly) NSSet * attributes;                              //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,readonly) unsigned long long valueType;                         //@synthesize valueType=_valueType - In the implementation block
@property (nonatomic,readonly) unsigned long long length;                            //@synthesize length=_length - In the implementation block
@property (nonatomic,copy,readonly) NSUnit * unit; 
@property (nonatomic,readonly) MXMSampleTag * tag;                                   //@synthesize tag=_tag - In the implementation block
@property (nonatomic,copy,readonly) NSString * shortDesc; 
+(BOOL)supportsSecureCoding;
-(double)floatValue;
-(void)dealloc;
-(unsigned long long)length;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)integerValue;
-(NSData *)date;
-(NSSet *)attributes;
-(NSUnit *)unit;
-(unsigned long long)timestamp;
-(MXMSampleTag *)tag;
-(unsigned long long)valueType;
-(id)initWithTag:(id)arg1 attributes:(id)arg2 doubleValue:(double)arg3 unit:(id)arg4 ;
-(id)initWithTag:(id)arg1 attributes:(id)arg2 doubleValue:(double)arg3 unit:(id)arg4 timestamp:(unsigned long long)arg5 ;
-(id)attributeWithName:(id)arg1 ;
-(NSNumber *)asNumberValue;
-(unsigned long long)unsignedValue;
-(NSMeasurement *)asMeasurementValue;
-(NSString *)shortDesc;
-(const double*)numberValueDouble;
-(id)initWithTag:(id)arg1 attributes:(id)arg2 doubleValue:(double)arg3 ;
-(id)initWithTag:(id)arg1 attributes:(id)arg2 pixelBufferValue:(CVBufferRef)arg3 ;
-(id)convertToUnit:(id)arg1 ;
@end

