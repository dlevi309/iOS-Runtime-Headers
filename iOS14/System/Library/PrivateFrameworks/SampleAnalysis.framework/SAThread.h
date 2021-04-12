/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/

#import <SampleAnalysis/SampleAnalysis-Structs.h>
#import <libobjc.A.dylib/SASerializable.h>

@class NSMutableArray, SATimestamp, SAFrame, NSString, NSArray;

@interface SAThread : NSObject <SASerializable> {

	NSMutableArray* _threadStates;
	BOOL _isGlobalForcedIdle;
	BOOL _isMainThread;
	unsigned long long _threadId;
	SATimestamp* _creationTimestamp;
	SATimestamp* _exitTimestamp;
	SAFrame* _resampledLeafUserFrame;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) unsigned long long threadId;                   //@synthesize threadId=_threadId - In the implementation block
@property (readonly) SATimestamp * creationTimestamp; 
@property (readonly) SATimestamp * exitTimestamp; 
@property (readonly) BOOL isGlobalForcedIdle; 
@property (readonly) BOOL isProcessorIdleThread; 
@property (readonly) BOOL isMainThread; 
@property (readonly) NSArray * threadStates;                        //@synthesize threadStates=_threadStates - In the implementation block
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 ;
-(BOOL)isMainThread;
-(NSString *)debugDescription;
-(SATimestamp *)creationTimestamp;
-(id)initWithId:(unsigned long long)arg1 ;
-(unsigned long long)threadId;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(BOOL)addSelfToBuffer:(SCD_Struct_SA14*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3 ;
-(void)populateReferencesUsingBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4 ;
-(SATimestamp *)exitTimestamp;
-(NSArray *)threadStates;
-(void)enumerateThreadStatesBetweenStartTime:(id)arg1 endTime:(id)arg2 reverseOrder:(BOOL)arg3 withSampleIndex:(BOOL)arg4 block:(/*^block*/id)arg5 ;
-(unsigned long long)indexOfFirstThreadStateOnOrAfterTime:(id)arg1 withSampleIndex:(BOOL)arg2 ;
-(unsigned long long)indexOfLastThreadStateOnOrBeforeTime:(id)arg1 withSampleIndex:(BOOL)arg2 ;
-(id)firstThreadStateOnOrAfterTime:(id)arg1 withSampleIndex:(BOOL)arg2 ;
-(id)lastThreadStateOnOrBeforeTime:(id)arg1 withSampleIndex:(BOOL)arg2 ;
-(unsigned long long)sampleCountInTimestampRangeStart:(id)arg1 end:(id)arg2 ;
-(id)patchedStackForTruncatedStack:(id)arg1 ;
-(BOOL)isProcessorIdleThread;
-(BOOL)isGlobalForcedIdle;
@end

