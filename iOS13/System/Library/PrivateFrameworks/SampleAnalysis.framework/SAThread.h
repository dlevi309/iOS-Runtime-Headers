/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/

#import <SampleAnalysis/SampleAnalysis-Structs.h>
#import <libobjc.A.dylib/SASerializable.h>

@class NSMutableArray, SATimestamp, NSString, NSArray;

@interface SAThread : NSObject <SASerializable> {

	NSMutableArray* _threadStates;
	BOOL _isGlobalForcedIdle;
	BOOL _isMainThread;
	unsigned long long _threadId;
	SATimestamp* _creationTimestamp;
	SATimestamp* _exitTimestamp;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) SATimestamp * creationTimestamp;                 //@synthesize creationTimestamp=_creationTimestamp - In the implementation block
@property (retain) SATimestamp * exitTimestamp;                     //@synthesize exitTimestamp=_exitTimestamp - In the implementation block
@property (assign) BOOL isGlobalForcedIdle;                         //@synthesize isGlobalForcedIdle=_isGlobalForcedIdle - In the implementation block
@property (assign) BOOL isMainThread;                               //@synthesize isMainThread=_isMainThread - In the implementation block
@property (readonly) unsigned long long threadId;                   //@synthesize threadId=_threadId - In the implementation block
@property (readonly) BOOL isProcessorIdleThread; 
@property (readonly) NSArray * threadStates;                        //@synthesize threadStates=_threadStates - In the implementation block
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(const SCD_Struct_SA29*)arg1 bufferLength:(unsigned long long)arg2 ;
+(id)threadWithId:(unsigned long long)arg1 ;
-(NSString *)debugDescription;
-(BOOL)isMainThread;
-(SATimestamp *)creationTimestamp;
-(void)insertState:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)addState:(id)arg1 ;
-(unsigned long long)threadId;
-(id)initWithId:(unsigned long long)arg1 ;
-(void)setCreationTimestamp:(SATimestamp *)arg1 ;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(BOOL)addSelfToBuffer:(SCD_Struct_SA29*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3 ;
-(void)populateReferencesUsingBuffer:(const SCD_Struct_SA29*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4 ;
-(SATimestamp *)exitTimestamp;
-(void)setExitTimestamp:(SATimestamp *)arg1 ;
-(void)setIsMainThread:(BOOL)arg1 ;
-(void)setIsGlobalForcedIdle:(BOOL)arg1 ;
-(NSArray *)threadStates;
-(void)enumerateThreadStatesBetweenStartTime:(id)arg1 endTime:(id)arg2 reverseOrder:(BOOL)arg3 withSampleIndex:(BOOL)arg4 block:(/*^block*/id)arg5 ;
-(BOOL)isGlobalForcedIdle;
-(unsigned long long)indexOfFirstThreadStateOnOrAfterTime:(id)arg1 withSampleIndex:(BOOL)arg2 ;
-(unsigned long long)indexOfLastThreadStateOnOrBeforeTime:(id)arg1 withSampleIndex:(BOOL)arg2 ;
-(BOOL)isProcessorIdleThread;
-(id)firstThreadStateOnOrAfterTime:(id)arg1 withSampleIndex:(BOOL)arg2 ;
-(id)lastThreadStateOnOrBeforeTime:(id)arg1 withSampleIndex:(BOOL)arg2 ;
-(unsigned long long)sampleCountInTimestampRangeStart:(id)arg1 end:(id)arg2 ;
-(void)forwardFillMonotonicallyIncreasingData;
@end

