/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCNetworkOperation.h>

@class NSURL, NSString, NSDictionary, FCNetworkBehaviorMonitor, NSData, NSHTTPURLResponse, NSError;

@interface FCAssetDownloadOperation : FCNetworkOperation {

	int _networkEventType;
	NSURL* _URL;
	NSString* _loggingKey;
	long long _downloadDestination;
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
@property (assign,nonatomic) int networkEventType;                                           //@synthesize networkEventType=_networkEventType - In the implementation block
@property (nonatomic,copy) NSDictionary * additionalRequestHTTPHeaders;                      //@synthesize additionalRequestHTTPHeaders=_additionalRequestHTTPHeaders - In the implementation block
@property (nonatomic,retain) FCNetworkBehaviorMonitor * networkBehaviorMonitor;              //@synthesize networkBehaviorMonitor=_networkBehaviorMonitor - In the implementation block
@property (nonatomic,copy) id fileDownloadCompletionHandler;                                 //@synthesize fileDownloadCompletionHandler=_fileDownloadCompletionHandler - In the implementation block
@property (nonatomic,copy) id dataDownloadCompletionHandler;                                 //@synthesize dataDownloadCompletionHandler=_dataDownloadCompletionHandler - In the implementation block
+(id)sharedURLSession;
+(id)sharedURLRequestScheduler;
-(BOOL)validateOperation;
-(void)setResponseMIMEType:(NSString *)arg1 ;
-(void)setNetworkEventType:(int)arg1 ;
-(void)setAdditionalRequestHTTPHeaders:(NSDictionary *)arg1 ;
-(NSDictionary *)additionalRequestHTTPHeaders;
-(unsigned long long)maxRetries;
-(double)taskStartTime;
-(void)setNetworkBehaviorMonitor:(FCNetworkBehaviorMonitor *)arg1 ;
-(void)setTimingData:(NSDictionary *)arg1 ;
-(void)setHttpResponse:(NSHTTPURLResponse *)arg1 ;
-(void)setTaskStartTime:(double)arg1 ;
-(NSHTTPURLResponse *)httpResponse;
-(NSString *)loggingKey;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)setResponseSize:(unsigned long long)arg1 ;
-(id)throttleGroup;
-(unsigned long long)responseSize;
-(NSString *)responseMIMEType;
-(NSDictionary *)timingData;
-(void)performOperation;
-(void)setRequestUUID:(NSString *)arg1 ;
-(id)fileDownloadCompletionHandler;
-(NSURL *)downloadedFileURL;
-(int)networkEventType;
-(NSString *)requestUUID;
-(void)setDataDownloadCompletionHandler:(id)arg1 ;
-(void)setDownloadedFileURL:(NSURL *)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(long long)downloadDestination;
-(id)dataDownloadCompletionHandler;
-(void)setDownloadDestination:(long long)arg1 ;
-(void)setFileDownloadCompletionHandler:(id)arg1 ;
-(FCNetworkBehaviorMonitor *)networkBehaviorMonitor;
-(void)setLoggingKey:(NSString *)arg1 ;
-(NSURL *)URL;
-(NSData *)downloadedData;
-(void)setDownloadedData:(NSData *)arg1 ;
@end

