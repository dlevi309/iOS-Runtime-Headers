/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/

#import <SampleAnalysis/SampleAnalysis-Structs.h>
#import <libobjc.A.dylib/SASerializable.h>

@class NSString;

@interface SAWaitInfo : NSObject <SASerializable> {

	unsigned short _type;
	unsigned long long _owner;
	unsigned long long _context;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) unsigned short type;                           //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long owner;                      //@synthesize owner=_owner - In the implementation block
@property (readonly) unsigned long long context;                    //@synthesize context=_context - In the implementation block
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 ;
-(long long)compare:(id)arg1 ;
-(unsigned long long)owner;
-(unsigned long long)context;
-(NSString *)description;
-(unsigned short)type;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(BOOL)addSelfToBuffer:(SCD_Struct_SA18*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3 ;
-(void)populateReferencesUsingBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4 ;
-(id)initWithKCDataWaitInfo:(const stackshot_thread_waitinfo*)arg1 ;
-(id)descriptionForPid:(int)arg1 tid:(unsigned long long)arg2 options:(unsigned long long)arg3 nameCallback:(/*^block*/id)arg4 ;
@end

