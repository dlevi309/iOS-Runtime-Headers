/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCoreSupport.framework/SoftwareUpdateCoreSupport
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSURL, NSObject, NSURLSessionConfiguration, NSOperationQueue, NSURLSession, SUCoreEventReporterDelegate, NSString, SUCorePersistedState, SUCoreEvent, NSMutableDictionary;

@interface SUCoreEventReporter : NSObject {

	BOOL _splunkAccessCreated;
	BOOL _eventExtensionsDetermined;
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
	NSString* _persistedStatePath;
	long long _accessControl;
	SUCorePersistedState* _activeEventsState;
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
@property (nonatomic,retain) NSString * persistedStatePath;                                //@synthesize persistedStatePath=_persistedStatePath - In the implementation block
@property (assign,nonatomic) long long accessControl;                                      //@synthesize accessControl=_accessControl - In the implementation block
@property (nonatomic,retain) SUCorePersistedState * activeEventsState;                     //@synthesize activeEventsState=_activeEventsState - In the implementation block
@property (nonatomic,retain) SUCoreEvent * lastErrorEvent;                                 //@synthesize lastErrorEvent=_lastErrorEvent - In the implementation block
@property (assign,nonatomic) BOOL splunkAccessCreated;                                     //@synthesize splunkAccessCreated=_splunkAccessCreated - In the implementation block
@property (assign,nonatomic) BOOL eventExtensionsDetermined;                               //@synthesize eventExtensionsDetermined=_eventExtensionsDetermined - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * eventExtensions;                        //@synthesize eventExtensions=_eventExtensions - In the implementation block
@property (assign,nonatomic) int activeSendTaskCount;                                      //@synthesize activeSendTaskCount=_activeSendTaskCount - In the implementation block
@property (assign,nonatomic) BOOL dropEventsOnSendFailure;                                 //@synthesize dropEventsOnSendFailure=_dropEventsOnSendFailure - In the implementation block
@property (nonatomic,copy) id onceIdleCompletion;                                          //@synthesize onceIdleCompletion=_onceIdleCompletion - In the implementation block
+(id)sharedReporter;
+(id)initSharedReporterStoringToPath:(id)arg1 ;
+(id)_sharedReporter:(id)arg1 withAccessControl:(long long)arg2 ;
+(id)buildSplunkServerURLFromBase:(id)arg1 ;
+(id)initSharedReporterStoringToPath:(id)arg1 withAccessControl:(long long)arg2 ;
+(id)_nsURLSessionTaskNameForState:(long long)arg1 ;
+(void)augmentEvent:(id)arg1 withError:(id)arg2 ;
+(id)accessControlSummary:(long long)arg1 ;
+(id)_errorDomainAbbreviation:(id)arg1 ;
-(BOOL)splunkAccessCreated;
-(void)_uploadFromFile:(id)arg1 withFileUUID:(id)arg2 forEventUUID:(id)arg3 toServerURL:(id)arg4 ;
-(void)setSplunkURL:(NSURL *)arg1 ;
-(void)_splunkAccessSetup;
-(void)setInProcessConfig:(NSURLSessionConfiguration *)arg1 ;
-(void)handleSendFinishedWithFileUUID:(id)arg1 sendSucceeded:(BOOL)arg2 withStatusCode:(long long)arg3 withError:(id)arg4 ;
-(void)_sendCoreEvent:(id)arg1 ;
-(void)_adoptLastErrorEvent:(id)arg1 ;
-(BOOL)sendEvent:(id)arg1 toServerURL:(id)arg2 ;
-(NSMutableArray *)awaitingRetry;
-(void)_sendAllAwaitingRetry;
-(id)sendEventReturningAugmented:(id)arg1 toServerURL:(id)arg2 ;
-(void)setSplunkAccessCreated:(BOOL)arg1 ;
-(void)indicateOnceIdle:(/*^block*/id)arg1 ;
-(void)_checkWhetherIdle:(id)arg1 ;
-(void)_removeFileUUID:(id)arg1 loggingError:(BOOL)arg2 forReason:(id)arg3 ;
-(void)setActiveSendTaskCount:(int)arg1 ;
-(void)setLastErrorEvent:(SUCoreEvent *)arg1 ;
-(void)_sendSplunkEvents:(id)arg1 forEventUUID:(id)arg2 toServerURL:(id)arg3 ;
-(void)_determineEventExtensions;
-(BOOL)eventExtensionsDetermined;
-(void)_sendCoreEvents:(id)arg1 secondEvent:(id)arg2 ;
-(id)initStoringToPath:(id)arg1 withAccessControl:(long long)arg2 ;
-(void)setReporterDelegate:(SUCoreEventReporterDelegate *)arg1 ;
-(id)_activeEventForFileUUID:(id)arg1 ;
-(id)_newExistingFileUUIDs;
-(SUCoreEvent *)lastErrorEvent;
-(void)_updateActiveEvent:(id)arg1 forFileUUID:(id)arg2 ;
-(void)setActiveEventsState:(SUCorePersistedState *)arg1 ;
-(void)handleSendFinishedInvalidFileUUID:(id)arg1 withError:(id)arg2 ;
-(NSMutableDictionary *)eventExtensions;
-(void)_synchronizeWithNSURLSessionExpecting:(id)arg1 ;
-(SUCorePersistedState *)activeEventsState;
-(void)_decrementActiveSendCount;
-(void)dropOnSendFailure:(BOOL)arg1 ;
-(void)setEventExtensionsDetermined:(BOOL)arg1 ;
-(void)setInProcessSession:(NSURLSession *)arg1 ;
-(void)setPersistedStatePath:(NSString *)arg1 ;
-(id)_copyEscapeStringsForEventData:(id)arg1 ;
-(void)_sendInterruptedFromStorage:(id)arg1 ;
-(void)setInProcessOperationQueue:(NSOperationQueue *)arg1 ;
-(void)setAwaitingRetry:(NSMutableArray *)arg1 ;
-(NSObject*<OS_dispatch_queue>)splunkStateQueue;
-(id)_synchonizeDiscoveredCompleted:(id)arg1 forActiveEvent:(id)arg2 withFileUUIDsToRetry:(id)arg3 ;
-(void)_incrementActiveSendCount:(id)arg1 ;
-(void)setDropEventsOnSendFailure:(BOOL)arg1 ;
-(BOOL)_storeServerURLMetadata:(id)arg1 toFileUUID:(id)arg2 ;
-(void)setOnceIdleCompletion:(id)arg1 ;
-(NSOperationQueue *)inProcessOperationQueue;
-(id)_synchonizeDiscoveredCanceling:(id)arg1 forActiveEvent:(id)arg2 withFileUUIDsToRetry:(id)arg3 ;
-(long long)currentAccessControl;
-(void)_removeActiveEventForFileUUID:(id)arg1 ;
-(BOOL)_sendFirstAwaitingRetry;
-(BOOL)sendEvent:(id)arg1 ;
-(id)_alignPersistedStateWithExistingFileUUIDs:(id)arg1 ;
-(id)_storeJSONData:(id)arg1 withFileUUID:(id)arg2 forEventUUID:(id)arg3 ;
-(int)activeSendTaskCount;
-(void)setAccessControl:(long long)arg1 ;
-(NSURLSessionConfiguration *)inProcessConfig;
-(BOOL)dropEventsOnSendFailure;
-(NSURL *)splunkURL;
-(id)_buildContextFromNVRAMBootArgs;
-(NSString *)storeToPath;
-(id)_removeFileUUID:(id)arg1 fromFilesToRetry:(id)arg2 ;
-(id)_synchonizeDiscoveredSuspended:(id)arg1 forActiveEvent:(id)arg2 withFileUUIDsToRetry:(id)arg3 ;
-(void)_awaitRetryingFileUUID:(id)arg1 ;
-(id)_synchonizeDiscoveredRunning:(id)arg1 forActiveEvent:(id)arg2 withFileUUIDsToRetry:(id)arg3 ;
-(void)setStoreToPath:(NSString *)arg1 ;
-(void)flushEvent;
-(long long)accessControl;
-(id)_getJSONDataFromPayload:(id)arg1 withFileUUID:(id)arg2 forEventUUID:(id)arg3 ;
-(id)_getSplunkServerURL:(id)arg1 ;
-(id)_synchonizeDiscoveredUnknown:(id)arg1 forActiveEvent:(id)arg2 withFileUUIDsToRetry:(id)arg3 ;
-(void)setEventExtensions:(NSMutableDictionary *)arg1 ;
-(SUCoreEventReporterDelegate *)reporterDelegate;
-(id)initStoringToPath:(id)arg1 ;
-(NSURLSession *)inProcessSession;
-(NSString *)persistedStatePath;
-(id)_getSplunkRequestForURL:(id)arg1 ;
-(id)onceIdleCompletion;
-(id)_newScrubbedEvents:(id)arg1 ;
@end

