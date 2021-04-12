/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <libobjc.A.dylib/CHRecognitionSessionTaskDelegate.h>

@protocol CHStrokeProvider, CHRecognitionSessionDataSource, OS_dispatch_queue;
@class CHRecognitionSessionResult, NSArray, NSMutableDictionary, NSMutableArray, NSObject, NSData, NSString;

@interface CHRecognitionSession : NSObject <CHRecognitionSessionTaskDelegate> {

	CHRecognitionSessionResult* _lastRecognitionResult;
	long long _status;
	id<CHStrokeProvider> _latestStrokeProvider;
	BOOL _strokeGroupingOnly;
	BOOL __hasUnprocessedChanges;
	unsigned __taskQueueQoSClass;
	long long _mode;
	NSArray* _preferredLocales;
	id<CHRecognitionSessionDataSource> _dataSource;
	long long _recognitionEnvironment;
	long long _priority;
	NSArray* __effectiveLocales;
	NSMutableDictionary* __recognizersByLocaleID;
	unsigned long long __changeCoalescingIndex;
	NSMutableArray* __changeObservers;
	NSMutableArray* __inputDrawingClients;
	NSObject*<OS_dispatch_queue> __tasksWorkQueue;
	NSObject*<OS_dispatch_queue> __sessionQueue;
	NSMutableArray* __activeTasks;

}

