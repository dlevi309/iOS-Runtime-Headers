/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@class NSEncodingDetectionPlaceholder;

@interface NSEncodingDetectionBuffer : NSObject {

	unsigned long long _nsEncoding;
	unsigned _cfEncoding;
	NSEncodingDetectionPlaceholder* _placeholder;
	char* _bytes;
	BOOL _bytesAllocated;
	unsigned long long _bytesIndex;
	unsigned long long _bytesLength;

}
-(void)dealloc;
-(BOOL)_growBufferIfNeededToAccomodateByteCount:(unsigned long long)arg1 ;
-(id)initWithNSStringEncoding:(unsigned long long)arg1 CFStringEncoding:(unsigned)arg2 stackBuffer:(char*)arg3 bufferLength:(unsigned long long)arg4 placeholder:(id)arg5 ;
-(void)appendByte:(unsigned char)arg1 ;
-(void)appendByte1:(unsigned char)arg1 byte2:(unsigned char)arg2 ;
-(void)appendByte1:(unsigned char)arg1 byte2:(unsigned char)arg2 byte3:(unsigned char)arg3 ;
-(void)appendUTF16Char:(unsigned short)arg1 ;
-(void)appendUTF32Char:(unsigned)arg1 ;
-(void)appendByte1:(unsigned char)arg1 byte2:(unsigned char)arg2 byte3:(unsigned char)arg3 byte4:(unsigned char)arg4 ;
-(void)appendPlaceholder;
-(void)appendBytes:(const char*)arg1 count:(unsigned long long)arg2 ;
-(id)stringWithLossySubsitutionString:(id)arg1 ;
@end

