/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/

#import <ProactiveSupport/ProactiveSupport-Structs.h>
#import <libobjc.A.dylib/_PASLPReaderProtocol.h>

@class NSData;

@interface _PASLPReaderV1 : NSObject <_PASLPReaderProtocol> {

	NSData* _backingData;
	SCD_Struct_PA3* _mappedRegion;
	CFAllocatorRef _releaseReaderDeallocator;

}
-(BOOL)_decodeValue:(SCD_Struct_PA5)arg1 handleBoolean:(/*^block*/id)arg2 handleTaggedInt:(/*^block*/id)arg3 handleBoxedInt:(/*^block*/id)arg4 handleTaggedFloat:(/*^block*/id)arg5 handleBoxedFloat:(/*^block*/id)arg6 handleDate:(/*^block*/id)arg7 handleData:(/*^block*/id)arg8 handleString:(/*^block*/id)arg9 handleDict:(/*^block*/id)arg10 handleArray:(/*^block*/id)arg11 errMsg:(id*)arg12 ;
-(id)init;
-(BOOL)_decodeDictionaryKeyValue:(SCD_Struct_PA5)arg1 handleString:(/*^block*/id)arg2 errMsg:(id*)arg3 ;
-(BOOL)_validateObjectGraphWithFilename:(id)arg1 stats:(PASLPObjectGraphStats*)arg2 error:(id*)arg3 ;
-(id)objectAtIndex:(unsigned long long)arg1 usingDictionaryContext:(id)arg2 ;
-(id)_stringForMappedUTF8CString:(const char*)arg1 ;
-(id)initWithData:(id)arg1 sourcedFromPath:(id)arg2 error:(id*)arg3 ;
-(unsigned)_mmapByteOffsetForPtr:(const void*)arg1 ;
-(BOOL)_validateHeader:(const PASLPHeader*)arg1 filename:(id)arg2 error:(id*)arg3 ;
-(id)rootObjectWithErrMsg:(id*)arg1 ;
-(id)_objectForValue:(SCD_Struct_PA5)arg1 errMsg:(id*)arg2 ;
-(id)keyAtIndex:(unsigned long long)arg1 usingDictionaryContext:(id)arg2 ;
-(BOOL)_validateStringTableWithFilename:(id)arg1 stats:(PASLPObjectGraphStats*)arg2 error:(id*)arg3 ;
-(BOOL)_validateObjectGraphWithFilename:(id)arg1 rootValue:(SCD_Struct_PA5)arg2 recursionDepth:(unsigned long long)arg3 stats:(PASLPObjectGraphStats*)arg4 error:(id*)arg5 ;
-(id)objectForKey:(id)arg1 usingDictionaryContext:(id)arg2 ;
-(void)decodeDictionaryKeyForValue:(SCD_Struct_PA5)arg1 handleString:(/*^block*/id)arg2 ;
-(id)_objectForValue:(SCD_Struct_PA5)arg1 ;
-(void)dealloc;
-(id)objectAtIndex:(unsigned long long)arg1 usingArrayContext:(id)arg2 ;
@end

