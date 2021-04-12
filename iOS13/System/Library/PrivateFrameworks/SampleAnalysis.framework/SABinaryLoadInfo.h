/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/

#import <SampleAnalysis/SampleAnalysis-Structs.h>
#import <libobjc.A.dylib/SAJSONSerialization.h>
#import <libobjc.A.dylib/SASerializable.h>

@class SABinary, NSString;

@interface SABinaryLoadInfo : NSObject <SAJSONSerialization, SASerializable> {

	SABinary* _binary;
	unsigned long long _textSegmentLoadAddress;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) unsigned long long textSegmentLoadAddress;              //@synthesize textSegmentLoadAddress=_textSegmentLoadAddress - In the implementation block
@property (readonly) SABinary * binary;                                    //@synthesize binary=_binary - In the implementation block
@property (readonly) BOOL isInKernelAddressSpace; 
+(id)binaryLoadInfoForLiveProcessWithPid:(int)arg1 dataGatheringOptions:(unsigned long long)arg2 ;
+(id)binaryLoadInfoForAddress:(unsigned long long)arg1 inBinaryLoadInfos:(id)arg2 libraryCache:(id)arg3 ;
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(const SCD_Struct_SA9*)arg1 bufferLength:(unsigned long long)arg2 ;
+(id)binaryLoadInfoWithBinary:(id)arg1 textSegmentLoadAddress:(unsigned long long)arg2 isInKernelAddressSpace:(BOOL)arg3 ;
+(id)binaryLoadInfoForAddress:(unsigned long long)arg1 inBinaryLoadInfos:(id)arg2 ;
+(id)binaryLoadInfoForLiveProcessWithPid:(int)arg1 ;
+(id)binaryLoadInfoWithoutReferencesFromPAStyleSerializedImageInfo:(const SCD_Struct_SA10*)arg1 ;
-(NSString *)debugDescription;
-(SABinary *)binary;
-(unsigned long long)textSegmentLoadAddress;
-(void)writeJSONDictionaryEntriesToStream:(id)arg1 ;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(BOOL)addSelfToBuffer:(SCD_Struct_SA9*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3 ;
-(void)populateReferencesUsingBuffer:(const SCD_Struct_SA9*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4 ;
-(BOOL)isInKernelAddressSpace;
-(id)initWithBinary:(id)arg1 textSegmentLoadAddress:(unsigned long long)arg2 ;
-(id)initWithDyldUUIDInfo:(const void*)arg1 is64Bit:(BOOL)arg2 ;
-(void)setTextSegmentLoadAddress:(unsigned long long)arg1 ;
-(void)populateReferencesUsingPAStyleSerializedImageInfo:(const SCD_Struct_SA10*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
@end

