/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
*/

#import <MetricMeasurement/MXMMetric.h>

@class NSString, NSNumber, MXMInstrument;

@interface MXMCPUMetric : MXMMetric

@property (nonatomic,readonly) NSString * processName; 
@property (nonatomic,readonly) NSNumber * processIdentifier; 
@property (nonatomic,copy,readonly) MXMInstrument * instrument; 
+(id)currentProcess;
+(id)instrumentThread;
-(NSNumber *)processIdentifier;
-(NSString *)processName;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(id)initWithProcessIdentifier:(int)arg1 ;
-(id)initWithProcessName:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 filter:(id)arg2 ;
-(BOOL)_shouldConstructProbe;
-(id)_constructProbe;
-(BOOL)harvestData:(id*)arg1 error:(id*)arg2 ;
@end

