/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/__NSCFLocalSessionTask.h>
#import <libobjc.A.dylib/NSURLSessionDownloadTaskSubclass.h>
#import <libobjc.A.dylib/__NSCFLocalDownloadFileOpener.h>

@protocol OS_dispatch_data;
@class __NSCFLocalDownloadFile, NSObject, NSDictionary, NSString;

@interface __NSCFLocalDownloadTask : __NSCFLocalSessionTask <NSURLSessionDownloadTaskSubclass, __NSCFLocalDownloadFileOpener> {

	/*^block*/id _fileCompletion;
	__NSCFLocalDownloadFile* _downloadFile;
	NSObject*<OS_dispatch_data> _writeBuffer;
	unsigned long long _ioSuspend;
	unsigned long long _totalWrote;
	/*^block*/id _resumeCallback;
	long long _initialResumeSize;
	NSDictionary* _originalResumeInfo;
	unsigned long long _transientWriteProgress;
	/*^block*/id _afterDidReportProgressOnQueue;
	/*^block*/id _dataAckCompletion;
	int _seqNo;
	BOOL _canWrite;
	BOOL _suppressProgress;
	BOOL _needFinish;
	BOOL _didIssueNeedFinish;

}

@property (copy) id fileCompletion;                                     //@synthesize fileCompletion=_fileCompletion - In the implementation block
@property (copy) id dataAckCompletion;                                  //@synthesize dataAckCompletion=_dataAckCompletion - In the implementation block
@property (retain) __NSCFLocalDownloadFile * downloadFile;              //@synthesize downloadFile=_downloadFile - In the implementation block
@property (copy) id resumeCallback;                                     //@synthesize resumeCallback=_resumeCallback - In the implementation block
@property (copy) id _afterDidReportProgressOnQueue;                     //@synthesize afterDidReportProgressOnQueue=_afterDidReportProgressOnQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_requestFromResumeDataDictionary:(id)arg1 ;
+(id)_expandResumeData:(id)arg1 ;
+(id)_requestFromResumeDataDictionary:(id)arg1 key:(id)arg2 ;
-(void)dealloc;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(void)_onqueue_completeInitialization;
-(void)setFileCompletion:(id)arg1 ;
-(id)initWithTaskGroup:(id)arg1 resumeData:(id)arg2 ident:(unsigned long long)arg3 ;
-(id)initWithTaskGroup:(id)arg1 request:(id)arg2 filePath:(id)arg3 ident:(unsigned long long)arg4 ;
-(void)_onqueue_didReceiveResponse:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_onqueue_willCacheResponse:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_task_onqueue_didFinish;
-(void)_task_onqueue_didReceiveDispatchData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithLocalSessionTask:(id)arg1 connection:(id)arg2 ;
-(id)_afterDidReportProgressOnQueue;
-(int)openItemForPath:(id)arg1 mode:(int)arg2 ;
-(void)_onqueue_cancelByProducingResumeData:(/*^block*/id)arg1 ;
-(id)explicitDownloadDirectory;
-(BOOL)setupForNewDownload:(id)arg1 ;
-(id)initWithTaskGroup:(id)arg1 request:(id)arg2 ident:(unsigned long long)arg3 ;
-(const CFDictionaryRef)_copySocketStreamProperties;
-(void)cancelByProducingResumeData:(/*^block*/id)arg1 ;
-(void)reportProgress:(unsigned long long)arg1 ;
-(void)_private_posixError:(int)arg1 ;
-(void)writeAndResume;
-(void)terminateExtractorWithError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)suspendExtractor;
-(id)createResumeInformation:(id)arg1 ;
-(void)_private_errorCompletion;
-(void)_private_fileCompletion;
-(void)checkWrite;
-(void)_supplyExtractorWithData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)fileCompletion;
-(__NSCFLocalDownloadFile *)downloadFile;
-(void)setDownloadFile:(__NSCFLocalDownloadFile *)arg1 ;
-(id)resumeCallback;
-(void)setResumeCallback:(id)arg1 ;
-(void)set_afterDidReportProgressOnQueue:(id)arg1 ;
-(id)dataAckCompletion;
-(void)setDataAckCompletion:(id)arg1 ;
@end

