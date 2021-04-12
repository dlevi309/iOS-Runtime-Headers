/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(void)configureXPCConnection:(id)arg1 ;
+(BOOL)persistsState;
+(BOOL)runsExclusively;
+(long long)applicationDataFolderIdentifier;
+(short)workerType;
-(void)cooldown;
-(void)shutdown;
-(id)init;
-(PHPhotoLibrary *)photoLibrary;
-(void)warmupWithProgressBlock:(/*^block*/id)arg1 ;
-(BOOL)hasAdditionalJobsForScenario:(unsigned long long)arg1 requestReason:(unsigned long long)arg2 ;
-(void)startup;
-(PHAManager *)photoAnalysisManager;
-(BOOL)stopAnalysisJob:(id)arg1 error:(id*)arg2 ;
-(id)statusAsDictionary;
-(void)operationDidFinish:(id)arg1 ;
-(void)handleOperation:(id)arg1 ;
-(void)operationWillStart:(id)arg1 ;
-(BOOL)isEnabled;
-(BOOL)isQuiescent;
-(id)nextAdditionalJobWithScenario:(unsigned long long)arg1 requestReason:(unsigned long long)arg2 ;
-(PHAServiceCancelableOperation *)currentOperation;
-(BOOL)canRunWhenGraphIsLoaded;
-(BOOL)startAnalysisJob:(id)arg1 error:(id*)arg2 ;
-(id)initWithPhotoAnalysisManager:(id)arg1 dataLoader:(id)arg2 ;
-(void)setCurrentOperation:(PHAServiceCancelableOperation *)arg1 ;
-(BOOL)isWarmedUp;
-(NSURL *)persistentStorageDirectoryURL;
-(id<PHAAssetResourceDataLoading>)dataLoader;
-(void)dispatchSyncToUserInitiatedRequestQueue:(/*^block*/id)arg1 ;
-(void)dispatchAsyncToUserInitiatedRequestQueue:(/*^block*/id)arg1 ;
-(void)setLibraryScopedWorkerPreferencesValue:(id)arg1 forKey:(id)arg2 ;
-(void)assertUserInitiatedRequestQueue;
-(id)libraryScopedWorkerPreferences;
-(void)updateLibraryScopedWorkerPreferencesWithEntriesFromDictionary:(id)arg1 keysToRemove:(id)arg2 ;
-(id)libraryScopedWorkerPreferencesURL;
-(void)pingWorkerWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)setWarmedUp:(BOOL)arg1 ;
-(void)setDataLoader:(id<PHAAssetResourceDataLoading>)arg1 ;
@end

