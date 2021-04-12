/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)TLVWithData:(id)arg1 ;
+(id)simpleTLVsWithData:(id)arg1 ;
+(id)_parseTLVs:(const char**)arg1 end:(const char*)arg2 simple:(BOOL)arg3 definite:(BOOL)arg4 ;
+(id)TLVsWithData:(id)arg1 ;
+(id)TLVWithTag:(unsigned)arg1 value:(id)arg2 ;
+(id)_intToData:(unsigned)arg1 ;
+(id)TLVWithTag:(unsigned)arg1 children:(id)arg2 ;
+(id)TLVsWithData:(id)arg1 requireDefiniteEncoding:(BOOL)arg2 ;
+(id)TLVSsWithBytes:(const void*)arg1 length:(unsigned long long)arg2 requireDefiniteEncoding:(BOOL)arg3 ;
+(id)TLVWithTag:(unsigned)arg1 fromData:(id)arg2 ;
+(id)simpleTLVsWithTag:(unsigned)arg1 fromData:(id)arg2 ;
+(id)TLVWithTag:(unsigned)arg1 unsignedChar:(unsigned char)arg2 ;
+(id)TLVWithTag:(unsigned)arg1 unsignedLongValue:(unsigned)arg2 ;
-(void)dealloc;
-(id)description;
-(NSData *)value;
-(unsigned)tag;
-(id)asData;
-(NSArray *)children;
-(id)valueAsString;
-(id)valueAsHexString;
-(unsigned)valueAsUnsignedLong;
-(unsigned short)valueAsUnsignedShort;
-(unsigned long long)valueAsUnsignedLongLong;
-(id)childrenWithTag:(unsigned)arg1 ;
-(id)childWithTag:(unsigned)arg1 ;
@end

