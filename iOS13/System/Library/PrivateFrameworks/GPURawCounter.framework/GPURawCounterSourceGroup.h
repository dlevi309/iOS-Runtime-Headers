/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GPURawCounter.framework/GPURawCounter
*/

@class NSString, NSArray, NSDictionary;


@protocol GPURawCounterSourceGroup <NSObject>
@property (readonly) NSString * name; 
@property (readonly) NSArray * sourceList; 
@property (assign) unsigned long long samplingPeriodInMicroseconds; 
@property (assign) unsigned long long samplingTriggers; 
@property (copy) NSDictionary * vendorOptions; 
@property (readonly) unsigned long long sampleMarker; 
@property (readonly) unsigned long long availableCounterTriggers; 
@required
-(NSString *)name;
-(BOOL)stopSampling;
-(unsigned long long)availableCounterTriggers;
-(BOOL)startSampling;
-(NSArray *)sourceList;
-(unsigned long long)samplingPeriodInMicroseconds;
-(void)setSamplingPeriodInMicroseconds:(unsigned long long)arg1;
-(unsigned long long)samplingTriggers;
-(void)setSamplingTriggers:(unsigned long long)arg1;
-(NSDictionary *)vendorOptions;
-(void)setVendorOptions:(id)arg1;
-(unsigned long long)sampleMarker;

@end

