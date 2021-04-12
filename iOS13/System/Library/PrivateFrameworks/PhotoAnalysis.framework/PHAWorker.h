/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/

#import <libobjc.A.dylib/PHAWorkerConfiguration.h>
#import <libobjc.A.dylib/PHAServiceOperationHandling.h>

@protocol PHAAssetResourceDataLoading;
@class PHAManager, PFSerialQueue, PHAServiceCancelableOperation, PHPhotoLibrary, NSURL, NSString;

@interface PHAWorker : NSObject <PHAWorkerConfiguration, PHAServiceOperationHandling> {

	PHAManager* _photoAnalysisManager;
	PFSerialQueue* _userInitiatedRequestQueue;
	BOOL _shutdownHasBeenCalled;
	BOOL _warmedUp;
	id<PHAAssetResourceDataLoading> _dataLoader;
	PHAServiceCancelableOperation* _currentOperation;

}

@property (assign,getter=isWarmedUp,nonatomic) BOOL warmedUp;                         //@synthesize warmedUp=_warmedUp - In the implementation block
@property (nonatomic,retain) id<PHAAssetResourceDataLoading> dataLoader;              //@synthesize dataLoader=_dataLoader - In the implementation block
@property (readonly) PHPhotoLibrary * photoLibrary; 
@property (readonly) PHAManager * photoAnalysisManager; 
@property (readonly) NSURL * persistentStorageDirectoryURL; 
@property (readonly) BOOL isEnabled; 
@property (getter=isQuiescent,readonly) BOOL quiescent; 
@property (retain) PHAServiceCancelableOperation * currentOperation;                  //@synthesize currentOperation=_currentOperation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(short)workerType;
+(long long)applicationDataFolderIdentifier;
+(BOOL)persistsState;
+(void)configureXPCConnection:(id)arg1 ;
+(BOOL)runsExclusively;
-(id)init;
-(PHAServiceCancelableOperation *)currentOperation;
-(BOOL)isEnabled;
-(void)operationDidFinish:(id)arg1 ;
-(void)shutdown;
-(PHPhotoLibrary *)photoLibrary;
-(void)operationWillStart:(id)arg1 ;
-(void)startup;
-(void)setCurrentOperation:(PHAServiceCancelableOperation *)arg1 ;
-(void)cooldown;
-(void)handleOperation:(id)arg1 ;
-(id)statusAsDictionary;
-(PHAManager *)photoAnalysisManager;
-(BOOL)isQuiescent;
-(id)initWithPhotoAnalysisManager:(id)arg1 dataLoader:(id)arg2 ;
-(BOOL)startAnalysisJob:(id)arg1 error:(id*)arg2 ;
-(BOOL)stopAnalysisJob:(id)arg1 error:(id*)arg2 ;
-(BOOL)hasAdditionalJobsForScenario:(unsigned long long)arg1 requestReason:(unsigned long long)arg2 ;
-(id)nextAdditionalJobWithScenario:(unsigned long long)arg1 requestReason:(unsigned long long)arg2 ;
-(void)warmupWithProgressBlock:(/*^block*/id)arg1 ;
-(BOOL)canRunWhenGraphIsLoaded;
-(NSURL *)persistentStorageDirectoryURL;
-(void)dispatchAsyncToUserInitiatedRequestQueue:(/*^block*/id)arg1 ;
-(void)dispatchSyncToUserInitiatedRequestQueue:(/*^block*/id)arg1 ;
-(void)assertUserInitiatedRequestQueue;
-(id)libraryScopedWorkerPreferences;
-(void)updateLibraryScopedWorkerPreferencesWithEntriesFromDictionary:(id)arg1 keysToRemove:(id)arg2 ;
-(void)setLibraryScopedWorkerPreferencesValue:(id)arg1 forKey:(id)arg2 ;
-(id)libraryScopedWorkerPreferencesURL;
-(void)pingWorkerWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(BOOL)isWarmedUp;
-(void)setWarmedUp:(BOOL)arg1 ;
-(id<PHAAssetResourceDataLoading>)dataLoader;
-(void)setDataLoader:(id<PHAAssetResourceDataLoading>)arg1 ;
@end

