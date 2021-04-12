/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <Foundation/NSOperation.h>

@class NSURL, NSArray, NSError, NSFileCoordinator, NSProgress, NSMetadataQuery;

@interface WFiCloudFileDownloadOperation : NSOperation {

	BOOL _executing;
	BOOL _finished;
	NSURL* _fileURL;
	NSArray* _downloadedFiles;
	NSError* _downloadError;
	NSFileCoordinator* _fileCoordinator;
	NSProgress* _progress;
	NSMetadataQuery* _query;

}

@property (nonatomic,readonly) NSFileCoordinator * fileCoordinator;              //@synthesize fileCoordinator=_fileCoordinator - In the implementation block
@property (nonatomic,readonly) NSProgress * progress;                            //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) NSMetadataQuery * query;                          //@synthesize query=_query - In the implementation block
@property (assign,getter=isExecuting,nonatomic) BOOL executing;                  //@synthesize executing=_executing - In the implementation block
@property (assign,getter=isFinished,nonatomic) BOOL finished;                    //@synthesize finished=_finished - In the implementation block
@property (nonatomic,readonly) NSURL * fileURL;                                  //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,readonly) NSArray * downloadedFiles;                        //@synthesize downloadedFiles=_downloadedFiles - In the implementation block
@property (nonatomic,readonly) NSError * downloadError;                          //@synthesize downloadError=_downloadError - In the implementation block
-(NSMetadataQuery *)query;
-(void)start;
-(void)setFinished:(BOOL)arg1 ;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isAsynchronous;
-(NSProgress *)progress;
-(NSURL *)fileURL;
-(void)setExecuting:(BOOL)arg1 ;
-(NSError *)downloadError;
-(void)queryDidFinishGathering:(id)arg1 ;
-(NSFileCoordinator *)fileCoordinator;
-(id)initWithFileURL:(id)arg1 progress:(id)arg2 ;
-(void)getFileInfoForURL:(id)arg1 fileIsUbiquitous:(BOOL*)arg2 fileIsDirectory:(BOOL*)arg3 fileSize:(id*)arg4 error:(id*)arg5 ;
-(void)downloadItemAtFileURL:(id)arg1 ofSize:(id)arg2 fileIsUbiquitous:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)queryDidUpdate:(id)arg1 ;
-(void)finishRunningWithFiles:(id)arg1 error:(id)arg2 ;
-(NSArray *)downloadedFiles;
@end

