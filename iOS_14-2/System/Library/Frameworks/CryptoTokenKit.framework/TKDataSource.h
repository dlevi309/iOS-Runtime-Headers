/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
*/


@class NSData;

@interface TKDataSource : NSObject {

	NSData* _data;
	const char* _ptr;

}

@property (readonly) const char* ptr;              //@synthesize ptr=_ptr - In the implementation block
@property (readonly) const char* end; 
@property (readonly) NSData * data; 
-(const char*)end;
-(const char*)ptr;
-(id)initWithData:(id)arg1 ;
-(unsigned char)fetchByte;
-(BOOL)bytesSafeToRead:(long long)arg1 ;
-(NSData *)data;
-(id)fetchDataWithLength:(long long)arg1 ;
@end

