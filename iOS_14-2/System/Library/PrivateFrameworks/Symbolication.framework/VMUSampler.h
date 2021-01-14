/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
*/


#import <Symbolication/Symbolication-Structs.h>
@class NSString, VMUProcessDescription, NSMapTable, NSConditionLock, NSMutableArray, NSMutableDictionary;

@interface VMUSampler : NSObject {

	unsigned long long _options;
	int _pid;
	unsigned _task;
	BOOL _needTaskPortDealloc;
	BOOL _recordThreadStates;
	BOOL _sampling;
	unsigned _numberOfCopiedBacktraces;
	NSString* _processName;
	VMUProcessDescription* _processDescription;
	CSTypeRef _symbolicator;
	unsigned _suspensionToken;
	sampling_context_tRef _samplingContext;
	NSMapTable* _lastThreadBacktraceMap;
	unsigned* _previousThreadList;
	unsigned _mainThread;
	unsigned _previousThreadCount;
	unsigned _maxPreviousThreadCount;
	double _tbRate;
	double _tbInterval;
	NSConditionLock* _stateLock;
	double _interval;
	double _timeLimit;
	unsigned _sampleLimit;
	unsigned _numberOfSamples;
	NSMutableArray* _samples;
	BOOL _stacksFixed;
	id _delegate;
	double _timeSpentSampling;
	unsigned _dispatchThreadSoftLimit;
	unsigned _dispatchThreadSoftLimitCount;
	unsigned _dispatchThreadHardLimit;
	unsigned _dispatchThreadHardLimitCount;
	NSMutableDictionary* _threadPortToNameMap;
	NSMutableDictionary* _dispatchQueueSerialNumToNameMap;

}
+(void)initialize;
+(id)sampleAllThreadsOfPID:(int)arg1 ;
+(id)sampleAllThreadsOfTask:(unsigned)arg1 ;
+(id)sampleAllThreadsOfTask:(unsigned)arg1 symbolicate:(BOOL)arg2 ;
-(double)samplingInterval;
-(id)initWithPID:(int)arg1 orTask:(unsigned)arg2 options:(unsigned long long)arg3 ;
-(id)samples;
-(void)_fixupStacks:(id)arg1 ;
-(id)initWithTask:(unsigned)arg1 ;
-(int)pid;
-(id)sampleThread:(unsigned)arg1 ;
-(id)initWithPID:(int)arg1 ;
-(double)timeLimit;
-(id)delegate;
-(id)stopSamplingAndReturnCallNode;
-(BOOL)start;
-(void)_makeTimeshare;
-(void)_makeHighPriority;
-(id)initWithPID:(int)arg1 options:(unsigned long long)arg2 ;
-(void)setSampleLimit:(unsigned)arg1 ;
-(void)initializeSamplingContextWithOptions:(int)arg1 ;
-(BOOL)stop;
-(id)dispatchQueueNameForSerialNumber:(unsigned long long)arg1 returnedConcurrentFlag:(BOOL*)arg2 returnedThreadId:(unsigned long long*)arg3 ;
-(id)dispatchQueueNameForSerialNumber:(unsigned long long)arg1 ;
-(void)setRecordThreadStates:(BOOL)arg1 ;
-(id)sampleAllThreadsOnceWithFramePointers:(BOOL)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(unsigned)sampleLimit;
-(id)initWithPID:(int)arg1 task:(unsigned)arg2 processName:(id)arg3 is64Bit:(BOOL)arg4 options:(unsigned long long)arg5 ;
-(void)setSamplingInterval:(double)arg1 ;
-(id)threadDescriptionStringForBacktrace:(id)arg1 returnedAddress:(unsigned long long*)arg2 ;
-(id)initWithTask:(unsigned)arg1 options:(unsigned long long)arg2 ;
-(unsigned)sampleCount;
-(id)threadNameForThread:(unsigned)arg1 ;
-(void)setTimeLimit:(double)arg1 ;
-(void)preloadSymbols;
-(void)sampleForDuration:(unsigned)arg1 interval:(unsigned)arg2 ;
-(void)_runSamplingThread;
-(void)_checkDispatchThreadLimits;
-(unsigned long long)recordSampleTo:(id)arg1 beginTime:(double)arg2 endTime:(double)arg3 thread:(unsigned)arg4 recordFramePointers:(BOOL)arg5 clearMemoryCache:(BOOL)arg6 ;
-(void)stopSampling;
-(CSTypeRef)symbolicator;
-(id)outputString;
-(void)flushData;
-(BOOL)waitUntilDone;
-(void)forceStop;
-(unsigned)mainThread;
-(id)threadNameForThread:(unsigned)arg1 returnedThreadId:(unsigned long long*)arg2 returnedDispatchQueueSerialNum:(unsigned long long*)arg3 ;
-(void)writeOutput:(id)arg1 append:(BOOL)arg2 ;
-(id)sampleAllThreadsOnce;
-(void)dealloc;
@end

