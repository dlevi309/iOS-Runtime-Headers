/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriTape.framework/SiriTape
*/


@interface GCDAsyncSocketPreBuffer : NSObject {

	char* preBuffer;
	unsigned long long preBufferSize;
	char* readPointer;
	char* writePointer;

}
-(unsigned long long)availableBytes;
-(char*)readBuffer;
-(void)reset;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)dealloc;
-(unsigned long long)availableSpace;
-(void)ensureCapacityForWrite:(unsigned long long)arg1 ;
-(void)getReadBuffer:(char**)arg1 availableBytes:(unsigned long long*)arg2 ;
-(void)didRead:(unsigned long long)arg1 ;
-(char*)writeBuffer;
-(void)getWriteBuffer:(char**)arg1 availableSpace:(unsigned long long*)arg2 ;
-(void)didWrite:(unsigned long long)arg1 ;
@end

