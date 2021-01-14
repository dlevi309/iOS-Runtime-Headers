/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NEByteParser : NSObject <NSCopying> {

	unsigned long long _offset;
	NSData* _data;
	const char* _bytes;
	const char* _cursor;

}

@property (readonly) NSData * data;                        //@synthesize data=_data - In the implementation block
@property (readonly) const char* bytes;                    //@synthesize bytes=_bytes - In the implementation block
@property (assign) const char* cursor;                     //@synthesize cursor=_cursor - In the implementation block
@property (assign) unsigned long long offset;              //@synthesize offset=_offset - In the implementation block
-(BOOL)copyBytes:(unsigned long long)arg1 to:(void*)arg2 ;
-(unsigned char)parse8Bits:(BOOL*)arg1 ;
-(BOOL)advanceBy:(unsigned long long)arg1 andCopyTo:(void*)arg2 ;
-(const char*)bytes;
-(id)initWithData:(id)arg1 ;
-(unsigned long long)offset;
-(id)parseDomainName;
-(NSData *)data;
-(unsigned short)parse16Bits:(BOOL*)arg1 ;
-(unsigned)parse32Bits:(BOOL*)arg1 ;
-(id)parseAddressWithFamily:(unsigned char)arg1 ;
-(const char*)parseBytes:(unsigned long long)arg1 ;
-(const char*)cursor;
-(void)setOffset:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCursor:(const char*)arg1 ;
@end

