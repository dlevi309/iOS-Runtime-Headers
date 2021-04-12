/*
* Generated on Thursday, January 14, 2021 at 2:25:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <libobjc.A.dylib/PGLibraryChangeConsumer.h>

@protocol OS_dispatch_queue, PGGraphUpdateHealthRecording;
@class NSMutableSet, PGLibraryChangeListener, NSObject, PGPhotoChangeToGraphChangeConverter, PGManager, NSMutableArray, PGGraphUpdateJetsamIndicator, PGGraphUpdateManagerTargetTokenState, NSString;

@interface PGGraphUpdateManager : NSObject <PGLibraryChangeConsumer> {

	unsigned char _processingState;
	BOOL _stopRequested;
	BOOL _listening;
	NSMutableSet* _listeners;
	PGLibraryChangeListener* _libraryChangeListener;
	NSObject*<OS_dispatch_queue> _processingQueue;
	NSObject*<OS_dispatch_queue> _stateQueue;
	PGPhotoChangeToGraphChangeConverter* _changeConverter;
	PGManager* _manager;
	NSMutableArray* _pendingChanges;
	PGGraphUpdateJetsamIndicator* _jetsamIndicator;
	PGGraphUpdateManagerTargetTokenState* _targetTokenState;
	long long _executionContext;
	id<PGGraphUpdateHealthRecording> _updateHealthRecorder;

}

@property (nonatomic,retain) PGLibraryChangeListener * libraryChangeListener;                      //@synthesize libraryChangeListener=_libraryChangeListener - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> processingQueue;                         //@synthesize processingQueue=_processingQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> stateQueue;                              //@synthesize stateQueue=_stateQueue - In the implementation block
@property (nonatomic,retain) PGPhotoChangeToGraphChangeConverter * changeConverter;                //@synthesize changeConverter=_changeConverter - In the implementation block
@property (assign,nonatomic) unsigned char processingState;                                        //@synthesize processingState=_processingState - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingChanges;                                      //@synthesize pendingChanges=_pendingChanges - In the implementation block
@property (assign,getter=isListening,nonatomic) BOOL listening;                                    //@synthesize listening=_listening - In the implementation block
@property (assign,nonatomic) BOOL stopRequested;                                                   //@synthesize stopRequested=_stopRequested - In the implementation block
@property (nonatomic,retain) PGGraphUpdateManagerTargetTokenState * targetTokenState;              //@synthesize targetTokenState=_targetTokenState - In the implementation block
@property (nonatomic,readonly) NSMutableSet * listeners;                                           //@synthesize listeners=_listeners - In the implementation block
@property (nonatomic,readonly) PGGraphUpdateJetsamIndicator * jetsamIndicator;                     //@synthesize jetsamIndicator=_jetsamIndicator - In the implementation block
@property (nonatomic,readonly) id<PGGraphUpdateHealthRecording> updateHealthRecorder;              //@synthesize updateHealthRecorder=_updateHealthRecorder - In the implementation block
@property (nonatomic,readonly) BOOL isConsistencyUpdate; 
@property (nonatomic,readonly) PGManager * manager;                                                //@synthesize manager=_manager - In the implementation block
@property (assign) long long executionContext;                                                     //@synthesize executionContext=_executionContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addListener:(id)arg1 ;
-(long long)executionContext;
-(void)setExecutionContext:(long long)arg1 ;
-(void)_triggerFullRebuildDuringLiveUpdate:(BOOL)arg1 graphIngestRecipe:(id)arg2 progressBlock:(/*^block*/id)arg3 keepExistingGraph:(BOOL)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)startListening;
-(void)stopListening;
-(NSMutableSet *)listeners;
-(id)initWithGraphManager:(id)arg1 ;
-(void)setStopRequested:(BOOL)arg1 ;
-(id)_graphUpdateForPhotoChanges:(id)arg1 ;
-(void)setStateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(PGLibraryChangeListener *)libraryChangeListener;
-(BOOL)isListening;
-(void)setListening:(BOOL)arg1 ;
-(void)incrementalChangeNotAvailable;
-(void)_notifyListeners:(id)arg1 notificationType:(unsigned char)arg2 ;
-(void)_recordInformationFromDatabaseChange:(id)arg1 ;
-(void)_processRebuild;
-(void)setLibraryChangeListener:(PGLibraryChangeListener *)arg1 ;
-(void)_onFinishedProcessingChangesWithTokens:(id)arg1 ;
-(void)performFullRebuildWithProgressBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_onEncounteredTargetToken;
-(void)_recordInformationFromGraphChanges:(id)arg1 ;
-(id)_tokensForChanges:(id)arg1 ;
-(void)setProcessingState:(unsigned char)arg1 ;
-(PGGraphUpdateJetsamIndicator *)jetsamIndicator;
-(NSString *)description;
-(PGPhotoChangeToGraphChangeConverter *)changeConverter;
-(void)setPendingChanges:(NSMutableArray *)arg1 ;
-(void)_startListening;
-(BOOL)isConsistencyUpdate;
-(void)libraryChangesAvailable:(id)arg1 ;
-(void)performLightWeightRebuildWithProgressBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_signalGraphIsConsistentWithTokens:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(PGManager *)manager;
-(NSObject*<OS_dispatch_queue>)processingQueue;
-(BOOL)_performEnrichmentWithGraphUpdateInventory:(id)arg1 enrichmentContext:(long long)arg2 progressBlock:(/*^block*/id)arg3 ;
-(void)_performRebuildWithGraphIngestRecipe:(id)arg1 progressBlock:(/*^block*/id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_processPendingChanges;
-(NSObject*<OS_dispatch_queue>)stateQueue;
-(PGGraphUpdateManagerTargetTokenState *)targetTokenState;
-(void)_triggerUpdateForGraphUpdate:(id)arg1 ;
-(void)_notifyProgress:(double)arg1 ;
-(void)setProcessingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_onStopRequestedWasListening:(BOOL)arg1 ;
-(BOOL)_pauseListening;
-(id<PGGraphUpdateHealthRecording>)updateHealthRecorder;
-(NSMutableArray *)pendingChanges;
-(void)setTargetTokenState:(PGGraphUpdateManagerTargetTokenState *)arg1 ;
-(BOOL)stopRequested;
-(unsigned char)processingState;
-(void)setChangeConverter:(PGPhotoChangeToGraphChangeConverter *)arg1 ;
@end

