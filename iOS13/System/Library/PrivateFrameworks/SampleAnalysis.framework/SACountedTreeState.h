/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/

#import <SampleAnalysis/SACountedTreeNode.h>
#import <libobjc.A.dylib/SAJSONSerialization.h>

@class SATimestamp, SAWaitInfo, SATurnstileInfo, NSString;

@interface SACountedTreeState : SACountedTreeNode <SAJSONSerialization> {

	unsigned char _threadPriority;
	int _pid;
	unsigned _microstackshotState;
	SATimestamp* _startTimestamp;
	unsigned long long _threadId;
	SAWaitInfo* _waitInfo;
	SATurnstileInfo* _turnstileInfo;
	unsigned long long _state;

}

@property (readonly) SATimestamp * startTimestamp;                  //@synthesize startTimestamp=_startTimestamp - In the implementation block
@property (readonly) int pid;                                       //@synthesize pid=_pid - In the implementation block
@property (readonly) unsigned long long threadId;                   //@synthesize threadId=_threadId - In the implementation block
@property (readonly) unsigned char threadPriority;                  //@synthesize threadPriority=_threadPriority - In the implementation block
@property (readonly) SAWaitInfo * waitInfo;                         //@synthesize waitInfo=_waitInfo - In the implementation block
@property (readonly) SATurnstileInfo * turnstileInfo;               //@synthesize turnstileInfo=_turnstileInfo - In the implementation block
@property (readonly) unsigned long long state;                      //@synthesize state=_state - In the implementation block
@property (readonly) unsigned microstackshotState;                  //@synthesize microstackshotState=_microstackshotState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)treeCountedStateWithWaitInfo:(id)arg1 turnstileInfo:(id)arg2 state:(unsigned long long)arg3 microstackshotState:(unsigned)arg4 pid:(int)arg5 threadId:(unsigned long long)arg6 threadPriority:(unsigned char)arg7 startSampleIndex:(unsigned long long)arg8 startTimestamp:(id)arg9 sampleCount:(unsigned long long)arg10 ;
+(void)writeJSONDictionaryEntriesToStream:(id)arg1 microstackshotState:(unsigned)arg2 primaryMicrostackshotState:(unsigned)arg3 includeIdleAndBattery:(BOOL)arg4 ;
-(unsigned char)threadPriority;
-(unsigned long long)state;
-(int)pid;
-(SATimestamp *)startTimestamp;
-(unsigned long long)threadId;
-(void)writeJSONDictionaryEntriesToStream:(id)arg1 ;
-(SAWaitInfo *)waitInfo;
-(SATurnstileInfo *)turnstileInfo;
-(id)initWithWaitInfo:(id)arg1 turnstileInfo:(id)arg2 state:(unsigned long long)arg3 microstackshotState:(unsigned)arg4 pid:(int)arg5 threadId:(unsigned long long)arg6 threadPriority:(unsigned char)arg7 startSampleIndex:(unsigned long long)arg8 startTimestamp:(id)arg9 sampleCount:(unsigned long long)arg10 ;
-(unsigned)microstackshotState;
@end

