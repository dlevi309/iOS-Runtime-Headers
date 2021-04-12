/*
* Generated on Monday, March 1, 2021 at 2:34:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DigitalAccess.framework/DigitalAccess
*/


@class NSData;

@interface KmlTlv : NSObject {

	unsigned short _tag;
	NSData* _value;

}

@property (nonatomic,readonly) unsigned short tag; 
@property (nonatomic,readonly) NSData * value; 
+(id)TLVsWithData:(id)arg1 ;
+(id)TLVWithTag:(unsigned short)arg1 value:(id)arg2 ;
+(id)_intToData:(unsigned)arg1 ;
+(id)_parseTLVs:(const char**)arg1 end:(const char*)arg2 ;
-(id)description;
-(NSData *)value;
-(unsigned short)tag;
-(id)asData;
-(id)valueAsString;
-(unsigned)valueAsUnsignedLong;
-(unsigned short)valueAsUnsignedShort;
-(unsigned long long)valueAsUnsignedLongLong;
@end

