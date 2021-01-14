/*
* Generated on Thursday, January 14, 2021 at 2:27:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GPURawCounter.framework/GPURawCounter
*/

@class NSString, NSDictionary;


@protocol GPURawCounterSource <NSObject>
@property (readonly) NSString * name; 
@property (readonly) id<GPURawCounterSourceGroup> sourceGroup; 
@property (copy) NSDictionary * options; 
@required
-(id)availableCounters;
-(BOOL)setEnabled:(BOOL)arg1;
-(NSDictionary *)options;
-(void)setOptions:(id)arg1;
-(NSString *)name;
-(BOOL)isEnabled;
-(id)availableTriggers;
-(id)selectedTriggers;
-(BOOL)requestTriggers:(id)arg1 firstErrorIndex:(unsigned long long*)arg2;
-(id)selectedCounters;
-(BOOL)requestCounters:(id)arg1 firstErrorIndex:(unsigned long long*)arg2;
-(unsigned)ringBufferNum;
-(BOOL)ringBufferInfoAtIndex:(unsigned)arg1 base:(char**)arg2 size:(unsigned*)arg3 dataOffset:(unsigned*)arg4 dataSize:(unsigned*)arg5;
-(unsigned)drainRingBufferAtIndex:(unsigned)arg1 dataSize:(unsigned)arg2;
-(void)resetRawDataPostProcessor;
-(BOOL)postProcessRawDataWithSource:(char*)arg1 sourceSize:(unsigned long long)arg2 sourceRead:(unsigned long long*)arg3 output:(char*)arg4 outputSize:(unsigned long long)arg5 outputWritten:(unsigned long long*)arg6 isLast:(BOOL)arg7;
-(BOOL)postProcessRawDataWithRingBufferSource:(char*)arg1 sourceSize:(unsigned long long)arg2 sourceRead:(unsigned long long*)arg3 sourceWrite:(unsigned long long)arg4 output:(char*)arg5 outputSize:(unsigned long long)arg6 outputRead:(unsigned long long)arg7 outputWrite:(unsigned long long*)arg8 isLast:(BOOL)arg9;
-(BOOL)pollCountersAtBufferIndex:(unsigned)arg1 withBlock:(/*^block*/id)arg2;
-(id<GPURawCounterSourceGroup>)sourceGroup;

@end