@property (assign,nonatomic) BOOL strokeGroupingOnly; 
@property (retain,readonly) CHRecognitionSessionResult * lastRecognitionResult; 
@property (nonatomic,readonly) long long status; 
@property (retain,readonly) id<CHStrokeProvider> latestStrokeProvider; 
@property (setter=_setEffectiveLocales:,nonatomic,copy) NSArray * _effectiveLocales;                                  //@synthesize _effectiveLocales=__effectiveLocales - In the implementation block
@property (setter=_setLastRecognitionResult:,retain) CHRecognitionSessionResult * lastRecognitionResult; 
@property (assign,setter=_setStatus:,nonatomic) long long status; 
@property (setter=_setLatestStrokeProvider:,retain) id<CHStrokeProvider> latestStrokeProvider; 
@property (assign,setter=_setHasUnprocessedChanges:,nonatomic) BOOL _hasUnprocessedChanges;                           //@synthesize _hasUnprocessedChanges=__hasUnprocessedChanges - In the implementation block
@property (nonatomic,retain,readonly) NSMutableDictionary * _recognizersByLocaleID;                                   //@synthesize _recognizersByLocaleID=__recognizersByLocaleID - In the implementation block
@property (assign,nonatomic) unsigned long long _changeCoalescingIndex;                                               //@synthesize _changeCoalescingIndex=__changeCoalescingIndex - In the implementation block
@property (nonatomic,retain,readonly) NSMutableArray * _changeObservers;                                              //@synthesize _changeObservers=__changeObservers - In the implementation block
@property (nonatomic,retain,readonly) NSMutableArray * _inputDrawingClients;                                          //@synthesize _inputDrawingClients=__inputDrawingClients - In the implementation block
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> _tasksWorkQueue;                                   //@synthesize _tasksWorkQueue=__tasksWorkQueue - In the implementation block
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> _sessionQueue;                                     //@synthesize _sessionQueue=__sessionQueue - In the implementation block
@property (nonatomic,readonly) unsigned _taskQueueQoSClass;                                                           //@synthesize _taskQueueQoSClass=__taskQueueQoSClass - In the implementation block
@property (nonatomic,retain,readonly) NSMutableArray * _activeTasks;                                                  //@synthesize _activeTasks=__activeTasks - In the implementation block
@property (nonatomic,readonly) long long mode;                                                                        //@synthesize mode=_mode - In the implementation block
@property (nonatomic,copy) NSArray * preferredLocales;                                                                //@synthesize preferredLocales=_preferredLocales - In the implementation block
@property (nonatomic,copy) NSArray * locales; 
@property (assign,nonatomic) id<CHRecognitionSessionDataSource> dataSource;                                           //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) long long recognitionEnvironment;                                                        //@synthesize recognitionEnvironment=_recognitionEnvironment - In the implementation block
@property (assign,nonatomic) long long priority;                                                                      //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) NSData * sessionData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_isLocaleSupported:(id)arg1 ;
+(id)effectiveLocalesFromLocales:(id)arg1 ;
+(id)createRecognizerForLocale:(id)arg1 remote:(BOOL)arg2 priority:(long long)arg3 ;
-(id)init;
-(void)dealloc;
-(long long)status;
-(long long)priority;
-(long long)mode;
-(void)setPriority:(long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)_sessionQueue;
-(id<CHRecognitionSessionDataSource>)dataSource;
-(void)setDataSource:(id<CHRecognitionSessionDataSource>)arg1 ;
-(id)initWithMode:(long long)arg1 ;
-(NSData *)sessionData;
-(void)_setStatus:(long long)arg1 ;
-(void)registerChangeObserver:(id)arg1 ;
-(void)unregisterChangeObserver:(id)arg1 ;
-(void)_notifyObserversWithBlock:(/*^block*/id)arg1 ;
-(NSArray *)preferredLocales;
-(void)setNeedsRecognitionUpdate;
-(void)setPreferredLocales:(NSArray *)arg1 ;
-(void)cancelOngoingRequests;
-(id)indexableContent;
-(NSArray *)locales;
-(void)setLocales:(NSArray *)arg1 ;
-(NSMutableArray *)_changeObservers;
-(long long)recognitionEnvironment;
-(id<CHStrokeProvider>)latestStrokeProvider;
-(BOOL)strokeGroupingOnly;
-(id)recognizerForLocale:(id)arg1 ;
-(void)setStrokeGroupingOnly:(BOOL)arg1 ;
-(CHRecognitionSessionResult *)lastRecognitionResult;
-(void)registerInputDrawingClient:(id)arg1 ;
-(void)unregisterInputDrawingClient:(id)arg1 ;
-(void)waitForPendingRecognitionTasks;
-(void)_setupExecutionQueuesForMode:(long long)arg1 ;
-(void)_setEffectiveLocales:(id)arg1 ;
-(void)_cleanupCachedRecognizers;
-(BOOL)_isReadyToProcessChanges;
-(void)rebuildRecognitionResults;
-(BOOL)_hasPendingRecognitionTasks;
-(BOOL)_hasUnprocessedChanges;
-(NSMutableArray *)_activeTasks;
-(void)_setLatestStrokeProvider:(id)arg1 ;
-(void)_setHasUnprocessedChanges:(BOOL)arg1 ;
-(void)_scheduleProcessStrokeProviderChangesImmediately:(BOOL)arg1 ;
-(void)_updateRecognitionSessionStatus;
-(void)_cancelOngoingRequests;
-(unsigned long long)_changeCoalescingIndex;
-(void)set_changeCoalescingIndex:(unsigned long long)arg1 ;
-(void)_setLastRecognitionResult:(id)arg1 ;
-(void)_processPendingStrokeChangesIfAvailable;
-(double)_preferredCoalescingInterval;
-(id)_newRecognitionSessionTask;
-(NSObject*<OS_dispatch_queue>)_tasksWorkQueue;
-(NSMutableArray *)_inputDrawingClients;
-(NSMutableDictionary *)_recognizersByLocaleID;
-(BOOL)_shouldRunRecognitionLocally;
-(BOOL)loadSessionData:(id)arg1 error:(id*)arg2 ;
-(void)setRecognitionEnvironment:(long long)arg1 ;
-(NSArray *)_effectiveLocales;
-(unsigned)_taskQueueQoSClass;
-(id)recognizableDrawingForStrokeGroupQueryItem:(id)arg1 ;
-(id)lastRecognitionResultWaitingForPendingTasks;
@end

