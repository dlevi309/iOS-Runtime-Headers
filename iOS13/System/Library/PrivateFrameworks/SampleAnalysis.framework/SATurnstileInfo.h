/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(const SCD_Struct_SA35*)arg1 bufferLength:(unsigned long long)arg2 ;
+(id)turnstileInfoWithKCDataTurnstileInfo:(const stackshot_thread_turnstileinfo*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(long long)compare:(id)arg1 ;
-(unsigned long long)flags;
-(unsigned long long)context;
-(unsigned char)priority;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(BOOL)addSelfToBuffer:(SCD_Struct_SA35*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3 ;
-(void)populateReferencesUsingBuffer:(const SCD_Struct_SA35*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4 ;
-(BOOL)matchesKCDataTurnstileInfo:(const stackshot_thread_turnstileinfo*)arg1 ;
-(BOOL)displaysSameContentAs:(id)arg1 withDisplayOptions:(unsigned long long)arg2 ;
-(id)initWithKCDataTurnstileInfo:(const stackshot_thread_turnstileinfo*)arg1 ;
-(id)descriptionForTid:(unsigned long long)arg1 threadPriority:(int)arg2 options:(unsigned long long)arg3 nameCallback:(/*^block*/id)arg4 ;
-(unsigned char)numHops;
@end

