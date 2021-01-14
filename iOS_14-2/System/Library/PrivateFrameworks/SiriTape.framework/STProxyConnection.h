/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriTape.framework/SiriTape
*/


@protocol OS_dispatch_queue, OS_dispatch_data, STAceObjectHandler;
#import <SiriTape/SiriTape-Structs.h>
@class NSObject, GCDAsyncSocket, SiriCoreDataDecompressor;

@interface STProxyConnection : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_data> _bufferedInputData;
	id<STAceObjectHandler> _handler;
	GCDAsyncSocket* _socket;
	BOOL _isOpened;
	BOOL _isCanceled;
	BOOL _isFinished;
	SiriCoreDataDecompressor* _inputDecompressor;
	CFHTTPMessageRef _httpRequestHeader;

}
-(void)parseData:(id)arg1 ;
-(void)_cancelWithError:(id)arg1 ;
-(id)_httpHeaderData;
-(id)_aceHeaderData;
-(BOOL)_hasReadHTTPHeader;
-(id)_tryReadingAceHeaderFromData:(id)arg1 bytesParsed:(unsigned long long*)arg2 error:(id*)arg3 ;
-(BOOL)_tryReadingParsedDataFromBytes:(const void*)arg1 length:(unsigned long long)arg2 packet:(SCD_Struct_ST2*)arg3 object:(id*)arg4 bytesParsed:(unsigned long long*)arg5 error:(id*)arg6 ;
-(BOOL)_consumeHTTPHeaderWithData:(id)arg1 bytesRead:(unsigned long long*)arg2 error:(id*)arg3 ;
-(BOOL)_consumeAceHeaderWithData:(id)arg1 bytesRead:(unsigned long long*)arg2 error:(id*)arg3 ;
-(BOOL)_consumeAceDataWithData:(id)arg1 bytesRead:(unsigned long long*)arg2 error:(id*)arg3 ;
-(void)_connectionHasBytesAvailable:(id)arg1 ;
-(id)initWithSocket:(id)arg1 handler:(id)arg2 replayFileURL:(id)arg3 ;
-(BOOL)_hasReadAceHeader;
-(void)handleAceObject:(id)arg1 ;
-(void)handlePacket:(SCD_Struct_ST2*)arg1 ;
@end

