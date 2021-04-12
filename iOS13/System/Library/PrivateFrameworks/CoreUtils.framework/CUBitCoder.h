/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


#import <CoreUtils/CoreUtils-Structs.h>
@class NSDictionary;

@interface CUBitCoder : NSObject {

	/*^block*/id _decryptHandler;
	/*^block*/id _encryptHandler;
	NSDictionary* _schema;

}

@property (nonatomic,copy) id decryptHandler;                  //@synthesize decryptHandler=_decryptHandler - In the implementation block
@property (nonatomic,copy) id encryptHandler;                  //@synthesize encryptHandler=_encryptHandler - In the implementation block
@property (nonatomic,copy) NSDictionary * schema;              //@synthesize schema=_schema - In the implementation block
-(void)dealloc;
-(void)invalidate;
-(NSDictionary *)schema;
-(id)decodeBytes:(const void*)arg1 length:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)decodeBytes:(const void*)arg1 length:(unsigned long long)arg2 info:(id)arg3 error:(id*)arg4 ;
-(id)decodeData:(id)arg1 error:(id*)arg2 ;
-(id)decodeData:(id)arg1 info:(id)arg2 error:(id*)arg3 ;
-(id)encodeFields:(id)arg1 variantIdentifier:(id)arg2 error:(id*)arg3 ;
-(id)encodeFields:(id)arg1 variantIdentifier:(id)arg2 info:(id)arg3 error:(id*)arg4 ;
-(unsigned long long)_readValue:(CFBitVectorRef)arg1 bitCount:(unsigned)arg2 bitIndex:(unsigned*)arg3 err:(int*)arg4 ;
-(void)_writeValue:(unsigned long long)arg1 bitCount:(unsigned)arg2 bitVector:(CFBitVectorRef)arg3 ;
-(id)decryptHandler;
-(void)setDecryptHandler:(id)arg1 ;
-(id)encryptHandler;
-(void)setEncryptHandler:(id)arg1 ;
-(void)setSchema:(NSDictionary *)arg1 ;
@end

