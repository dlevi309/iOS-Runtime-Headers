/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/

#import <SampleAnalysis/SampleAnalysis-Structs.h>
#import <libobjc.A.dylib/SASerializable.h>

@class NSString;

@interface SATurnstileInfo : NSObject <SASerializable> {

	unsigned char _priority;
	unsigned char _numHops;
	unsigned long long _context;
	unsigned long long _flags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) unsigned long long context;                    //@synthesize context=_context - In the implementation block
@property (readonly) unsigned char priority;                        //@synthesize priority=_priority - In the implementation block
@property (readonly) unsigned char numHops;                         //@synthesize numHops=_numHops - In the implementation block
@property (readonly) unsigned long long flags;                      //@synthesize flags=_flags - In the implementation block
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 ;
-(long long)compare:(id)arg1 ;
-(unsigned long long)flags;
-(unsigned long long)context;
-(NSString *)description;
-(unsigned long long)hash;
-(unsigned char)numHops;
-(unsigned char)priority;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(BOOL)addSelfToBuffer:(SCD_Struct_SA19*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3 ;
-(void)populateReferencesUsingBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4 ;
-(id)initWithKCDataTurnstileInfo:(const stackshot_thread_turnstileinfo*)arg1 ;
-(id)descriptionForPid:(int)arg1 tid:(unsigned long long)arg2 threadPriority:(int)arg3 options:(unsigned long long)arg4 nameCallback:(/*^block*/id)arg5 ;
@end

