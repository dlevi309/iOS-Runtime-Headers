/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GPURawCounter.framework/GPURawCounter
*/

@class NSString;


@protocol GPURawCounterSource <NSObject>
@property (readonly) NSString * name; 
@required
-(NSString *)name;
-(void)setEnabled:(BOOL)arg1;
-(id)availableCounters;
-(BOOL)requestCounters:(id)arg1 firstErrorIndex:(unsigned long long*)arg2;
-(unsigned)ringBufferNum;
-(BOOL)ringBufferInfoAtIndex:(unsigned)arg1 base:(char**)arg2 size:(unsigned*)arg3 dataOffset:(unsigned*)arg4 dataSize:(unsigned*)arg5;
-(unsigned)drainRingBufferAtIndex:(unsigned)arg1 dataSize:(unsigned)arg2;
-(void)resetRawDataPostProcessor;
-(BOOL)postProcessRawDataWithSource:(char*)arg1 sourceSize:(unsigned long long)arg2 sourceRead:(unsigned long long*)arg3 output:(char*)arg4 outputSize:(unsigned long long)arg5 outputWritten:(unsigned long long*)arg6 isLast:(BOOL)arg7;
-(BOOL)pollCountersAtBufferIndex:(unsigned)arg1 withBlock:(/*^block*/id)arg2;

@end

