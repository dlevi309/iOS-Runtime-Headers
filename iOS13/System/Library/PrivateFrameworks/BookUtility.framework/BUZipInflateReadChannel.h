/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BookUtility.framework/BookUtility
*/

#import <BookUtility/BookUtility-Structs.h>
#import <libobjc.A.dylib/BUStreamReadChannel.h>

@protocol BUStreamReadChannel;
@class NSString;

@interface BUZipInflateReadChannel : NSObject <BUStreamReadChannel> {

	z_stream_s* _stream;
	char* _outBuffer;
	BOOL _validateCRC;
	unsigned _CRC;
	id<BUStreamReadChannel> _readChannel;
	unsigned long long _remainingUncompressedSize;
	unsigned long long _outBufferSize;

}

@property (nonatomic,retain) id<BUStreamReadChannel> readChannel;                       //@synthesize readChannel=_readChannel - In the implementation block
@property (assign,nonatomic) unsigned long long remainingUncompressedSize;              //@synthesize remainingUncompressedSize=_remainingUncompressedSize - In the implementation block
@property (assign,nonatomic) unsigned CRC;                                              //@synthesize CRC=_CRC - In the implementation block
@property (assign,nonatomic) BOOL validateCRC;                                          //@synthesize validateCRC=_validateCRC - In the implementation block
@property (assign,nonatomic) unsigned long long outBufferSize;                          //@synthesize outBufferSize=_outBufferSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)test_setMaxBufferSize:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)close;
-(id<BUStreamReadChannel>)readChannel;
-(void)setCRC:(unsigned)arg1 ;
-(unsigned)CRC;
-(void)readWithHandler:(/*^block*/id)arg1 ;
-(id)initWithReadChannel:(id)arg1 uncompressedSize:(unsigned long long)arg2 CRC:(unsigned)arg3 validateCRC:(BOOL)arg4 ;
-(void)handleFailureWithHandler:(/*^block*/id)arg1 error:(id)arg2 ;
-(BOOL)validateCRC;
-(void)setValidateCRC:(BOOL)arg1 ;
-(void)setReadChannel:(id<BUStreamReadChannel>)arg1 ;
-(unsigned long long)remainingUncompressedSize;
-(void)prepareBuffer;
-(BOOL)processData:(id)arg1 inflateResult:(int*)arg2 CRC:(unsigned*)arg3 isDone:(BOOL)arg4 handler:(/*^block*/id)arg5 ;
-(unsigned long long)outBufferSize;
-(void)setOutBufferSize:(unsigned long long)arg1 ;
-(void)setRemainingUncompressedSize:(unsigned long long)arg1 ;
@end

