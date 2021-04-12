/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/

#import <SampleAnalysis/SampleAnalysis-Structs.h>
#import <libobjc.A.dylib/SAJSONSerialization.h>
#import <libobjc.A.dylib/SASerializable.h>

@class NSMutableArray, NSMutableDictionary, NSString, SABinary;

@interface SASegment : NSObject <SAJSONSerialization, SASerializable> {

	NSMutableArray* _symbols;
	NSMutableDictionary* _inlineSymbols;
	unsigned long long _length;
	NSString* _name;
	long long _offsetIntoBinary;
	SABinary* _binary;
	NSMutableDictionary* _instructions;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (readonly) unsigned long long length; 
@property (readonly) long long offsetIntoBinary; 
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 ;
-(NSString *)debugDescription;
-(unsigned long long)length;
-(NSString *)name;
-(BOOL)hasOffsetIntoBinary;
-(long long)offsetIntoBinary;
-(void)writeJSONDictionaryEntriesToStream:(id)arg1 ;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(BOOL)addSelfToBuffer:(SCD_Struct_SA6*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3 ;
-(void)populateReferencesUsingBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4 ;
-(id)initWithBinary:(id)arg1 name:(id)arg2 length:(unsigned long long)arg3 offsetIntoBinary:(long long)arg4 ;
-(id)instructionAtOffsetIntoSegment:(unsigned long long)arg1 ;
@end

