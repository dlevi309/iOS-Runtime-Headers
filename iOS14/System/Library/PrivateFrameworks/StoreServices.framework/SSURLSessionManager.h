/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <libobjc.A.dylib/NSCacheDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject, NSArray, SSCircularBuffer, SSMetricsController, NSMutableDictionary, NSMapTable, NSString;

@interface SSURLSessionManager : NSObject <NSCacheDelegate, NSURLSessionDataDelegate> {

	NSObject*<OS_dispatch_source> _memoryPressureSource;
	unsigned _memoryPressureStatus;
	unsigned long long _memoryPressureCachedMaxSize;
	NSArray* _customURLProtocols;
	NSObject*<OS_dispatch_queue> _eventQueue;
	SSCircularBuffer* _httpArchiveBuffer;
	SSMetricsController* _metricsController;
	NSMutableDictionary* _requestData;
	NSObject*<OS_dispatch_queue> _requestDataQueue;
	NSMutableDictionary* _taskMetrics;
	NSObject*<OS_dispatch_queue> _taskMetricsQueue;
	NSMutableDictionary* _responseData;
	NSObject*<OS_dispatch_queue> _responseDataQueue;
	NSMutableDictionary* _recordResponseMap;
	NSObject*<OS_dispatch_queue> _recordResponseQueue;
	NSMutableDictionary* _sendTimingDataMap;
	NSObject*<OS_dispatch_queue> _sendTimingDataQueue;
	NSMutableDictionary* _sessions;
	NSObject*<OS_dispatch_queue> _sessionsQueue;
	NSMapTable* _taskDelegates;
	NSObject*<OS_dispatch_queue> _taskDelegatesQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> eventQueue;                       //@synthesize eventQueue=_eventQueue - In the implementation block
@property (nonatomic,retain) SSCircularBuffer * httpArchiveBuffer;                          //@synthesize httpArchiveBuffer=_httpArchiveBuffer - In the implementation block
@property (nonatomic,retain) SSMetricsController * metricsController;                       //@synthesize metricsController=_metricsController - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * requestData;                             //@synthesize requestData=_requestData - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> requestDataQueue;                 //@synthesize requestDataQueue=_requestDataQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * taskMetrics;                             //@synthesize taskMetrics=_taskMetrics - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> taskMetricsQueue;                 //@synthesize taskMetricsQueue=_taskMetricsQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * responseData;                            //@synthesize responseData=_responseData - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> responseDataQueue;                //@synthesize responseDataQueue=_responseDataQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordResponseMap;                       //@synthesize recordResponseMap=_recordResponseMap - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> recordResponseQueue;              //@synthesize recordResponseQueue=_recordResponseQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sendTimingDataMap;                       //@synthesize sendTimingDataMap=_sendTimingDataMap - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> sendTimingDataQueue;              //@synthesize sendTimingDataQueue=_sendTimingDataQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sessions;                                //@synthesize sessions=_sessions - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> sessionsQueue;                    //@synthesize sessionsQueue=_sessionsQueue - In the implementation block
@property (nonatomic,retain) NSMapTable * taskDelegates;                                    //@synthesize taskDelegates=_taskDelegates - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> taskDelegatesQueue;               //@synthesize taskDelegatesQueue=_taskDelegatesQueue - In the implementation block
@property (assign,nonatomic) unsigned long long httpArchiveBufferSize; 
@property (nonatomic,copy) NSArray * customURLProtocols;                                    //@synthesize customURLProtocols=_customURLProtocols - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_shouldCollectNetworkLogs;
+(id)eventFromTimingData:(id)arg1 delegate:(id)arg2 task:(id)arg3 error:(id)arg4 ;
+(id)eventFromTimingData:(id)arg1 task:(id)arg2 error:(id)arg3 ;
+(id)sharedManager;
+(BOOL)_fetchedFromCache:(id)arg1 ;
+(id)_responseDateFromTask:(id)arg1 delegate:(id)arg2 ;
+(id)eventFromTimingData:(id)arg1 task:(id)arg2 ;
+(id)_metricsDictionaryWithDelegate:(id)arg1 ;
+(id)_fetchNetworkQualityReports;
+(id)_legacyBagValueForKey:(id)arg1 ;
+(double)_randomDouble;
+(unsigned long long)_messageSizeFromTask:(id)arg1 isRequest:(BOOL)arg2 delegate:(id)arg3 ;
+(BOOL)_shouldCreateLocalCache;
+(double)_localTimeIntervalToServerTimeInterval:(double)arg1 ;
+(id)_DNSServerIPAddresses;
+(id)eventFromTimingData:(id)arg1 requestProperties:(id)arg2 task:(id)arg3 error:(id)arg4 ;
+(id)_tidStateForTask:(id)arg1 delegate:(id)arg2 ;
+(id)_bagPerformanceValuesWithDelegate:(id)arg1 ;
+(id)bagValueForKey:(id)arg1 delegate:(id)arg2 type:(unsigned long long)arg3 ;
+(id)_resolvedIPAddressFromTask:(id)arg1 ;
+(id)eventFromTimingData:(id)arg1 delegate:(id)arg2 session:(id)arg3 task:(id)arg4 error:(id)arg5 ;
+(double)_timingDataMetricToServerTimeInterval:(id)arg1 ;
-(void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(/*^block*/id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3 ;
-(void)setTaskMetrics:(NSMutableDictionary *)arg1 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSMutableDictionary *)taskMetrics;
-(id)_delegateForTask:(id)arg1 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setRecordResponseQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setCustomURLProtocols:(NSArray *)arg1 ;
-(NSObject*<OS_dispatch_queue>)eventQueue;
-(id)_URLCacheForDelegate:(id)arg1 ;
-(BOOL)_shouldDisableCellularForDelegate:(id)arg1 ;
-(void)setSendTimingDataMap:(NSMutableDictionary *)arg1 ;
-(id)_URLCacheIDForDelegate:(id)arg1 ;
-(id)init;
-(NSMutableDictionary *)requestData;
-(SSCircularBuffer *)httpArchiveBuffer;
-(void)flushHTTPArchiveBuffer;
-(void)_removeRecordResponseDataForSessionTask:(id)arg1 ;
-(BOOL)_sendTimingDataForSessionTask:(id)arg1 ;
-(BOOL)_shouldRecordResponseBodyForDataTask:(id)arg1 ;
-(void)_setSendTimingData:(id)arg1 forSessionTask:(id)arg2 ;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(NSMutableDictionary *)sessions;
-(BOOL)_shouldEnableTLSSessionForDelegate:(id)arg1 ;
-(void)_setAPSTopicWithTask:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)taskDelegatesQueue;
-(void)_logAPSResultsWithTask:(id)arg1 ;
-(void)setResponseData:(NSMutableDictionary *)arg1 ;
-(void)setResponseDataQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)_taskMetricsForSessionTask:(id)arg1 ;
-(NSMutableDictionary *)recordResponseMap;
-(NSMutableDictionary *)sendTimingDataMap;
-(void)setRecordResponseMap:(NSMutableDictionary *)arg1 ;
-(id)_sessionIDWithDelegate:(id)arg1 collectTimingData:(BOOL)arg2 allowsTLSSessionTickets:(BOOL)arg3 ;
-(void)_listenForLowMemoryWarning;
-(NSMutableDictionary *)responseData;
-(id)_responseDataForSessionTask:(id)arg1 ;
-(id)dataTaskWithRequest:(id)arg1 delegate:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)sendTimingDataQueue;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)setSessionsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setTaskDelegates:(NSMapTable *)arg1 ;
-(void)_insertEventIntoDatabase:(id)arg1 delegate:(id)arg2 ;
-(SSMetricsController *)metricsController;
-(NSObject*<OS_dispatch_queue>)recordResponseQueue;
-(BOOL)_shouldEnableAPSRWithTask:(id)arg1 ;
-(NSMapTable *)taskDelegates;
-(id)_sessionConfigurationWithDelegate:(id)arg1 collectTimingData:(BOOL)arg2 allowsTLSSessionTickets:(BOOL)arg3 ;
-(void)setEventQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)requestDataQueue;
-(void)setSendTimingDataQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)_shouldSetCookiesForDelegate:(id)arg1 ;
-(void)setHttpArchiveBuffer:(SSCircularBuffer *)arg1 ;
-(void)_removeResponseDataForSessionTask:(id)arg1 ;
-(id)_requestDataForSessionTask:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)responseDataQueue;
-(void)_setTaskMetrics:(id)arg1 forSessionTask:(id)arg2 ;
-(void)_setDelegate:(id)arg1 forTask:(id)arg2 ;
-(id)_sessionWithDelegate:(id)arg1 collectTimingData:(BOOL*)arg2 ;
-(NSObject*<OS_dispatch_queue>)sessionsQueue;
-(void)setTaskDelegatesQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)_shouldRequireCelluarForDelegate:(id)arg1 ;
-(void)setHttpArchiveBufferSize:(unsigned long long)arg1 ;
-(unsigned long long)httpArchiveBufferSize;
-(NSArray *)customURLProtocols;
-(void)setRequestDataQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_setRequestData:(id)arg1 forSessionTask:(id)arg2 ;
-(void)_appendResponseData:(id)arg1 forSessionTask:(id)arg2 ;
-(int)_PIDFromAuditTokenData:(id)arg1 ;
-(id)_saveHTTPArchiveBufferToDiskDecompressed:(BOOL)arg1 ;
-(void)setTaskMetricsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setRequestData:(NSMutableDictionary *)arg1 ;
-(void)setMetricsController:(SSMetricsController *)arg1 ;
-(void)_removeDelegateForTask:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)taskMetricsQueue;
-(void)setSessions:(NSMutableDictionary *)arg1 ;
-(void)_logCacheHitForTask:(id)arg1 metrics:(id)arg2 ;
-(void)dealloc;
@end

