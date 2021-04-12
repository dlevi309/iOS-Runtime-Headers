/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
*/

#import <CoreNFC/CoreNFC-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NFCISO7816APDU : NSObject <NSCopying> {

	NSRange _payloadOffset;
	long long _le;
	NSData* _fullPacket;

}

@property (nonatomic,readonly) unsigned char instructionClass; 
@property (nonatomic,readonly) unsigned char instructionCode; 
@property (nonatomic,readonly) unsigned char p1Parameter; 
@property (nonatomic,readonly) unsigned char p2Parameter; 
@property (nonatomic,copy,readonly) NSData * data; 
@property (nonatomic,readonly) long long expectedResponseLength; 
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSData *)data;
-(id)asData;
-(id)initWithInstructionClass:(unsigned char)arg1 instructionCode:(unsigned char)arg2 p1Parameter:(unsigned char)arg3 p2Parameter:(unsigned char)arg4 data:(id)arg5 expectedResponseLength:(long long)arg6 ;
-(unsigned char)instructionClass;
-(unsigned char)instructionCode;
-(unsigned char)p1Parameter;
-(unsigned char)p2Parameter;
-(long long)expectedResponseLength;
@end

