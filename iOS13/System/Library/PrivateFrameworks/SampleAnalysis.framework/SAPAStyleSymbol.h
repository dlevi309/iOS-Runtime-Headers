/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/


#import <SampleAnalysis/SampleAnalysis-Structs.h>
@class NSString, NSArray;

@interface SAPAStyleSymbol : NSObject {

	NSString* _name;
	unsigned long long _offsetIntoTextSegment;
	unsigned long long _length;
	NSArray* _sourceInfos;

}

@property (retain) NSString * name;                                       //@synthesize name=_name - In the implementation block
@property (assign) unsigned long long offsetIntoTextSegment;              //@synthesize offsetIntoTextSegment=_offsetIntoTextSegment - In the implementation block
@property (assign) unsigned long long length;                             //@synthesize length=_length - In the implementation block
@property (retain) NSArray * sourceInfos;                                 //@synthesize sourceInfos=_sourceInfos - In the implementation block
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(const SCD_Struct_SA25*)arg1 bufferLength:(unsigned long long)arg2 ;
-(unsigned long long)length;
-(NSString *)name;
-(void)setLength:(unsigned long long)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)offsetIntoTextSegment;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(BOOL)addSelfToBuffer:(void*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3 ;
-(void)populateReferencesUsingBuffer:(const SCD_Struct_SA25*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4 ;
-(void)setOffsetIntoTextSegment:(unsigned long long)arg1 ;
-(NSArray *)sourceInfos;
-(void)setSourceInfos:(NSArray *)arg1 ;
@end

