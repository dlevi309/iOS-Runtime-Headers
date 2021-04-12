/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/

#import <SampleAnalysis/SampleAnalysis-Structs.h>
#import <libobjc.A.dylib/SASerializable.h>

@class NSMutableArray, NSString, NSArray;

@interface SADispatchQueue : NSObject <SASerializable> {

	NSMutableArray* _dispatchQueueStates;
	BOOL _isConcurrent;
	unsigned long long _dispatchQueueId;
	NSString* _dispatchQueueLabel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) BOOL isConcurrent;                                 //@synthesize isConcurrent=_isConcurrent - In the implementation block
@property (retain) NSString * dispatchQueueLabel;                     //@synthesize dispatchQueueLabel=_dispatchQueueLabel - In the implementation block
@property (readonly) unsigned long long dispatchQueueId;              //@synthesize dispatchQueueId=_dispatchQueueId - In the implementation block
@property (readonly) NSArray * dispatchQueueStates;                   //@synthesize dispatchQueueStates=_dispatchQueueStates - In the implementation block
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(const SCD_Struct_SA36*)arg1 bufferLength:(unsigned long long)arg2 ;
+(id)dispatchQueueWithId:(unsigned long long)arg1 ;
-(NSString *)debugDescription;
-(BOOL)isConcurrent;
-(unsigned long long)addState:(id)arg1 ;
-(id)initWithId:(unsigned long long)arg1 ;
-(unsigned long long)addStates:(id)arg1 ;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(BOOL)addSelfToBuffer:(SCD_Struct_SA36*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3 ;
-(void)populateReferencesUsingBuffer:(const SCD_Struct_SA36*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4 ;
-(unsigned long long)dispatchQueueId;
-(NSString *)dispatchQueueLabel;
-(void)setDispatchQueueLabel:(NSString *)arg1 ;
-(void)setIsConcurrent:(BOOL)arg1 ;
-(void)enumerateThreadStatesBetweenStartTime:(id)arg1 endTime:(id)arg2 reverseOrder:(BOOL)arg3 withSampleIndex:(BOOL)arg4 block:(/*^block*/id)arg5 ;
-(void)paDeserializationAppendState:(id)arg1 ;
-(NSArray *)dispatchQueueStates;
-(unsigned long long)insertState:(id)arg1 ;
-(unsigned long long)indexOfFirstDispatchQueueStateOnOrAfterTime:(id)arg1 withSampleIndex:(BOOL)arg2 ;
-(unsigned long long)indexOfLastDispatchQueueStateOnOrBeforeTime:(id)arg1 withSampleIndex:(BOOL)arg2 ;
-(id)firstDispatchQueueStateOnOrAfterTime:(id)arg1 withSampleIndex:(BOOL)arg2 ;
-(id)lastDispatchQueueStateOnOrBeforeTime:(id)arg1 withSampleIndex:(BOOL)arg2 ;
@end

