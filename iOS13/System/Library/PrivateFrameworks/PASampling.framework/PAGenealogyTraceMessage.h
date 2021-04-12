/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
*/

#import <PASampling/PASampling-Structs.h>
#import <PASampling/PAGenealogyTimestampedMessage.h>
#import <PASampling/PASerializable.h>

@class NSUUID, NSString;

@interface PAGenealogyTraceMessage : PAGenealogyTimestampedMessage <PASerializable> {

	unsigned long long _traceId;
	NSUUID* _binaryUuid;
	unsigned _binaryOffset;
	void* _buffer;
	unsigned long long _bufferLength;
	NSString* _message;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSUUID * binaryUuid;                           //@synthesize binaryUuid=_binaryUuid - In the implementation block
@property (readonly) unsigned binaryOffset;                         //@synthesize binaryOffset=_binaryOffset - In the implementation block
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1 ;
-(void)dealloc;
-(id)message;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(BOOL)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
-(id)initWithSerializedGenealogyTraceMessage:(const SCD_Struct_PA19*)arg1 ;
-(NSUUID *)binaryUuid;
-(unsigned)binaryOffset;
-(id)initWithId:(unsigned long long)arg1 andOffset:(unsigned)arg2 intoBinaryWithUUID:(id)arg3 withBuffer:(const void*)arg4 ofLength:(unsigned long long)arg5 atMachTime:(double)arg6 withActivityId:(unsigned long long)arg7 ;
@end

