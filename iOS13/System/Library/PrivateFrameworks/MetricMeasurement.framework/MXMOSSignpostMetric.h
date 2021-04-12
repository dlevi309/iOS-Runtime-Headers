/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
*/

#import <MetricMeasurement/MetricMeasurement-Structs.h>
#import <MetricMeasurement/MXMMetric.h>

@class NSDate, MXMInstrument, NSString;

@interface MXMOSSignpostMetric : MXMMetric {

	NSDate* _startDate;
	NSDate* _stopDate;

}

@property (nonatomic,copy,readonly) MXMInstrument * instrument; 
@property (nonatomic,readonly) NSString * subsystem; 
@property (nonatomic,readonly) NSString * category; 
@property (nonatomic,readonly) NSString * name; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)category;
-(id)initWithSubsystem:(id)arg1 category:(id)arg2 ;
-(NSString *)subsystem;
-(BOOL)_shouldConstructProbe;
-(id)_constructProbe;
-(unsigned long long)_sampleMode;
-(void)didStartAtTime:(unsigned long long)arg1 startDate:(id)arg2 ;
-(void)didStopAtTime:(unsigned long long)arg1 stopDate:(id)arg2 ;
-(BOOL)_shouldAlwaysWrapInProxy;
-(BOOL)_shouldNeverWrapInProxy;
-(id)initWithSubsystem:(id)arg1 ;
-(id)initWithSubsystem:(id)arg1 category:(id)arg2 name:(id)arg3 ;
@end

