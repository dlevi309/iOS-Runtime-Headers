/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/

#import <SampleAnalysis/SampleAnalysis-Structs.h>
#import <libobjc.A.dylib/SASerializable.h>

@class SABinary, SASymbol, SASourceInfo, NSString;

@interface SAInstruction : NSObject <SASerializable> {

	unsigned long long _offsetIntoTextSegment;
	SABinary* _binary;
	SASymbol* _symbol;
	SASourceInfo* _sourceInfo;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (__weak) SABinary * binary;                                     //@synthesize binary=_binary - In the implementation block
@property (assign) unsigned long long offsetIntoTextSegment;              //@synthesize offsetIntoTextSegment=_offsetIntoTextSegment - In the implementation block
@property (retain) SASymbol * symbol;                                     //@synthesize symbol=_symbol - In the implementation block
@property (retain) SASourceInfo * sourceInfo;                             //@synthesize sourceInfo=_sourceInfo - In the implementation block
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(const SCD_Struct_SA12*)arg1 bufferLength:(unsigned long long)arg2 ;
+(id)instructionWithBinary:(id)arg1 offsetIntoTextSegment:(unsigned long long)arg2 ;
+(id)invalidInstruction;
-(NSString *)debugDescription;
-(SASymbol *)symbol;
-(void)setSymbol:(SASymbol *)arg1 ;
-(SASourceInfo *)sourceInfo;
-(void)setSourceInfo:(SASourceInfo *)arg1 ;
-(SABinary *)binary;
-(void)setBinary:(SABinary *)arg1 ;
-(BOOL)symbolicateWithOptions:(unsigned long long)arg1 pid:(int)arg2 ;
-(unsigned long long)offsetIntoTextSegment;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(BOOL)addSelfToBuffer:(SCD_Struct_SA13*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3 ;
-(void)populateReferencesUsingBuffer:(const SCD_Struct_SA12*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4 ;
-(void)setOffsetIntoTextSegment:(unsigned long long)arg1 ;
@end

