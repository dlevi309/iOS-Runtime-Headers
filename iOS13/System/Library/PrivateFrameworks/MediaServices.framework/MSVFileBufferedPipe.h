/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSFileHandle, NSPipe, NSObject, NSData, NSMutableSet;

@interface MSVFileBufferedPipe : NSObject {

	NSFileHandle* _writeBufferFileHandle;
	NSFileHandle* _readBufferFileHandle;
	NSPipe* _inputPipe;
	NSPipe* _outputPipe;
	NSObject*<OS_dispatch_source> _writeSource;
	NSObject*<OS_dispatch_source> _readSource;
	BOOL _readyForData;
	BOOL _hasBufferedData;
	BOOL _readSourceClosed;
	NSData* _dataPendingWrite;
	unsigned _dataPendingOffset;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _uniqueWriteErrors;
	long long _writeSourceState;
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
-(void)_writeBufferedData;
-(void)_createBufferFiles;
@end

