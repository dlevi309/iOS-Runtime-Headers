/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/


#import <ProactiveSupport/ProactiveSupport-Structs.h>
@class NSData;

@interface _PASLazyPlist : NSObject {

	NSData* _backingData;
	SCD_Struct_PA2* _mappedRegion;
	const CFAllocatorRef _stringContentsDeallocator;

}

@property (nonatomic,readonly) const SCD_Struct_PA2* mappedRegion; 
@property (nonatomic,readonly) const CFAllocatorRef stringContentsDeallocator;              //@synthesize stringContentsDeallocator=_stringContentsDeallocator - In the implementation block
+(/*^block*/id)deserializationStatsHandler;
+(id)propertyListWithData:(id)arg1 error:(id*)arg2 ;
+(id)propertyListWithPath:(id)arg1 error:(id*)arg2 ;
+(id)propertyListWithPath:(id)arg1 fileRange:(NSRange)arg2 error:(id*)arg3 ;
+(id)dictionaryWithPath:(id)arg1 error:(id*)arg2 ;
+(id)dictionaryWithData:(id)arg1 error:(id*)arg2 ;
+(id)arrayWithPath:(id)arg1 error:(id*)arg2 ;
+(id)arrayWithData:(id)arg1 error:(id*)arg2 ;
+(id)dataWithPropertyList:(id)arg1 error:(id*)arg2 ;
+(id)fileBackedDataWithPropertyList:(id)arg1 writtenToPath:(id)arg2 error:(id*)arg3 ;
+(id)fileBackedDataWithPropertyList:(id)arg1 appendedToFd:(int)arg2 startOfs:(long long*)arg3 error:(id*)arg4 ;
+(BOOL)isLazyPlistLikelyContainedInData:(id)arg1 version:(unsigned long long*)arg2 ;
+(BOOL)isLazyPlistLikelyContainedInFileAtPath:(id)arg1 version:(unsigned long long*)arg2 ;
+(/*^block*/id)serializationStatsHandler;
+(void)setSerializationStatsHandler:(/*^block*/id)arg1 ;
+(void)setDeserializationStatsHandler:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)_retainForStringAllocation;
-(const SCD_Struct_PA2*)mappedRegion;
-(id)_initWithData:(id)arg1 sourcedFromPath:(id)arg2 error:(id*)arg3 ;
-(BOOL)_validateHeader:(const PASLPHeader*)arg1 filename:(id)arg2 error:(id*)arg3 ;
-(BOOL)_validateStringTableWithFilename:(id)arg1 stats:(PASLPObjectGraphStats*)arg2 error:(id*)arg3 ;
-(BOOL)_validateObjectGraphWithFilename:(id)arg1 stats:(PASLPObjectGraphStats*)arg2 error:(id*)arg3 ;
-(BOOL)_validateObjectGraphWithFilename:(id)arg1 rootValue:(SCD_Struct_PA4)arg2 recursionDepth:(unsigned long long)arg3 stats:(PASLPObjectGraphStats*)arg4 error:(id*)arg5 ;
-(id)_rootObjectWithErrMsg:(id*)arg1 ;
-(id)_objectForValue:(SCD_Struct_PA4)arg1 ;
-(BOOL)_decodeValue:(SCD_Struct_PA4)arg1 handleBoolean:(/*^block*/id)arg2 handleTaggedInt:(/*^block*/id)arg3 handleBoxedInt:(/*^block*/id)arg4 handleTaggedFloat:(/*^block*/id)arg5 handleBoxedFloat:(/*^block*/id)arg6 handleDate:(/*^block*/id)arg7 handleData:(/*^block*/id)arg8 handleString:(/*^block*/id)arg9 handleDict:(/*^block*/id)arg10 handleArray:(/*^block*/id)arg11 errMsg:(id*)arg12 ;
-(BOOL)_decodeDictionaryKeyValue:(SCD_Struct_PA4)arg1 handleString:(/*^block*/id)arg2 errMsg:(id*)arg3 ;
-(id)_objectForValue:(SCD_Struct_PA4)arg1 errMsg:(id*)arg2 ;
-(const CFAllocatorRef)stringContentsDeallocator;
@end

