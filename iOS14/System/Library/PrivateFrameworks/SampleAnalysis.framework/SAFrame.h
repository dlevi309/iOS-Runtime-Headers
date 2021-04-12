/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/

#import <SampleAnalysis/SampleAnalysis-Structs.h>
#import <libobjc.A.dylib/SAJSONSerialization.h>
#import <libobjc.A.dylib/SASerializable.h>

@class SABinaryLoadInfo, NSString, SAInstruction;

@interface SAFrame : NSObject <SAJSONSerialization, SASerializable> {

	unsigned long long _address;
	SABinaryLoadInfo* _binaryLoadInfo;
	SAFrame* _parentFrame;
	id _childFrameOrFrames;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) BOOL symbolicationOffByOne; 
@property (readonly) unsigned long long address; 
@property (readonly) SAInstruction * instruction; 
@property (readonly) BOOL isKernel; 
@property (readonly) BOOL isRootFrame; 
@property (readonly) BOOL isTruncatedBacktraceFrame; 
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 ;
-(NSString *)debugDescription;
-(unsigned long long)address;
-(SAInstruction *)instruction;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)symbolicationOffByOne;
-(id)initWithFrame:(id)arg1 andParent:(id)arg2 ;
-(BOOL)isKernel;
-(BOOL)isTruncatedBacktraceFrame;
-(BOOL)isRootFrame;
-(void)writeJSONDictionaryEntriesToStream:(id)arg1 ;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(BOOL)addSelfToBuffer:(SCD_Struct_SA1*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3 ;
-(void)populateReferencesUsingBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4 ;
@end

