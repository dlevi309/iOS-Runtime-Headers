/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@interface OITSUAssertionHandler : NSObject
+(void)simulateCrashWithMessage:(id)arg1 ;
+(id)performBlockIgnoringAssertions:(/*^block*/id)arg1 ;
+(void)handleFailureInFunction:(id)arg1 file:(id)arg2 lineNumber:(long long)arg3 isFatal:(BOOL)arg4 description:(const char*)arg5 ;
+(void)logBacktraceThrottled;
+(id)p_performBlockIgnoringAssertions:(/*^block*/id)arg1 onlyFatal:(BOOL)arg2 ;
+(void)logBacktraceWithCallStackSymbols:(id)arg1 ;
+(id)performBlockIgnoringFatalAssertions:(/*^block*/id)arg1 ;
+(int)_atomicIncrementAssertCount;
+(void)logBacktrace;
@end

