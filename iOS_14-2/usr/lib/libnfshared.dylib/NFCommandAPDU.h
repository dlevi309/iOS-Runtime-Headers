/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnfshared.dylib
*/


#import <libnfshared.dylib/libnfshared.dylib-Structs.h>
@class NSData;

@interface NFCommandAPDU : NSObject {

	unsigned char _class;
	unsigned char _instruction;
	unsigned char _p1;
	unsigned char _p2;
	NSRange _payloadRange;
	unsigned _lengthExpected;
	NSData* _data;

}

@property (nonatomic,readonly) unsigned char clss; 
@property (nonatomic,readonly) unsigned char instruction; 
@property (nonatomic,readonly) unsigned char p1; 
@property (nonatomic,readonly) unsigned char p2; 
@property (nonatomic,readonly) unsigned lengthExpected; 
@property (nonatomic,readonly) unsigned payloadLength; 
@property (nonatomic,readonly) const char* payloadBytes; 
@property (nonatomic,readonly) NSData * payload; 
-(unsigned char)clss;
-(id)initWithBytes:(const char*)arg1 length:(unsigned long long)arg2 ;
-(unsigned char)p1;
-(unsigned char)p2;
-(id)initWithData:(id)arg1 ;
-(NSData *)payload;
-(unsigned char)instruction;
-(unsigned)payloadLength;
-(id)initWithData:(id)arg1 uniformLengthCheck:(BOOL)arg2 ;
-(unsigned)lengthExpected;
-(const char*)payloadBytes;
-(BOOL)isSelectCommand;
-(BOOL)isSendCertificateCommand;
-(BOOL)isGetVasDataCommand;
-(BOOL)isGetMoreVasDataCommand;
@end

