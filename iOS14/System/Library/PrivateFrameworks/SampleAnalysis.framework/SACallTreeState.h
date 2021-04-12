/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/

#import <SampleAnalysis/SACallTreeNode.h>
#import <libobjc.A.dylib/SAJSONSerialization.h>

@class SATimestamp, SAWaitInfo, SATurnstileInfo, NSString;

@interface SACallTreeState : SACallTreeNode <SAJSONSerialization> {

	unsigned char _threadPriority;
	int _pid;
	unsigned _microstackshotState;
	SATimestamp* _startTimestamp;
	unsigned long long _threadId;
	SAWaitInfo* _waitInfo;
	SATurnstileInfo* _turnstileInfo;
	unsigned long long _state;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)writeJSONDictionaryEntriesToStream:(id)arg1 ;
-(id)initWithWaitInfo:(id)arg1 turnstileInfo:(id)arg2 state:(unsigned long long)arg3 microstackshotState:(unsigned)arg4 pid:(int)arg5 threadId:(unsigned long long)arg6 threadPriority:(unsigned char)arg7 startSampleIndex:(unsigned long long)arg8 startTimestamp:(id)arg9 sampleCount:(unsigned long long)arg10 ;
@end
