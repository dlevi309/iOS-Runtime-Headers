/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCNetworkOperation.h>

@class NSURL, NSString, NSDictionary, FCNetworkBehaviorMonitor, NSData, NSHTTPURLResponse, NSError;

@interface FCAssetDownloadOperation : FCNetworkOperation {

	NSURL* _URL;
	NSString* _loggingKey;
	long long _downloadDestination;
	long long _networkEventType;
	NSDictionary* _additionalRequestHTTPHeaders;
	FCNetworkBehaviorMonitor* _networkBehaviorMonitor;
	/*^block*/id _fileDownloadCompletionHandler;
	/*^block*/id _dataDownloadCompletionHandler;
	NSURL* _downloadedFileURL;
	NSData* _downloadedData;
	NSString* _requestUUID;
	double _taskStartTime;
	NSDictionary* _timingData;
	NSString* _responseMIMEType;
	NSHTTPURLResponse* _httpResponse;
	unsigned long long _responseSize;
	NSError* _error;

}

@property (nonatomic,retain) NSURL * downloadedFileURL;                                      //@synthesize downloadedFileURL=_downloadedFileURL - In the implementation block
@property (nonatomic,retain) NSData * downloadedData;                                        //@synthesize downloadedData=_downloadedData - In the implementation block
@property (nonatomic,retain) NSString * requestUUID;                                         //@synthesize requestUUID=_requestUUID - In the implementation block
@property (assign,nonatomic) double taskStartTime;                                           //@synthesize taskStartTime=_taskStartTime - In the implementation block
@property (nonatomic,retain) NSDictionary * timingData;                                      //@synthesize timingData=_timingData - In the implementation block
@property (nonatomic,retain) NSString * responseMIMEType;                                    //@synthesize responseMIMEType=_responseMIMEType - In the implementation block
@property (nonatomic,retain) NSHTTPURLResponse * httpResponse;                               //@synthesize httpResponse=_httpResponse - In the implementation block
@property (assign,nonatomic) unsigned long long responseSize;                                //@synthesize responseSize=_responseSize - In the implementation block
@property (nonatomic,retain) NSError * error;                                                //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSURL * URL;                                                    //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSString * loggingKey;                                            //@synthesize loggingKey=_loggingKey - In the implementation block
@property (assign,nonatomic) long long downloadDestination;                                  //@synthesize downloadDestination=_downloadDestination - In the implementation block
@property (assign,nonatomic) long long networkEventType;                                     //@synthesize networkEventType=_networkEventType - In the implementation block
@property (nonatomic,copy) NSDictionary * additionalRequestHTTPHeaders;                      //@synthesize additionalRequestHTTPHeaders=_additionalRequestHTTPHeaders - In the implementation block
@property (nonatomic,retain) FCNetworkBehaviorMonitor * networkBehaviorMonitor;              //@synthesize networkBehaviorMonitor=_networkBehaviorMonitor - In the implementation block
@property (nonatomic,copy) id fileDownloadCompletionHandler;                                 //@synthesize fileDownloadCompletionHandler=_fileDownloadCompletionHandler - In the implementation block
@property (nonatomic,copy) id dataDownloadCompletionHandler;                                 //@synthesize dataDownloadCompletionHandler=_dataDownloadCompletionHandler - In the implementation block
+(id)sharedURLSession;
+(id)sharedURLRequestScheduler;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(void)setHttpResponse:(NSHTTPURLResponse *)arg1 ;
-(NSHTTPURLResponse *)httpResponse;
-(NSDictionary *)timingData;
-(NSString *)requestUUID;
-(NSDictionary *)additionalRequestHTTPHeaders;
-(void)setAdditionalRequestHTTPHeaders:(NSDictionary *)arg1 ;
-(void)setRequestUUID:(NSString *)arg1 ;
-(NSURL *)downloadedFileURL;
-(unsigned long long)responseSize;
-(void)setResponseSize:(unsigned long long)arg1 ;
-(void)performOperation;
-(void)setTimingData:(NSDictionary *)arg1 ;
-(void)setLoggingKey:(NSString *)arg1 ;
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(id)throttleGroup;
-(void)resetForRetry;
-(NSString *)loggingKey;
-(void)setResponseMIMEType:(NSString *)arg1 ;
-(void)setTaskStartTime:(double)arg1 ;
-(double)taskStartTime;
-(NSString *)responseMIMEType;
-(void)setNetworkEventType:(long long)arg1 ;
-(FCNetworkBehaviorMonitor *)networkBehaviorMonitor;
-(long long)networkEventType;
-(void)setNetworkBehaviorMonitor:(FCNetworkBehaviorMonitor *)arg1 ;
-(void)setFileDownloadCompletionHandler:(id)arg1 ;
-(long long)downloadDestination;
-(void)setDownloadedFileURL:(NSURL *)arg1 ;
-(void)setDownloadedData:(NSData *)arg1 ;
-(id)fileDownloadCompletionHandler;
-(id)dataDownloadCompletionHandler;
-(NSData *)downloadedData;
-(void)setDownloadDestination:(long long)arg1 ;
-(void)setDataDownloadCompletionHandler:(id)arg1 ;
@end

