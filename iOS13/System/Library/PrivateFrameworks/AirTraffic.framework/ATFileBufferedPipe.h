/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSFileHandle *)fileHandleForReading;
-(NSFileHandle *)fileHandleForWriting;
-(void)_outputReadyForWriting:(unsigned long long)arg1 ;
-(void)_inputReadyForReading:(unsigned long long)arg1 ;
-(id)_bufferedWrite:(id)arg1 ;
@end

