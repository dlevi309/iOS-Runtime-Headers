/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/

#import <SampleAnalysis/SampleAnalysis-Structs.h>
#import <libobjc.A.dylib/SASerializable.h>

@class SAThread, NSString, SAThreadState;

@interface SADispatchQueueState : NSObject <SASerializable> {

	SAThread* _thread;
	unsigned long long _threadStateIndex;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) unsigned long long threadStateIndex;              //@synthesize threadStateIndex=_threadStateIndex - In the implementation block
@property (readonly) SAThread * thread;                              //@synthesize thread=_thread - In the implementation block
@property (readonly) SAThreadState * threadState; 
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(const SCD_Struct_SA37*)arg1 bufferLength:(unsigned long long)arg2 ;
+(id)stateWithThread:(id)arg1 threadStateIndex:(unsigned long long)arg2 ;
-(SAThread *)thread;
-(SAThreadState *)threadState;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(BOOL)addSelfToBuffer:(SCD_Struct_SA37*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3 ;
-(void)populateReferencesUsingBuffer:(const SCD_Struct_SA37*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4 ;
-(unsigned long long)threadStateIndex;
-(void)setThreadStateIndex:(unsigned long long)arg1 ;
-(id)initWithThread:(id)arg1 threadStateIndex:(unsigned long long)arg2 ;
-(id)debugDescriptionWithDispatchQueue:(id)arg1 ;
@end

