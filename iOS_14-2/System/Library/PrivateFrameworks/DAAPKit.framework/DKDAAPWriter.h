/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DAAPKit.framework/DAAPKit
*/


@class NSError, NSOutputStream, NSMutableArray;

@interface DKDAAPWriter : NSObject {

	unsigned long long _state;
	NSError* _error;
	NSOutputStream* _outputStream;
	NSMutableArray* _containerStack;

}

@property (nonatomic,readonly) NSOutputStream * outputStream;                //@synthesize outputStream=_outputStream - In the implementation block
@property (nonatomic,readonly) NSMutableArray * containerStack;              //@synthesize containerStack=_containerStack - In the implementation block
@property (nonatomic,readonly) unsigned long long state;                     //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSError * error;                              //@synthesize error=_error - In the implementation block
-(id)initWithStream:(id)arg1 ;
-(void)startContainerWithCode:(unsigned)arg1 ;
-(void)endContainerWithCode:(unsigned)arg1 ;
-(void)writeUInt8:(unsigned char)arg1 withCode:(unsigned)arg2 ;
-(void)writeSInt8:(char)arg1 withCode:(unsigned)arg2 ;
-(void)writeUInt16:(unsigned short)arg1 withCode:(unsigned)arg2 ;
-(void)writeSInt16:(short)arg1 withCode:(unsigned)arg2 ;
-(void)writeUInt32:(unsigned)arg1 withCode:(unsigned)arg2 ;
-(void)writeSInt32:(int)arg1 withCode:(unsigned)arg2 ;
-(void)writeUInt64:(unsigned long long)arg1 withCode:(unsigned)arg2 ;
-(void)writeSInt64:(long long)arg1 withCode:(unsigned)arg2 ;
-(void)writeString:(id)arg1 withCode:(unsigned)arg2 ;
-(void)writeData:(id)arg1 withCode:(unsigned)arg2 ;
-(NSMutableArray *)containerStack;
-(void)close;
-(NSError *)error;
-(NSOutputStream *)outputStream;
-(unsigned long long)state;
-(void)_writeDataToOutputStream:(id)arg1 ;
-(void)_performWriteWithBuffer:(/*^block*/id)arg1 ;
-(void)writeCString:(const char*)arg1 withCode:(unsigned)arg2 ;
-(void)writeBytes:(char*)arg1 ofLength:(unsigned)arg2 withCode:(unsigned)arg3 ;
-(void)writeContainerData:(id)arg1 ;
@end

