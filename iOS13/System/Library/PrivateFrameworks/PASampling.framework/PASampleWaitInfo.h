/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
*/


#import <PASampling/PASampling-Structs.h>
@interface PASampleWaitInfo : NSObject {

	unsigned long long _owner;
	unsigned long long _context;
	unsigned long long _wait_type;

}

@property (readonly) unsigned long long owner;                  //@synthesize owner=_owner - In the implementation block
@property (readonly) unsigned long long context;                //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long wait_type;              //@synthesize wait_type=_wait_type - In the implementation block
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1 ;
+(id)waitInfoWithStackshotWaitInfo:(const stackshot_thread_waitinfo*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)context;
-(unsigned long long)owner;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(id)_initWithSerializedWaitInfo:(const SCD_Struct_PA14*)arg1 ;
-(BOOL)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
-(id)descriptionForPid:(int)arg1 andTid:(unsigned long long)arg2 withOptions:(unsigned long long)arg3 andNameCallback:(/*^block*/id)arg4 ;
-(id)initWithStackshotWaitInfo:(const stackshot_thread_waitinfo*)arg1 ;
-(unsigned long long)wait_type;
-(BOOL)matchesStackshotWaitInfo:(const stackshot_thread_waitinfo*)arg1 ;
@end

