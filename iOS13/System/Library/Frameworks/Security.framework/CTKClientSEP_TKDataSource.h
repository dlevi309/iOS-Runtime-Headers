/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Security.framework/Security
*/


@class NSData;

@interface CTKClientSEP_TKDataSource : NSObject {

	NSData* _data;
	const char* _ptr;

}

@property (readonly) const char* ptr;              //@synthesize ptr=_ptr - In the implementation block
@property (readonly) const char* end; 
@property (readonly) NSData * data; 
-(id)initWithData:(id)arg1 ;
-(NSData *)data;
-(const char*)end;
-(BOOL)bytesSafeToRead:(long long)arg1 ;
-(unsigned char)fetchByte;
-(id)fetchDataWithLength:(long long)arg1 ;
-(const char*)ptr;
@end

