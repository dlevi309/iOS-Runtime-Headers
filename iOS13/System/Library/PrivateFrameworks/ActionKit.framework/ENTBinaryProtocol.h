/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <libobjc.A.dylib/ENTProtocol.h>

@protocol ENTTransport;
@class NSString;

@interface ENTBinaryProtocol : NSObject <ENTProtocol> {

	BOOL _strictRead;
	BOOL _strictWrite;
	int _messageSizeLimit;
	id<ENTTransport> _transport;

}

@property (nonatomic,retain) id<ENTTransport> transport;              //@synthesize transport=_transport - In the implementation block
@property (assign,nonatomic) BOOL strictRead;                         //@synthesize strictRead=_strictRead - In the implementation block
@property (assign,nonatomic) BOOL strictWrite;                        //@synthesize strictWrite=_strictWrite - In the implementation block
@property (assign,nonatomic) int messageSizeLimit;                    //@synthesize messageSizeLimit=_messageSizeLimit - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<ENTTransport>)transport;
-(void)setTransport:(id<ENTTransport>)arg1 ;
-(double)readDouble;
-(id)readString;
-(id)initWithTransport:(id)arg1 ;
-(unsigned char)readByte;
-(void)writeString:(id)arg1 ;
-(BOOL)readBool;
-(void)readMessageBeginReturningName:(id*)arg1 type:(int*)arg2 sequenceID:(int*)arg3 ;
-(void)readMessageEnd;
-(void)readStructBeginReturningName:(id*)arg1 ;
-(void)readStructEnd;
-(void)readFieldBeginReturningName:(id*)arg1 type:(int*)arg2 fieldID:(int*)arg3 ;
-(void)readFieldEnd;
-(short)readI16;
-(int)readI32;
-(long long)readI64;
-(id)readBinary;
-(void)readMapBeginReturningKeyType:(int*)arg1 valueType:(int*)arg2 size:(int*)arg3 ;
-(void)readMapEnd;
-(void)readSetBeginReturningElementType:(int*)arg1 size:(int*)arg2 ;
-(void)readSetEnd;
-(void)readListBeginReturningElementType:(int*)arg1 size:(int*)arg2 ;
-(void)readListEnd;
-(void)writeMessageBeginWithName:(id)arg1 type:(int)arg2 sequenceID:(int)arg3 ;
-(void)writeMessageEnd;
-(void)writeStructBeginWithName:(id)arg1 ;
-(void)writeStructEnd;
-(void)writeFieldBeginWithName:(id)arg1 type:(int)arg2 fieldID:(int)arg3 ;
-(void)writeI32:(int)arg1 ;
-(void)writeI64:(long long)arg1 ;
-(void)writeI16:(short)arg1 ;
-(void)writeByte:(unsigned char)arg1 ;
-(void)writeDouble:(double)arg1 ;
-(void)writeBool:(BOOL)arg1 ;
-(void)writeBinary:(id)arg1 ;
-(void)writeFieldStop;
-(void)writeFieldEnd;
-(void)writeMapBeginWithKeyType:(int)arg1 valueType:(int)arg2 size:(int)arg3 ;
-(void)writeMapEnd;
-(void)writeSetBeginWithElementType:(int)arg1 size:(int)arg2 ;
-(void)writeSetEnd;
-(void)writeListBeginWithElementType:(int)arg1 size:(int)arg2 ;
-(void)writeListEnd;
-(id)initWithTransport:(id)arg1 strictRead:(BOOL)arg2 strictWrite:(BOOL)arg3 ;
-(id)readStringBody:(int)arg1 ;
-(BOOL)strictRead;
-(void)setStrictRead:(BOOL)arg1 ;
-(BOOL)strictWrite;
-(void)setStrictWrite:(BOOL)arg1 ;
-(int)messageSizeLimit;
-(void)setMessageSizeLimit:(int)arg1 ;
@end

