/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GPURawCounter.framework/GPURawCounter
*/

#import <GPURawCounter/GPURawCounter-Structs.h>
#import <GPURawCounter/GPURawCounterSourceGroup.h>

@class NSString, NSArray, NSDictionary;

@interface _GPURawCounterSourceGroup : NSObject <GPURawCounterSourceGroup> {

	unsigned _acceleratorPort;
	IOAccelDeviceRef _deviceRef;
	NSString* _name;
	NSArray* _sourceList;
	unsigned long long _samplingPeriodInMicroseconds;
	unsigned long long _samplingTriggers;
	NSDictionary* _vendorOptions;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * name;                                            //@synthesize name=_name - In the implementation block
@property (readonly) NSArray * sourceList;                                       //@synthesize sourceList=_sourceList - In the implementation block
@property (assign) unsigned long long samplingPeriodInMicroseconds;              //@synthesize samplingPeriodInMicroseconds=_samplingPeriodInMicroseconds - In the implementation block
@property (assign) unsigned long long samplingTriggers;                          //@synthesize samplingTriggers=_samplingTriggers - In the implementation block
@property (copy) NSDictionary * vendorOptions;                                   //@synthesize vendorOptions=_vendorOptions - In the implementation block
@property (readonly) unsigned long long sampleMarker; 
@property (readonly) unsigned long long availableCounterTriggers; 
-(void)dealloc;
-(NSString *)name;
-(id)initWithAcceleratorPort:(unsigned)arg1 ;
-(BOOL)stopSampling;
-(unsigned long long)availableCounterTriggers;
-(BOOL)startSampling;
-(NSArray *)sourceList;
-(unsigned long long)samplingPeriodInMicroseconds;
-(void)setSamplingPeriodInMicroseconds:(unsigned long long)arg1 ;
-(unsigned long long)samplingTriggers;
-(void)setSamplingTriggers:(unsigned long long)arg1 ;
-(NSDictionary *)vendorOptions;
-(void)setVendorOptions:(NSDictionary *)arg1 ;
-(unsigned long long)sampleMarker;
@end

