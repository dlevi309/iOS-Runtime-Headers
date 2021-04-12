/*
* Generated on Thursday, January 14, 2021 at 2:27:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GPURawCounter.framework/GPURawCounter
*/

@class NSString, NSArray, NSDictionary;


@protocol GPURawCounterSourceGroup <NSObject>
@property (readonly) NSString * name; 
@property (readonly) NSArray * sourceList; 
@property (readonly) unsigned acceleratorPort; 
@property (assign) unsigned long long samplingPeriodInMicroseconds; 
@property (assign) unsigned long long samplingTriggers; 
@property (copy) NSDictionary * vendorOptions; 
@property (copy) NSDictionary * options; 
@property (readonly) unsigned long long sampleMarker; 
@property (readonly) unsigned long long availableCounterTriggers; 
@required
-(unsigned)acceleratorPort;
-(NSDictionary *)options;
-(void)setOptions:(id)arg1;
-(NSString *)name;
-(BOOL)stopSampling;
-(BOOL)startSampling;
-(id)subDivideCounterList:(id)arg1 withOptions:(id)arg2;
-(NSArray *)sourceList;
-(unsigned long long)samplingPeriodInMicroseconds;
-(void)setSamplingPeriodInMicroseconds:(unsigned long long)arg1;
-(unsigned long long)samplingTriggers;
-(void)setSamplingTriggers:(unsigned long long)arg1;
-(NSDictionary *)vendorOptions;
-(void)setVendorOptions:(id)arg1;
-(unsigned long long)sampleMarker;
-(unsigned long long)availableCounterTriggers;

@end

