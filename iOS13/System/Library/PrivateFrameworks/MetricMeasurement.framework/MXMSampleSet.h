/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
*/

#import <MetricMeasurement/MetricMeasurement-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class MXMSampleTag, NSUnit, MXMSampleTimeSeries, NSArray, NSMutableDictionary, MXMSample, NSSet;

@interface MXMSampleSet : NSObject <NSFastEnumeration, NSSecureCoding, NSCopying, NSMutableCopying> {

	MXMSampleTag* _tag;
	NSUnit* _unit;
	MXMSampleTimeSeries* _timeIndex;
	SCD_Struct_MX3* _index;
	void* _underlyingBuffer;
	long long _underlyingBufferLength;
	NSArray* _cachedSamples;
	NSMutableDictionary* _attributesMap;

}

@property (nonatomic,readonly) MXMSample * min; 
@property (nonatomic,readonly) MXMSample * max; 
@property (nonatomic,readonly) MXMSample * distance; 
@property (nonatomic,readonly) MXMSampleSet * range; 
@property (nonatomic,readonly) MXMSample * geoMean; 
@property (nonatomic,readonly) MXMSample * standardDeviation; 
@property (nonatomic,readonly) MXMSample * relativeStandardDeviation; 
@property (nonatomic,readonly) MXMSample * sum; 
@property (assign,nonatomic) SCD_Struct_MX3* index;                                //@synthesize index=_index - In the implementation block
@property (assign,nonatomic) void* underlyingBuffer;                               //@synthesize underlyingBuffer=_underlyingBuffer - In the implementation block
@property (assign,nonatomic) long long underlyingBufferLength;                     //@synthesize underlyingBufferLength=_underlyingBufferLength - In the implementation block
@property (retain) NSArray * cachedSamples;                                        //@synthesize cachedSamples=_cachedSamples - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * attributesMap;                //@synthesize attributesMap=_attributesMap - In the implementation block
@property (copy,readonly) NSSet * attributes; 
@property (readonly) double* doubleValues; 
@property (readonly) double* firstDoubleValue; 
@property (readonly) double* lastDoubleValue; 
@property (readonly) MXMSampleTag * tag;                                           //@synthesize tag=_tag - In the implementation block
@property (readonly) NSUnit * unit;                                                //@synthesize unit=_unit - In the implementation block
@property (retain,readonly) MXMSampleTimeSeries * timeIndex;                       //@synthesize timeIndex=_timeIndex - In the implementation block
@property (copy,readonly) NSArray * samples; 
@property (readonly) unsigned long long length; 
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(unsigned long long)length;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(id)mutableCopy;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_MX2*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSSet *)attributes;
-(SCD_Struct_MX3*)index;
-(NSUnit *)unit;
-(MXMSample *)max;
-(MXMSampleSet *)range;
-(MXMSampleTag *)tag;
-(NSArray *)samples;
-(MXMSample *)min;
-(void)setIndex:(SCD_Struct_MX3*)arg1 ;
-(MXMSample *)distance;
-(MXMSample *)standardDeviation;
-(MXMSample *)sum;
-(MXMSampleTimeSeries *)timeIndex;
-(id)initWithTag:(id)arg1 unit:(id)arg2 attributes:(id)arg3 ;
-(double*)doubleValues;
-(double*)firstDoubleValue;
-(double*)lastDoubleValue;
-(id)initWithTime:(id)arg1 tag:(id)arg2 unit:(id)arg3 attributes:(id)arg4 doubleValues:(double*)arg5 length:(unsigned long long)arg6 ;
-(MXMSample *)geoMean;
-(MXMSample *)relativeStandardDeviation;
-(NSArray *)cachedSamples;
-(NSMutableDictionary *)attributesMap;
-(id)initWithTime:(id)arg1 tag:(id)arg2 unit:(id)arg3 attributes:(id)arg4 ;
-(id)initWithTime:(id)arg1 tag:(id)arg2 unit:(id)arg3 attributes:(id)arg4 values:(void*)arg5 length:(unsigned long long)arg6 valueSize:(unsigned long long)arg7 ;
-(void)setCachedSamples:(NSArray *)arg1 ;
-(void)_prepareUnderlyingBufferSizeWithAdditionalBytes:(unsigned long long)arg1 ;
-(void)_appendSample:(id)arg1 ;
-(void)_appendDoubleValue:(double)arg1 timestamp:(unsigned long long)arg2 ;
-(id)attributeWithName:(id)arg1 ;
-(id)sampleWithIndex:(unsigned long long)arg1 ;
-(void)_appendAttribute:(id)arg1 ;
-(void)_appendSet:(id)arg1 ;
-(void*)underlyingBuffer;
-(void)setUnderlyingBuffer:(void*)arg1 ;
-(long long)underlyingBufferLength;
-(void)setUnderlyingBufferLength:(long long)arg1 ;
@end

