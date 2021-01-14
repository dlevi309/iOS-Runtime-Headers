/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class ATFileBuffer, NSObject, NSPipe, NSFileHandle;

@interface ATFileBufferedPipe : NSObject {

	ATFileBuffer* _buffer;
	NSObject*<OS_dispatch_queue> _queue;
	NSPipe* _inputPipe;
	NSPipe* _outputPipe;
	NSObject*<OS_dispatch_source> _writeSource;
	NSObject*<OS_dispatch_source> _readSource;
	BOOL _readyForData;
	BOOL _readyToClose;
	NSFileHandle* _fileHandleForReading;
	NSFileHandle* _fileHandleForWriting;

}

@property (retain,readonly) NSFileHandle * fileHandleForReading;              //@synthesize fileHandleForReading=_fileHandleForReading - In the implementation block
@property (retain,readonly) NSFileHandle * fileHandleForWriting;              //@synthesize fileHandleForWriting=_fileHandleForWriting - In the implementation block
+(id)pipe;
-(void)_outputReadyForWriting:(unsigned long long)arg1 ;
-(void)_inputReadyForReading:(unsigned long long)arg1 ;
-(id)init;
-(NSFileHandle *)fileHandleForWriting;
-(NSFileHandle *)fileHandleForReading;
-(id)_bufferedWrite:(id)arg1 ;
@end

