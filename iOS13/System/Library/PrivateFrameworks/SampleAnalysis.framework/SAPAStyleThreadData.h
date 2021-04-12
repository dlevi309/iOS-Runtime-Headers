/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/


#import <SampleAnalysis/SampleAnalysis-Structs.h>
@class SAThreadState;

@interface SAPAStyleThreadData : NSObject {

	BOOL _isGlobalForcedIdle;
	SAThreadState* _threadState;
	unsigned long long _threadId;
	unsigned long long _dispatchQueueId;

}

@property (retain) SAThreadState * threadState;                     //@synthesize threadState=_threadState - In the implementation block
@property (assign) unsigned long long threadId;                     //@synthesize threadId=_threadId - In the implementation block
@property (assign) unsigned long long dispatchQueueId;              //@synthesize dispatchQueueId=_dispatchQueueId - In the implementation block
@property (assign) BOOL isGlobalForcedIdle;                         //@synthesize isGlobalForcedIdle=_isGlobalForcedIdle - In the implementation block
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(const SCD_Struct_SA14*)arg1 bufferLength:(unsigned long long)arg2 ;
-(unsigned long long)threadId;
-(void)setThreadState:(SAThreadState *)arg1 ;
-(SAThreadState *)threadState;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(BOOL)addSelfToBuffer:(void*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3 ;
-(void)populateReferencesUsingBuffer:(const SCD_Struct_SA14*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4 ;
-(void)setIsGlobalForcedIdle:(BOOL)arg1 ;
-(unsigned long long)dispatchQueueId;
-(void)setThreadId:(unsigned long long)arg1 ;
-(void)setDispatchQueueId:(unsigned long long)arg1 ;
-(BOOL)isGlobalForcedIdle;
@end

