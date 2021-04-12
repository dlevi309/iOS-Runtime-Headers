/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCoreSupport.framework/SoftwareUpdateCoreSupport
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSURL, NSObject, NSURLSessionConfiguration, NSOperationQueue, NSURLSession, SUCoreEventReporterDelegate, NSString, SUCoreEvent, NSMutableDictionary;

@interface SUCoreEventReporter : NSObject {

	BOOL _splunkAccessCreated;
	BOOL _dropEventsOnSendFailure;
	int _activeSendTaskCount;
	NSMutableArray* _awaitingRetry;
	NSURL* _splunkURL;
	NSObject*<OS_dispatch_queue> _splunkStateQueue;
	NSURLSessionConfiguration* _inProcessConfig;
	NSOperationQueue* _inProcessOperationQueue;
	NSURLSession* _inProcessSession;
	SUCoreEventReporterDelegate* _reporterDelegate;
	NSString* _storeToPath;
	SUCoreEvent* _lastErrorEvent;
	NSMutableDictionary* _eventExtensions;
	/*^block*/id _onceIdleCompletion;

}

@property (nonatomic,retain) NSMutableArray * awaitingRetry;                               //@synthesize awaitingRetry=_awaitingRetry - In the implementation block
@property (nonatomic,retain) NSURL * splunkURL;                                            //@synthesize splunkURL=_splunkURL - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> splunkStateQueue;              //@synthesize splunkStateQueue=_splunkStateQueue - In the implementation block
@property (nonatomic,retain) NSURLSessionConfiguration * inProcessConfig;                  //@synthesize inProcessConfig=_inProcessConfig - In the implementation block
@property (nonatomic,retain) NSOperationQueue * inProcessOperationQueue;                   //@synthesize inProcessOperationQueue=_inProcessOperationQueue - In the implementation block
@property (nonatomic,retain) NSURLSession * inProcessSession;                              //@synthesize inProcessSession=_inProcessSession - In the implementation block
@property (nonatomic,retain) SUCoreEventReporterDelegate * reporterDelegate;               //@synthesize reporterDelegate=_reporterDelegate - In the implementation block
@property (nonatomic,retain) NSString * storeToPath;                                       //@synthesize storeToPath=_storeToPath - In the implementation block
@property (nonatomic,retain) SUCoreEvent * lastErrorEvent;                                 //@synthesize lastErrorEvent=_lastErrorEvent - In the implementation block
@property (assign,nonatomic) BOOL splunkAccessCreated;                                     //@synthesize splunkAccessCreated=_splunkAccessCreated - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * eventExtensions;                        //@synthesize eventExtensions=_eventExtensions - In the implementation block
@property (assign,nonatomic) int activeSendTaskCount;                                      //@synthesize activeSendTaskCount=_activeSendTaskCount - In the implementation block
@property (assign,nonatomic) BOOL dropEventsOnSendFailure;                                 //@synthesize dropEventsOnSendFailure=_dropEventsOnSendFailure - In the implementation block
@property (nonatomic,copy) id onceIdleCompletion;                                          //@synthesize onceIdleCompletion=_onceIdleCompletion - In the implementation block
+(id)sharedReporter;
+(id)_sharedReporter:(id)arg1 ;
+(id)_errorDomainAbbreviation:(id)arg1 ;
+(id)initSharedReporterStoringToPath:(id)arg1 ;
+(void)augmentEvent:(id)arg1 withError:(id)arg2 ;
+(id)buildSplunkServerURLFromBase:(id)arg1 ;
-(BOOL)sendEvent:(id)arg1 ;
-(void)handleSendFinishedInvalidFileUUID:(id)arg1 withError:(id)arg2 ;
-(void)handleSendFinishedWithFileUUID:(id)arg1 sendSucceeded:(BOOL)arg2 withStatusCode:(long long)arg3 withError:(id)arg4 ;
-(id)initStoringToPath:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)splunkStateQueue;
-(void)_buildEventExtensions;
-(BOOL)sendEvent:(id)arg1 toServerURL:(id)arg2 ;
-(void)_sendCoreEvent:(id)arg1 ;
-(BOOL)dropEventsOnSendFailure;
-(void)setDropEventsOnSendFailure:(BOOL)arg1 ;
-(SUCoreEvent *)lastErrorEvent;
-(void)_sendCoreEvents:(id)arg1 secondEvent:(id)arg2 ;
-(BOOL)_sendFirstAwaitingRetry;
-(void)setLastErrorEvent:(SUCoreEvent *)arg1 ;
-(id)onceIdleCompletion;
-(void)setOnceIdleCompletion:(id)arg1 ;
-(void)_checkWhetherIdle:(id)arg1 ;
-(BOOL)splunkAccessCreated;
-(void)setReporterDelegate:(SUCoreEventReporterDelegate *)arg1 ;
-(void)setInProcessConfig:(NSURLSessionConfiguration *)arg1 ;
-(void)setInProcessOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)inProcessOperationQueue;
-(NSURLSessionConfiguration *)inProcessConfig;
-(SUCoreEventReporterDelegate *)reporterDelegate;
-(void)setInProcessSession:(NSURLSession *)arg1 ;
-(void)setSplunkURL:(NSURL *)arg1 ;
-(NSURL *)splunkURL;
-(NSString *)storeToPath;
-(void)_sendInterruptedFromStorage;
-(void)setSplunkAccessCreated:(BOOL)arg1 ;
-(id)_buildContextFromNVRAMBootArgs;
-(void)_splunkAccessSetup;
-(void)_adoptLastErrorEvent:(id)arg1 ;
-(id)_getSplunkServerURL:(id)arg1 ;
-(void)_sendSplunkEvents:(id)arg1 forEventUUID:(id)arg2 toServerURL:(id)arg3 ;
-(id)_newScrubbedEvents:(id)arg1 ;
-(NSURLSession *)inProcessSession;
-(id)_getJSONDataFromPayload:(id)arg1 withFileUUID:(id)arg2 forEventUUID:(id)arg3 ;
-(id)_storeJSONData:(id)arg1 withFileUUID:(id)arg2 forEventUUID:(id)arg3 ;
-(void)_uploadFromFile:(id)arg1 withFileUUID:(id)arg2 forEventUUID:(id)arg3 toServerURL:(id)arg4 ;
-(id)_getSplunkRequestForURL:(id)arg1 ;
-(void)_awaitRetryingFileUUID:(id)arg1 ;
-(void)_incrementActiveSendCount:(id)arg1 ;
-(id)_newExistingFileUUIDs;
-(NSMutableArray *)awaitingRetry;
-(int)activeSendTaskCount;
-(void)setAwaitingRetry:(NSMutableArray *)arg1 ;
-(void)_removeFileUUID:(id)arg1 loggingError:(BOOL)arg2 forReason:(id)arg3 ;
-(id)_copyEscapeStringsForEventData:(id)arg1 ;
-(void)setActiveSendTaskCount:(int)arg1 ;
-(void)_decrementActiveSendCount;
-(void)_sendAllAwaitingRetry;
-(id)sendEventReturningAugmented:(id)arg1 toServerURL:(id)arg2 ;
-(void)dropOnSendFailure:(BOOL)arg1 ;
-(void)flushEvent;
-(void)indicateOnceIdle:(/*^block*/id)arg1 ;
-(void)setStoreToPath:(NSString *)arg1 ;
-(NSMutableDictionary *)eventExtensions;
-(void)setEventExtensions:(NSMutableDictionary *)arg1 ;
@end

