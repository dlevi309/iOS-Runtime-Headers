/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/SharedUtils.framework/SharedUtils
*/


@interface LASecureData : NSObject {

	unsigned long long _allocatedLength;
	void* _bytes;
	unsigned long long _bytesLength;

}
+(void)resetBytes:(void*)arg1 length:(unsigned long long)arg2 ;
+(id)secureDataWithString:(id)arg1 ;
+(id)secureDataWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
+(id)secureDataWithData:(id)arg1 ;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(id)initWithString:(id)arg1 ;
-(void)appendString:(id)arg1 ;
-(id)init;
-(const void*)bytes;
-(unsigned long long)length;
-(id)initWithData:(id)arg1 ;
-(id)data;
-(void)resize:(unsigned long long)arg1 ;
-(void)reset;
-(void)appendData:(id)arg1 ;
-(void)appendBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)prepareBuffer:(unsigned long long)arg1 ;
-(BOOL)removeLastCharacter;
@end

