/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/

#import <SampleAnalysis/SampleAnalysis-Structs.h>
#import <libobjc.A.dylib/SAJSONSerialization.h>
#import <libobjc.A.dylib/SASerializable.h>

@class SAInstruction, NSString;

@interface SAFrame : NSObject <SAJSONSerialization, SASerializable> {

	SAInstruction* _instruction;
	unsigned long long _address;
	SAFrame* _parentFrame;
	id _childFrameOrFrames;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) unsigned long long address;                      //@synthesize address=_address - In the implementation block
@property (retain) SAInstruction * instruction; 
@property (retain) SAFrame * parentFrame;                           //@synthesize parentFrame=_parentFrame - In the implementation block
@property (retain) id childFrameOrFrames;                           //@synthesize childFrameOrFrames=_childFrameOrFrames - In the implementation block
@property (readonly) BOOL symbolicationOffByOne; 
@property (readonly) BOOL isKernel; 
@property (readonly) BOOL isRootFrame; 
@property (readonly) BOOL isTruncatedBacktraceFrame; 
+(void)enumerateFrameTree:(id)arg1 block:(/*^block*/id)arg2 ;
+(id)frameWithAddress:(unsigned long long)arg1 binaryLoadInfo:(id)arg2 parent:(id)arg3 symbolicationOffByOne:(BOOL)arg4 ;
+(id)addStack:(id)arg1 toSetOfRootFrames:(id)arg2 ;
+(void)fixupInstructionsInFrameTree:(id)arg1 binaryLoadInfos:(id)arg2 libraryCache:(id)arg3 ;
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(const SCD_Struct_SA1*)arg1 bufferLength:(unsigned long long)arg2 ;
+(id)frameWithPAStyleSerializedFrame:(const SCD_Struct_SA2*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)debugDescription;
-(unsigned long long)address;
-(void)setAddress:(unsigned long long)arg1 ;
-(SAInstruction *)instruction;
-(void)setInstruction:(SAInstruction *)arg1 ;
-(SAFrame *)parentFrame;
-(void)setParentFrame:(SAFrame *)arg1 ;
-(id)initWithAddress:(unsigned long long)arg1 binaryLoadInfo:(id)arg2 parent:(id)arg3 symbolicationOffByOne:(BOOL)arg4 ;
-(id)initWithFrame:(id)arg1 andParent:(id)arg2 ;
-(BOOL)isKernel;
-(BOOL)symbolicationOffByOne;
-(id)childFrameOrFrames;
-(id)copyWithNewParent:(id)arg1 ;
-(void)_addChildFrame:(id)arg1 ;
-(BOOL)isTruncatedBacktraceFrame;
-(BOOL)isRootFrame;
-(void)setChildFrameOrFrames:(id)arg1 ;
-(void)writeJSONDictionaryEntriesToStream:(id)arg1 ;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(BOOL)addSelfToBuffer:(SCD_Struct_SA1*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3 ;
-(void)populateReferencesUsingBuffer:(SCD_Struct_SA1*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4 ;
-(void)populateReferencesUsingPAStyleSerializedFrame:(const SCD_Struct_SA2*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
@end

