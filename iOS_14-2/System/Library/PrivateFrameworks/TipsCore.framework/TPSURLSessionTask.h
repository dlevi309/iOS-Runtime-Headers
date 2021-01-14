/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/


@protocol OS_dispatch_queue, TPSURLSessionDelegate;
#import <TipsCore/TipsCore-Structs.h>
@class NSObject, NSString, NSURLSessionTask, NSHTTPURLResponse, NSMutableData, NSError, NSHashTable, NSURL;

@interface TPSURLSessionTask : NSObject {

	NSObject*<OS_dispatch_queue> _sessionTaskDelegateQueue;
	BOOL _cancelled;
	BOOL _isCacheData;
	TPSURLSessionDelegateResponds _delegateResponds;
	id<TPSURLSessionDelegate> _networkDelegate;
	unsigned long long _downloadTaskTotalBytes;
	unsigned long long _retryCount;
	long long _dataType;
	NSString* _identifier;
	id _formattedData;
	NSURLSessionTask* _task;
	NSHTTPURLResponse* _response;
	NSString* _lastModified;
	NSMutableData* _dataTaskData;
	NSError* _dataError;
	NSHashTable* _sessionTaskDelegates;

}

@property (nonatomic,retain) NSHashTable * sessionTaskDelegates;                            //@synthesize sessionTaskDelegates=_sessionTaskDelegates - In the implementation block
@property (assign,nonatomic,__weak) id<TPSURLSessionDelegate> networkDelegate;              //@synthesize networkDelegate=_networkDelegate - In the implementation block
@property (assign,nonatomic) TPSURLSessionDelegateResponds delegateResponds;                //@synthesize delegateResponds=_delegateResponds - In the implementation block
@property (assign,nonatomic) float priority; 
@property (assign,getter=isCancelled,nonatomic) BOOL cancelled;                             //@synthesize cancelled=_cancelled - In the implementation block
@property (assign,nonatomic) BOOL isCacheData;                                              //@synthesize isCacheData=_isCacheData - In the implementation block
@property (assign,nonatomic) unsigned long long downloadTaskTotalBytes;                     //@synthesize downloadTaskTotalBytes=_downloadTaskTotalBytes - In the implementation block
@property (assign,nonatomic) unsigned long long retryCount;                                 //@synthesize retryCount=_retryCount - In the implementation block
@property (assign,nonatomic) long long dataType;                                            //@synthesize dataType=_dataType - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) id formattedData;                                              //@synthesize formattedData=_formattedData - In the implementation block
@property (nonatomic,retain) NSURLSessionTask * task;                                       //@synthesize task=_task - In the implementation block
@property (nonatomic,retain) NSHTTPURLResponse * response;                                  //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) NSString * lastModified;                                       //@synthesize lastModified=_lastModified - In the implementation block
@property (nonatomic,retain) NSMutableData * dataTaskData;                                  //@synthesize dataTaskData=_dataTaskData - In the implementation block
@property (nonatomic,retain) NSError * dataError;                                           //@synthesize dataError=_dataError - In the implementation block
@property (nonatomic,readonly) NSURL * URL; 
+(TPSURLSessionDelegateResponds)delegateRespondsWithDelegate:(id)arg1 ;
-(long long)dataType;
-(void)setLastModified:(NSString *)arg1 ;
-(void)setCancelled:(BOOL)arg1 ;
-(void)setRetryCount:(unsigned long long)arg1 ;
-(NSURLSessionTask *)task;
-(unsigned long long)retryCount;
-(void)setDataType:(long long)arg1 ;
-(BOOL)isCacheData;
-(id)formattedData;
-(NSMutableData *)dataTaskData;
-(NSError *)dataError;
-(unsigned long long)downloadTaskTotalBytes;
-(void)setDataError:(NSError *)arg1 ;
-(void)setFormattedData:(id)arg1 ;
-(void)setIsCacheData:(BOOL)arg1 ;
-(void)setDataTaskData:(NSMutableData *)arg1 ;
-(NSString *)lastModified;
-(void)setTask:(NSURLSessionTask *)arg1 ;
-(void)didCompleteWithError:(id)arg1 ;
-(id)initWithSessionTask:(id)arg1 identifier:(id)arg2 ;
-(void)setNetworkDelegate:(id<TPSURLSessionDelegate>)arg1 ;
-(void)setDelegateResponds:(TPSURLSessionDelegateResponds)arg1 ;
-(TPSURLSessionDelegateResponds)delegateResponds;
-(id<TPSURLSessionDelegate>)networkDelegate;
-(NSHTTPURLResponse *)response;
-(void)setDownloadTaskTotalBytes:(unsigned long long)arg1 ;
-(void)setResponse:(NSHTTPURLResponse *)arg1 ;
-(void)setSessionTaskDelegates:(NSHashTable *)arg1 ;
-(NSHashTable *)sessionTaskDelegates;
-(NSURL *)URL;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)cancel;
-(void)resume;
-(float)priority;
-(void)setPriority:(float)arg1 ;
-(BOOL)isCancelled;
-(void)unregisterDelegate:(id)arg1 ;
-(void)dealloc;
-(void)registerDelegate:(id)arg1 ;
@end

