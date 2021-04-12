/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/


#import <SampleAnalysis/SampleAnalysis-Structs.h>
@class SATaskState, NSArray;

@interface SAPAStyleTaskData : NSObject {

	SATaskState* _taskState;
	NSArray* _threadStates;

}

@property (retain) SATaskState * taskState;              //@synthesize taskState=_taskState - In the implementation block
@property (retain) NSArray * threadStates;               //@synthesize threadStates=_threadStates - In the implementation block
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(const SCD_Struct_SA18*)arg1 bufferLength:(unsigned long long)arg2 ;
-(SATaskState *)taskState;
-(void)setTaskState:(SATaskState *)arg1 ;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(BOOL)addSelfToBuffer:(void*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3 ;
-(void)populateReferencesUsingBuffer:(const SCD_Struct_SA18*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4 ;
-(NSArray *)threadStates;
-(void)setThreadStates:(NSArray *)arg1 ;
@end

