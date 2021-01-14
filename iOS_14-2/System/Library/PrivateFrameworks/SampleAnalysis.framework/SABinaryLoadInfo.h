/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/

#import <SampleAnalysis/SampleAnalysis-Structs.h>
#import <libobjc.A.dylib/SAJSONSerialization.h>
#import <libobjc.A.dylib/SASerializable.h>

@class SABinary, SASegment, NSString;

@interface SABinaryLoadInfo : NSObject <SAJSONSerialization, SASerializable> {

	SABinary* _binary;
	SASegment* _segment;
	unsigned long long _loadAddress;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) SABinary * binary;                                      //@synthesize binary=_binary - In the implementation block
@property (readonly) SASegment * segment;                                    //@synthesize segment=_segment - In the implementation block
@property (readonly) unsigned long long loadAddress; 
@property (readonly) unsigned long long length; 
@property (readonly) BOOL isInKernelAddressSpace; 
@property (readonly) unsigned long long textSegmentLoadAddress; 
+(id)binaryLoadInfoForAddress:(unsigned long long)arg1 inBinaryLoadInfos:(id)arg2 libraryCache:(id)arg3 ;
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 ;
+(id)binaryLoadInfoForLiveProcessWithPid:(int)arg1 dataGatheringOptions:(unsigned long long)arg2 ;
+(id)binaryLoadInfoForAddress:(unsigned long long)arg1 inBinaryLoadInfos:(id)arg2 ;
+(id)binaryLoadInfoForLiveProcessWithPid:(int)arg1 ;
-(SABinary *)binary;
-(SASegment *)segment;
-(NSString *)debugDescription;
-(unsigned long long)length;
-(unsigned long long)loadAddress;
-(id)instructionAtOffsetIntoLoadInfo:(unsigned long long)arg1 ;
-(void)writeJSONDictionaryEntriesToStream:(id)arg1 ;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(BOOL)addSelfToBuffer:(SCD_Struct_SA8*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3 ;
-(void)populateReferencesUsingBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4 ;
-(BOOL)isInKernelAddressSpace;
-(id)initWithBinary:(id)arg1 segment:(id)arg2 loadAddress:(unsigned long long)arg3 ;
-(unsigned long long)textSegmentLoadAddress;
@end

