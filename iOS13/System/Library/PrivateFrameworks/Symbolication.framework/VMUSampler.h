/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(BOOL)stop;
-(BOOL)start;
-(unsigned)mainThread;
-(void)setSamplingInterval:(double)arg1 ;
-(double)samplingInterval;
-(id)samples;
-(unsigned)sampleCount;
-(int)pid;
-(id)initWithPID:(int)arg1 ;
-(id)initWithTask:(unsigned)arg1 ;
-(double)timeLimit;
-(void)setTimeLimit:(double)arg1 ;
-(BOOL)waitUntilDone;
-(id)outputString;
-(id)initWithPID:(int)arg1 options:(unsigned long long)arg2 ;
-(id)sampleThread:(unsigned)arg1 ;
-(id)initWithPID:(int)arg1 task:(unsigned)arg2 processName:(id)arg3 is64Bit:(BOOL)arg4 options:(unsigned long long)arg5 ;
-(id)initWithTask:(unsigned)arg1 options:(unsigned long long)arg2 ;
-(id)sampleAllThreadsOnce;
-(id)threadNameForThread:(unsigned)arg1 ;
-(id)dispatchQueueNameForSerialNumber:(unsigned long long)arg1 ;
-(void)forceStop;
-(id)sampleAllThreadsOnceWithFramePointers:(BOOL)arg1 ;
-(id)threadDescriptionStringForBacktrace:(id)arg1 returnedAddress:(unsigned long long*)arg2 ;
-(id)initWithPID:(int)arg1 orTask:(unsigned)arg2 options:(unsigned long long)arg3 ;
-(void)_checkDispatchThreadLimits;
-(void)_makeHighPriority;
-(void)initializeSamplingContextWithOptions:(int)arg1 ;
-(unsigned long long)recordSampleTo:(id)arg1 beginTime:(double)arg2 endTime:(double)arg3 thread:(unsigned)arg4 recordFramePointers:(BOOL)arg5 clearMemoryCache:(BOOL)arg6 ;
-(void)_makeTimeshare;
-(void)_fixupStacks:(id)arg1 ;
-(CSTypeRef)symbolicator;
-(void)_runSamplingThread;
-(id)threadNameForThread:(unsigned)arg1 returnedThreadId:(unsigned long long*)arg2 returnedDispatchQueueSerialNum:(unsigned long long*)arg3 ;
-(id)dispatchQueueNameForSerialNumber:(unsigned long long)arg1 returnedConcurrentFlag:(BOOL*)arg2 returnedThreadId:(unsigned long long*)arg3 ;
-(void)stopSampling;
-(id)stopSamplingAndReturnCallNode;
-(void)setSampleLimit:(unsigned)arg1 ;
-(unsigned)sampleLimit;
-(void)setRecordThreadStates:(BOOL)arg1 ;
-(void)flushData;
-(void)preloadSymbols;
-(void)sampleForDuration:(unsigned)arg1 interval:(unsigned)arg2 ;
-(void)writeOutput:(id)arg1 append:(BOOL)arg2 ;
@end

