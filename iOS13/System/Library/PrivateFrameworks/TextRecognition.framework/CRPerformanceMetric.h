/*
* Generated on Monday, March 1, 2021 at 2:35:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/

#import <TextRecognition/TextRecognition-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CRPerformanceMetric : NSObject <NSCopying> {

	NSString* _displayName;
	NSString* _unit;
	NSString* _serializationKey;
	double _denominator;
	double _sumX;
	double _sumX2;
	unsigned long long _pcMetricID;
	long long _numSamples;

}

@property (copy) NSString * displayName;                       //@synthesize displayName=_displayName - In the implementation block
@property (copy) NSString * unit;                              //@synthesize unit=_unit - In the implementation block
@property (copy) NSString * serializationKey;                  //@synthesize serializationKey=_serializationKey - In the implementation block
@property (assign) double denominator;                         //@synthesize denominator=_denominator - In the implementation block
@property (assign) double sumX;                                //@synthesize sumX=_sumX - In the implementation block
@property (assign) double sumX2;                               //@synthesize sumX2=_sumX2 - In the implementation block
@property (assign) unsigned long long pcMetricID;              //@synthesize pcMetricID=_pcMetricID - In the implementation block
@property (assign) long long numSamples;                       //@synthesize numSamples=_numSamples - In the implementation block
+(id)pcMetricWithDisplayName:(id)arg1 pcMetricID:(unsigned long long)arg2 unit:(id)arg3 denominator:(double)arg4 serializationKey:(id)arg5 ;
+(id)metricWithDisplayName:(id)arg1 unit:(id)arg2 denominator:(double)arg3 serializationKey:(id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionary;
-(NSString *)unit;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)addSample:(double)arg1 ;
-(void)setUnit:(NSString *)arg1 ;
-(double)mean;
-(double)denominator;
-(long long)numSamples;
-(void)setDenominator:(double)arg1 ;
-(void)setNumSamples:(long long)arg1 ;
-(double)stdDev;
-(id)initWithDictionary:(id)arg1 key:(id)arg2 ;
-(void)mergeMetric:(id)arg1 ;
-(unsigned long long)pcMetricID;
-(id)initWithDisplayName:(id)arg1 unit:(id)arg2 denominator:(double)arg3 serializationKey:(id)arg4 ;
-(void)setPcMetricID:(unsigned long long)arg1 ;
-(void)setSumX:(double)arg1 ;
-(void)setSumX2:(double)arg1 ;
-(NSString *)serializationKey;
-(double)sumX;
-(double)sumX2;
-(void)setSerializationKey:(NSString *)arg1 ;
@end

