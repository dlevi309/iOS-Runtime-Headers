/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/


#import <SampleAnalysis/SampleAnalysis-Structs.h>
@class SASharedCache, SAKernelCache;

@interface SAPAStyleSymbolDataStore : NSObject {

	SASharedCache* _sharedCache64Bit;
	SASharedCache* _sharedCache32Bit;
	SAKernelCache* _kernelCache;

}

@property (retain) SASharedCache * sharedCache64Bit;              //@synthesize sharedCache64Bit=_sharedCache64Bit - In the implementation block
@property (retain) SASharedCache * sharedCache32Bit;              //@synthesize sharedCache32Bit=_sharedCache32Bit - In the implementation block
@property (retain) SAKernelCache * kernelCache;                   //@synthesize kernelCache=_kernelCache - In the implementation block
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(const SCD_Struct_SA25*)arg1 bufferLength:(unsigned long long)arg2 ;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(BOOL)addSelfToBuffer:(void*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3 ;
-(void)populateReferencesUsingBuffer:(const SCD_Struct_SA25*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4 ;
-(SAKernelCache *)kernelCache;
-(SASharedCache *)sharedCache64Bit;
-(SASharedCache *)sharedCache32Bit;
-(void)setSharedCache64Bit:(SASharedCache *)arg1 ;
-(void)setSharedCache32Bit:(SASharedCache *)arg1 ;
-(void)setKernelCache:(SAKernelCache *)arg1 ;
@end

