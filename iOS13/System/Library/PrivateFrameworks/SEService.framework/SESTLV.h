/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SEService.framework/SEService
*/


@class NSData, NSArray;

@interface SESTLV : NSObject {

	unsigned _tag;
	NSData* _value;
	NSArray* _children;

}

@property (nonatomic,readonly) unsigned tag; 
@property (nonatomic,readonly) NSData * value; 
@property (nonatomic,readonly) NSArray * children; 
+(id)TLVWithData:(id)arg1 ;
+(id)simpleTLVsWithData:(id)arg1 ;
+(id)TLVsWithData:(id)arg1 ;
+(id)TLVWithTag:(unsigned)arg1 value:(id)arg2 ;
+(id)_intToData:(unsigned)arg1 ;
+(id)TLVWithTag:(unsigned)arg1 children:(id)arg2 ;
+(id)TLVWithTag:(unsigned)arg1 fromData:(id)arg2 ;
+(id)simpleTLVsWithTag:(unsigned)arg1 fromData:(id)arg2 ;
+(id)TLVWithTag:(unsigned)arg1 unsignedChar:(unsigned char)arg2 ;
+(id)TLVWithTag:(unsigned)arg1 unsignedLongValue:(unsigned)arg2 ;
+(id)_parseTLVs:(const char**)arg1 end:(const char*)arg2 simple:(BOOL)arg3 ;
+(id)TLVWithTag:(unsigned)arg1 unsignedShort:(unsigned short)arg2 ;
-(id)description;
-(NSData *)value;
-(unsigned)tag;
-(id)asData;
-(NSArray *)children;
-(id)valueAsString;
-(unsigned)valueAsUnsignedLong;
-(unsigned short)valueAsUnsignedShort;
-(unsigned long long)valueAsUnsignedLongLong;
-(id)childrenWithTag:(unsigned)arg1 ;
-(id)childWithTag:(unsigned)arg1 ;
@end

