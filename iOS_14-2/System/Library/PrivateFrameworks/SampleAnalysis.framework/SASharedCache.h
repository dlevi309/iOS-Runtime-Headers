/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/

#import <SampleAnalysis/SampleAnalysis-Structs.h>
#import <libobjc.A.dylib/SAJSONSerialization.h>
#import <libobjc.A.dylib/SASerializable.h>
#import <libobjc.A.dylib/SALibraryCache.h>

@class NSUUID, NSArray, NSString;

@interface SASharedCache : NSObject <SAJSONSerialization, SASerializable, SALibraryCache> {

	unsigned long long _slide;
	unsigned long long _slidBaseAddress;
	BOOL _defunct;
	NSUUID* _uuid;
	NSArray* _binaryLoadInfos;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) NSArray * binaryLoadInfos;                                  //@synthesize binaryLoadInfos=_binaryLoadInfos - In the implementation block
@property (readonly) unsigned long long slide; 
@property (readonly) unsigned long long slidBaseAddress; 
@property (readonly) NSUUID * uuid;                                            //@synthesize uuid=_uuid - In the implementation block
@property (readonly) unsigned long long startAddress; 
@property (readonly) unsigned long long endAddress; 
@property (readonly) unsigned long long textSegmentsStartAddress; 
@property (readonly) unsigned long long textSegmentsEndAddress; 
+(void)clearCaches;
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 ;
+(id)currentSharedCache;
+(id)sharedCacheWithUUID:(id)arg1 slide:(unsigned long long)arg2 slidBaseAddress:(unsigned long long)arg3 ;
+(void)addDSCSymData:(id)arg1 ;
+(id)sharedCacheWithUUID:(id)arg1 slide:(unsigned long long)arg2 ;
+(void)addDscSymDir:(id)arg1 ;
-(NSUUID *)uuid;
-(unsigned long long)slide;
-(NSString *)debugDescription;
-(unsigned long long)startAddress;
-(unsigned long long)endAddress;
-(void)writeJSONDictionaryEntriesToStream:(id)arg1 ;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(BOOL)addSelfToBuffer:(SCD_Struct_SA9*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3 ;
-(void)populateReferencesUsingBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4 ;
-(NSArray *)binaryLoadInfos;
-(unsigned long long)slidBaseAddress;
-(BOOL)matchesUUID:(unsigned char)arg1 slide:(unsigned long long)arg2 slidBaseAddress:(unsigned long long)arg3 ;
-(void)setBinaryLoadInfos:(NSArray *)arg1 ;
-(unsigned long long)textSegmentsStartAddress;
-(unsigned long long)textSegmentsEndAddress;
-(BOOL)matchesUUID:(unsigned char)arg1 slide:(unsigned long long)arg2 ;
@end

