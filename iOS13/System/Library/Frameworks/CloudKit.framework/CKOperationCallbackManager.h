/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/


@class NSMutableDictionary, NSMapTable;

@interface CKOperationCallbackManager : NSObject {

	NSMutableDictionary* _progressCallbacks;
	NSMutableDictionary* _statisticsCallbacks;
	NSMutableDictionary* _commandCallbacks;
	NSMutableDictionary* _completionCallbacks;
	NSMutableDictionary* _checkpointCallbacks;
	NSMutableDictionary* _discretionarySuspensionCallbacks;
	NSMapTable* _operationsByID;

}

@property (retain) NSMutableDictionary * progressCallbacks;                             //@synthesize progressCallbacks=_progressCallbacks - In the implementation block
@property (retain) NSMutableDictionary * statisticsCallbacks;                           //@synthesize statisticsCallbacks=_statisticsCallbacks - In the implementation block
@property (retain) NSMutableDictionary * commandCallbacks;                              //@synthesize commandCallbacks=_commandCallbacks - In the implementation block
@property (retain) NSMutableDictionary * completionCallbacks;                           //@synthesize completionCallbacks=_completionCallbacks - In the implementation block
@property (retain) NSMutableDictionary * checkpointCallbacks;                           //@synthesize checkpointCallbacks=_checkpointCallbacks - In the implementation block
@property (retain) NSMutableDictionary * discretionarySuspensionCallbacks;              //@synthesize discretionarySuspensionCallbacks=_discretionarySuspensionCallbacks - In the implementation block
@property (retain) NSMapTable * operationsByID;                                         //@synthesize operationsByID=_operationsByID - In the implementation block
-(id)init;
-(void)handleOperationProgress:(id)arg1 forOperationWithID:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)handleOperationStatistics:(id)arg1 forOperationWithID:(id)arg2 ;
-(void)handleOperationCompletion:(id)arg1 forOperationWithID:(id)arg2 ;
-(void)handleOperationCheckpoint:(id)arg1 forOperationWithID:(id)arg2 ;
-(void)removeAllCallbacks;
-(void)handleDiscretionarySuspensionForOperationWithID:(id)arg1 ;
-(void)registerProgressCallback:(/*^block*/id)arg1 forOperation:(id)arg2 ;
-(void)registerStatisticsCallback:(/*^block*/id)arg1 forOperation:(id)arg2 ;
-(void)registerCompletionCallback:(/*^block*/id)arg1 forOperation:(id)arg2 ;
-(void)registerCheckpointCallback:(/*^block*/id)arg1 forOperation:(id)arg2 ;
-(void)registerSuspensionCallback:(/*^block*/id)arg1 forDiscretionaryOperation:(id)arg2 ;
-(void)unregisterAllCallbacksForOperation:(id)arg1 ;
-(NSMapTable *)operationsByID;
-(NSMutableDictionary *)progressCallbacks;
-(NSMutableDictionary *)statisticsCallbacks;
-(NSMutableDictionary *)commandCallbacks;
-(NSMutableDictionary *)completionCallbacks;
-(NSMutableDictionary *)checkpointCallbacks;
-(NSMutableDictionary *)discretionarySuspensionCallbacks;
-(void)_performCallbackForOperation:(id)arg1 callback:(/*^block*/id)arg2 errorCallback:(/*^block*/id)arg3 ;
-(void)registerCommandCallback:(/*^block*/id)arg1 forOperation:(id)arg2 ;
-(void)setProgressCallbacks:(NSMutableDictionary *)arg1 ;
-(void)setStatisticsCallbacks:(NSMutableDictionary *)arg1 ;
-(void)setCommandCallbacks:(NSMutableDictionary *)arg1 ;
-(void)setCompletionCallbacks:(NSMutableDictionary *)arg1 ;
-(void)setCheckpointCallbacks:(NSMutableDictionary *)arg1 ;
-(void)setDiscretionarySuspensionCallbacks:(NSMutableDictionary *)arg1 ;
-(void)setOperationsByID:(NSMapTable *)arg1 ;
@end

