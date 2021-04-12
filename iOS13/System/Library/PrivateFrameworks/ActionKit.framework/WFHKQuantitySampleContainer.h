/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/WFNaming.h>
#import <libobjc.A.dylib/WFStatisticsSampleProvider.h>

@class HKUnit, NSArray, HKQuantitySample, NSString;

@interface WFHKQuantitySampleContainer : NSObject <NSSecureCoding, WFNaming, WFStatisticsSampleProvider> {

	BOOL _canProvideDataSamples;
	HKUnit* _unit;
	double _value;
	NSArray* _subsamples;
	HKQuantitySample* _quantitySample;
	NSArray* _subcontainers;

}

@property (nonatomic,retain) HKQuantitySample * quantitySample;              //@synthesize quantitySample=_quantitySample - In the implementation block
@property (nonatomic,retain) NSArray * subcontainers;                        //@synthesize subcontainers=_subcontainers - In the implementation block
@property (nonatomic,retain) NSArray * subsamples;                           //@synthesize subsamples=_subsamples - In the implementation block
@property (nonatomic,retain) HKUnit * unit;                                  //@synthesize unit=_unit - In the implementation block
@property (nonatomic,readonly) BOOL hasValue; 
@property (nonatomic,readonly) double value;                                 //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) BOOL hasSubsamples; 
@property (nonatomic,copy,readonly) NSString * wfName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL canProvideDataSamples;                   //@synthesize canProvideDataSamples=_canProvideDataSamples - In the implementation block
@property (nonatomic,readonly) NSArray * dataSamples; 
+(BOOL)supportsSecureCoding;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)value;
-(HKUnit *)unit;
-(BOOL)hasValue;
-(void)setUnit:(HKUnit *)arg1 ;
-(double)normalizedValue;
-(HKQuantitySample *)quantitySample;
-(void)setQuantitySample:(HKQuantitySample *)arg1 ;
-(NSString *)wfName;
-(void)updateValue:(id)arg1 fromStatisticsOperation:(long long)arg2 ;
-(BOOL)canProvideDataSamples;
-(NSArray *)dataSamples;
-(id)initWithSample:(id)arg1 unit:(id)arg2 ;
-(id)initWithSubsamples:(id)arg1 unit:(id)arg2 ;
-(NSArray *)subcontainers;
-(BOOL)hasSubsamples;
-(NSArray *)subsamples;
-(void)setSubsamples:(NSArray *)arg1 ;
-(void)setSubcontainers:(NSArray *)arg1 ;
@end

