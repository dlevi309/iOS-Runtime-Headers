/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


@protocol OS_dispatch_io, OS_dispatch_queue, __NSCFLocalDownloadFileOpener;
#import <CFNetwork/CFNetwork-Structs.h>
@class NSObject, NSString;

@interface __NSCFLocalDownloadFile : NSObject {

	stat _stat;
	NSObject*<OS_dispatch_io> _writeIO;
	NSObject*<OS_dispatch_queue> _workQueue;
	BOOL _finished;
	NSString* _path;
	BOOL _skipUnlink;
	BOOL _truncateFile;
	int _error;
	id<__NSCFLocalDownloadFileOpener> _fileProvider;
	/*^block*/id _finishCompletion;

}

@property (retain) NSString * path;                                             //@synthesize path=_path - In the implementation block
@property (assign) BOOL skipUnlink;                                             //@synthesize skipUnlink=_skipUnlink - In the implementation block
@property (assign) BOOL truncateFile;                                           //@synthesize truncateFile=_truncateFile - In the implementation block
@property (assign) int error;                                                   //@synthesize error=_error - In the implementation block
@property (assign) id<__NSCFLocalDownloadFileOpener> fileProvider;              //@synthesize fileProvider=_fileProvider - In the implementation block
@property (copy) id finishCompletion;                                           //@synthesize finishCompletion=_finishCompletion - In the implementation block
-(void)dealloc;
-(int)error;
-(NSString *)path;
-(void)setError:(int)arg1 ;
-(void)setPath:(NSString *)arg1 ;
-(id)fileURL;
-(void)truncate;
-(void)finishOnQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setFinished;
-(void)captureFile:(id*)arg1 outStat:(stat*)arg2 ;
-(void)setSkipUnlink:(BOOL)arg1 ;
-(void)writeBytes:(id)arg1 completionQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithFullPath:(id)arg1 ;
-(id)initWithExistingFile:(id)arg1 expectedSize:(long long)arg2 ;
-(id)initWithExistingUnopenableFile:(id)arg1 fileProvider:(id)arg2 ;
-(id)initTempFileWithDirectory:(id)arg1 ;
-(id)initQueues;
-(id)ioChannel;
-(BOOL)skipUnlink;
-(id<__NSCFLocalDownloadFileOpener>)fileProvider;
-(void)setFileProvider:(id<__NSCFLocalDownloadFileOpener>)arg1 ;
-(id)finishCompletion;
-(void)setFinishCompletion:(id)arg1 ;
-(BOOL)truncateFile;
-(void)setTruncateFile:(BOOL)arg1 ;
@end

