/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnfshared.dylib
*/


@class NSData, NSArray;

@interface NFTLV : NSObject {

	unsigned _tag;
	NSData* _value;
	NSArray* _children;

}

@property (nonatomic,readonly) unsigned tag; 
@property (nonatomic,readonly) NSData * value; 
@property (nonatomic,readonly) NSArray * children; 
+(id)TLVWithTag:(unsigned)arg1 unsignedLongValue:(unsigned)arg2 ;
+(id)TLVsWithData:(id)arg1 ;
+(id)TLVsWithData:(id)arg1 requireDefiniteEncoding:(BOOL)arg2 ;
+(id)TLVWithTag:(unsigned)arg1 fromData:(id)arg2 ;
+(id)TLVWithTag:(unsigned)arg1 unsignedChar:(unsigned char)arg2 ;
+(id)TLVWithData:(id)arg1 ;
+(id)TLVSsWithBytes:(const void*)arg1 length:(unsigned long long)arg2 requireDefiniteEncoding:(BOOL)arg3 ;
+(id)_intToData:(unsigned)arg1 ;
+(id)TLVWithTag:(unsigned)arg1 value:(id)arg2 ;
+(id)_parseTLVs:(const char**)arg1 end:(const char*)arg2 simple:(BOOL)arg3 definite:(BOOL)arg4 ;
+(id)TLVWithTag:(unsigned)arg1 children:(id)arg2 ;
+(id)simpleTLVsWithData:(id)arg1 ;
+(id)simpleTLVsWithTag:(unsigned)arg1 fromData:(id)arg2 ;
-(NSArray *)children;
-(id)childWithTag:(unsigned)arg1 ;
-(id)valueAsString;
-(id)valueAsHexString;
-(unsigned)valueAsUnsignedLong;
-(unsigned)tag;
-(unsigned short)valueAsUnsignedShort;
-(unsigned long long)valueAsUnsignedLongLong;
-(id)description;
-(id)asData;
-(id)childrenWithTag:(unsigned)arg1 ;
-(NSData *)value;
@end

