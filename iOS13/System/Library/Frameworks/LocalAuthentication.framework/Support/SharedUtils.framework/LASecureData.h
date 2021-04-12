/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)appendBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(id)init;
-(void)dealloc;
-(unsigned long long)length;
-(BOOL)isEqual:(id)arg1 ;
-(const void*)bytes;
-(void)appendString:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(void)appendData:(id)arg1 ;
-(void)reset;
-(void)resize:(unsigned long long)arg1 ;
-(void)prepareBuffer:(unsigned long long)arg1 ;
-(BOOL)removeLastCharacter;
@end

