/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	long long _totalWrote;
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

@property (retain) __NSCFLocalDownloadFile * downloadFile;              //@synthesize downloadFile=_downloadFile - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_expandResumeData:(id)arg1 ;
-(void)cancelByProducingResumeData:(/*^block*/id)arg1 ;
-(void)_task_onqueue_didReceiveDispatchData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_onqueue_completeInitialization;
-(void)_task_onqueue_didFinish;
-(void)_onqueue_willCacheResponse:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_onqueue_didReceiveResponse:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(id)createResumeInformation:(id)arg1 ;
-(void)terminateExtractorWithError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(__NSCFLocalDownloadFile *)downloadFile;
-(const CFDictionaryRef)_copySocketStreamProperties;
-(void)_onqueue_cancelByProducingResumeData:(/*^block*/id)arg1 ;
-(void)setDownloadFile:(__NSCFLocalDownloadFile *)arg1 ;
-(void)dealloc;
-(int)openItemForPath:(id)arg1 mode:(int)arg2 ;
@end

