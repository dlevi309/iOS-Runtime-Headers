/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
*/

#import <Symbolication/Symbolication-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VMUBacktrace : NSObject <NSCopying> {

	int _flavor;
	SCD_Struct_VM16* _callstack;

}
-(unsigned)thread;
-(unsigned long long*)stackFramePointers;
-(unsigned long long)dispatchQueueSerialNumber;
-(int)threadState;
-(void)setThreadState:(int)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(id)initWithTask:(unsigned)arg1 thread:(unsigned)arg2 is64Bit:(BOOL)arg3 ;
-(id)initWithSamplingContext:(sampling_context_tRef)arg1 thread:(unsigned)arg2 recordFramePointers:(BOOL)arg3 ;
-(void)fixupStackWithSamplingContext:(sampling_context_tRef)arg1 symbolicator:(CSTypeRef)arg2 ;
-(unsigned long long*)backtrace;
-(id)description;
-(void)setLengthTime:(double)arg1 ;
-(CSTypeRef)_symbolicator;
-(void)setEndTime:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)backtraceLength;
-(void)dealloc;
@end

