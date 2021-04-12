/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
*/


#import <ProtocolBuffer/ProtocolBuffer-Structs.h>
@class NSData;

@interface PBDataReader : NSObject {

	unsigned long long _pos;
	BOOL _error;
	const char* _bytes;
	NSData* _data;
	unsigned long long _length;

}

@property (assign,nonatomic) unsigned long long length;                //@synthesize length=_length - In the implementation block
@property (assign,nonatomic) unsigned long long position;              //@synthesize pos=_pos - In the implementation block
-(void)setLength:(unsigned long long)arg1 ;
-(unsigned long long)position;
-(unsigned)readUint32;
-(void)readTag:(unsigned*)arg1 type:(char*)arg2 ;
-(long long)readSint64;
-(id)readString;
-(unsigned short)readBigEndianFixed16;
-(unsigned long long)readBigEndianFixed64;
-(id)readProtoBuffer;
-(long long)readInt64;
-(long long)readVarInt;
-(BOOL)skipValueWithTag:(unsigned)arg1 type:(unsigned char)arg2 ;
-(unsigned long long)length;
-(id)readBigEndianShortThenString;
-(id)initWithData:(id)arg1 ;
-(unsigned long long)offset;
-(char)readInt8;
-(void)updateData:(id)arg1 ;
-(id)data;
-(BOOL)seekToOffset:(unsigned long long)arg1 ;
-(unsigned long long)readUint64;
-(int)readSfixed32;
-(void)setPosition:(unsigned long long)arg1 ;
-(unsigned)readBigEndianFixed32;
-(double)readDouble;
-(id)readData;
-(unsigned)readFixed32;
-(void)recall:(const SCD_Struct_PB0*)arg1 ;
-(BOOL)readBOOL;
-(float)readFloat;
-(BOOL)hasMoreData;
-(int)readInt32;
-(BOOL)hasError;
-(BOOL)mark:(SCD_Struct_PB0*)arg1 ;
-(BOOL)skipValueWithTag:(unsigned short)arg1 andType:(unsigned char)arg2 ;
-(id)readBytes:(unsigned)arg1 ;
-(unsigned long long)readFixed64;
-(BOOL)isAtEnd;
-(void)dealloc;
-(void)readTag:(unsigned short*)arg1 andType:(char*)arg2 ;
-(int)readSint32;
-(long long)readSfixed64;
@end

