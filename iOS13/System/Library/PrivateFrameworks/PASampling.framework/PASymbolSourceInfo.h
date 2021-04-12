/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
*/

#import <PASampling/PASampling-Structs.h>
#import <PASampling/PASerializable.h>

@class NSString;

@interface PASymbolSourceInfo : NSObject <PASerializable> {

	unsigned long long _offsetIntoSymbolOwner;
	unsigned long long _length;
	NSString* _fileName;
	unsigned _lineNumber;
	unsigned _columnNumber;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * sourceFileName;                             //@synthesize fileName=_fileName - In the implementation block
@property (readonly) unsigned sourceFileLineNumber;                         //@synthesize lineNumber=_lineNumber - In the implementation block
@property (readonly) unsigned sourceFileColumnNumber;                       //@synthesize columnNumber=_columnNumber - In the implementation block
@property (readonly) unsigned long long offsetIntoSymbolOwner;              //@synthesize offsetIntoSymbolOwner=_offsetIntoSymbolOwner - In the implementation block
@property (readonly) unsigned long long length;                             //@synthesize length=_length - In the implementation block
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1 ;
-(unsigned long long)length;
-(NSString *)debugDescription;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(unsigned long long)offsetIntoSymbolOwner;
-(id)_initEmptySourceInfoWithOffsetIntoSymbolOwner:(unsigned long long)arg1 ;
-(BOOL)isEmptySourceInfo;
-(id)initWithCSSymbolOwner:(CSTypeRef)arg1 andOffsetIntoSymbolOwner:(unsigned long long)arg2 ;
-(id)initWithOffsetIntoSymbolOwner:(unsigned long long)arg1 length:(unsigned long long)arg2 fileName:(id)arg3 lineNumber:(unsigned)arg4 columnNumber:(unsigned)arg5 ;
-(NSString *)sourceFileName;
-(unsigned)sourceFileLineNumber;
-(unsigned)sourceFileColumnNumber;
-(BOOL)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
-(id)_initWithSerializedSymbolSourceInfo:(const SCD_Struct_PA1*)arg1 ;
-(void)fixupOffsetFromVersion1WithSymbolOffsetIntoSymbolOwner:(unsigned long long)arg1 ;
@end

