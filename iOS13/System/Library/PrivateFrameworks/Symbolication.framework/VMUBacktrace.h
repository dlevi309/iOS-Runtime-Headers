/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
*/

#import <Symbolication/Symbolication-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VMUBacktrace : NSObject <NSCopying> {

	int _flavor;
	SCD_Struct_VM15* _callstack;

}
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setEndTime:(double)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(unsigned long long*)backtrace;
-(unsigned)thread;
-(unsigned)backtraceLength;
-(unsigned long long)dispatchQueueSerialNumber;
-(unsigned long long*)stackFramePointers;
-(CSTypeRef)_symbolicator;
-(id)initWithSamplingContext:(sampling_context_tRef)arg1 thread:(unsigned)arg2 recordFramePointers:(BOOL)arg3 ;
-(void)fixupStackWithSamplingContext:(sampling_context_tRef)arg1 symbolicator:(CSTypeRef)arg2 ;
-(id)initWithTask:(unsigned)arg1 thread:(unsigned)arg2 is64Bit:(BOOL)arg3 ;
-(void)setLengthTime:(double)arg1 ;
-(void)setThreadState:(int)arg1 ;
-(int)threadState;
@end

