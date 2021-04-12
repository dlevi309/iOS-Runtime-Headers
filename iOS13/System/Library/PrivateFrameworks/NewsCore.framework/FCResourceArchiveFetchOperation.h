/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@protocol FCContentContext;
@class NSURL, NSURLSessionDownloadTask, NSArray;

@interface FCResourceArchiveFetchOperation : FCOperation {

	/*^block*/id _progressHandler;
	/*^block*/id _fetchCompletionHandler;
	NSURL* _archiveURL;
	id<FCContentContext> _context;
	NSURLSessionDownloadTask* _downloadTask;
	NSArray* _resultResources;

}

@property (nonatomic,copy) NSURL * archiveURL;                                     //@synthesize archiveURL=_archiveURL - In the implementation block
@property (nonatomic,retain) id<FCContentContext> context;                         //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSURLSessionDownloadTask * downloadTask;              //@synthesize downloadTask=_downloadTask - In the implementation block
@property (nonatomic,retain) NSArray * resultResources;                            //@synthesize resultResources=_resultResources - In the implementation block
@property (nonatomic,copy) id progressHandler;                                     //@synthesize progressHandler=_progressHandler - In the implementation block
@property (nonatomic,copy) id fetchCompletionHandler;                              //@synthesize fetchCompletionHandler=_fetchCompletionHandler - In the implementation block
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id<FCContentContext>)context;
-(void)setContext:(id<FCContentContext>)arg1 ;
-(id)progressHandler;
-(void)setProgressHandler:(id)arg1 ;
-(void)performOperation;
-(NSURL *)archiveURL;
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(id)fetchCompletionHandler;
-(void)setFetchCompletionHandler:(id)arg1 ;
-(void)setResultResources:(NSArray *)arg1 ;
-(void)_ensureResourcesAreReadyForUse:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_unzipResourcesFromArchiveFileURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDownloadTask:(NSURLSessionDownloadTask *)arg1 ;
-(NSURLSessionDownloadTask *)downloadTask;
-(NSArray *)resultResources;
-(id)initWithArchiveURL:(id)arg1 context:(id)arg2 ;
-(void)setArchiveURL:(NSURL *)arg1 ;
@end

