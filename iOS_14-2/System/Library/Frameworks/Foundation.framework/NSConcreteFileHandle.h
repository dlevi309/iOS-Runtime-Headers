/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSFileHandle.h>

@protocol OS_dispatch_source, OS_dispatch_data, OS_dispatch_queue, OS_dispatch_io;
@class NSObject;

@interface NSConcreteFileHandle : NSFileHandle {

	os_unfair_lock_s _lock;
	Ai _error;
	Ai _resultSocket;
	NSObject*<OS_dispatch_source> _dsrc;
	NSObject*<OS_dispatch_data> _resultData;
	NSObject*<OS_dispatch_queue> _fhQueue;
	NSObject*<OS_dispatch_io> _readChannel;
	/*^block*/id _readabilityHandler;
	/*^block*/id _writeabilityHandler;
	NSObject*<OS_dispatch_source> _readMonitoringSource;
	NSObject*<OS_dispatch_source> _writeMonitoringSource;
	NSObject*<OS_dispatch_queue> _monitoringQueue;
	int _fd;
	AS _flags;

}
-(void)setPort:(id)arg1 ;
-(id)port;
-(void)readInBackgroundAndNotifyForModes:(id)arg1 ;
-(void)acceptConnectionInBackgroundAndNotifyForModes:(id)arg1 ;
-(void)setReadabilityHandler:(/*^block*/id)arg1 ;
-(BOOL)closeAndReturnError:(out id*)arg1 ;
-(id)initWithURL:(id)arg1 flags:(long long)arg2 createMode:(long long)arg3 error:(id*)arg4 ;
-(void)closeFile;
-(id)init;
-(void)truncateFileAtOffset:(unsigned long long)arg1 ;
-(id)availableData;
-(id)readDataOfLength:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithFileDescriptor:(int)arg1 ;
-(id)_monitor:(int)arg1 ;
-(id)readDataToEndOfFile;
-(void)synchronizeFile;
-(void)_closeOnDealloc;
-(unsigned long long)readDataOfLength:(unsigned long long)arg1 buffer:(char*)arg2 ;
-(void)readInBackgroundAndNotify;
-(void)seekToFileOffset:(unsigned long long)arg1 ;
-(id)initWithPath:(id)arg1 flags:(long long)arg2 createMode:(long long)arg3 ;
-(BOOL)seekToOffset:(unsigned long long)arg1 error:(out id*)arg2 ;
-(void)waitForDataInBackgroundAndNotify;
-(void)performActivity:(long long)arg1 modes:(id)arg2 ;
-(BOOL)getOffset:(out unsigned long long*)arg1 error:(out id*)arg2 ;
-(void)writeData:(id)arg1 ;
-(void)waitForDataInBackgroundAndNotifyForModes:(id)arg1 ;
-(void)readToEndOfFileInBackgroundAndNotifyForModes:(id)arg1 ;
-(id)readDataUpToLength:(unsigned long long)arg1 error:(out id*)arg2 ;
-(int)fileDescriptor;
-(BOOL)synchronizeAndReturnError:(out id*)arg1 ;
-(BOOL)truncateAtOffset:(unsigned long long)arg1 error:(out id*)arg2 ;
-(BOOL)writeData:(id)arg1 error:(out id*)arg2 ;
-(BOOL)seekToEndReturningOffset:(out unsigned long long*)arg1 error:(out id*)arg2 ;
-(id)readDataToEndOfFileAndReturnError:(out id*)arg1 ;
-(void)_locked_clearHandler:(/*^block*/id*)arg1 forSource:(id*)arg2 ;
-(unsigned long long)offsetInFile;
-(void)_cancelDispatchSources;
-(/*^block*/id)readabilityHandler;
-(void)acceptConnectionInBackgroundAndNotify;
-(id)initWithFileDescriptor:(int)arg1 closeOnDealloc:(BOOL)arg2 ;
-(unsigned long long)seekToEndOfFile;
-(id)copyWithZone:(NSZone*)arg1 ;
-(/*^block*/id)writeabilityHandler;
-(void)dealloc;
-(void)readToEndOfFileInBackgroundAndNotify;
-(id)initWithPath:(id)arg1 flags:(long long)arg2 createMode:(long long)arg3 error:(id*)arg4 ;
-(void)setWriteabilityHandler:(/*^block*/id)arg1 ;
@end

