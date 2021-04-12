/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CPLEngineSyncTask.h>
#import <libobjc.A.dylib/CPLEngineSyncTaskDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, CPLEngineScopedTask, NSMutableArray, NSMutableDictionary, NSString, CPLEngineScopeStorage, CPLScopeFilter;

@interface CPLEngineMultiscopeSyncTask : CPLEngineSyncTask <CPLEngineSyncTaskDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _currentTaskQueue;
	CPLEngineScopedTask* _currentTask;
	NSMutableArray* _coveredScopes;
	NSMutableArray* _excludedScopes;
	NSMutableDictionary* _transportScopes;
	NSString* _clientCacheIdentifier;
	CPLEngineScopeStorage* _scopes;
	CPLScopeFilter* _scopeFilter;

}

@property (nonatomic,readonly) CPLEngineScopeStorage * scopes;                              //@synthesize scopes=_scopes - In the implementation block
@property (nonatomic,retain) CPLScopeFilter * scopeFilter;                                  //@synthesize scopeFilter=_scopeFilter - In the implementation block
@property (nonatomic,readonly) BOOL shouldSkipScopesWithMissingTransportScope; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CPLEngineScopeStorage *)scopes;
-(void)launch;
-(void)setForeground:(BOOL)arg1 ;
-(id)phaseDescription;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(id)_currentTask;
-(void)cancel;
-(id)enumerateScopesForTaskInTransaction:(id)arg1 ;
-(id)newScopedTaskWithScope:(id)arg1 session:(id)arg2 transportScope:(id)arg3 clientCacheIdentifier:(id)arg4 ;
-(BOOL)shouldSkipScopesWithMissingTransportScope;
-(id)initWithEngineLibrary:(id)arg1 session:(id)arg2 ;
-(CPLScopeFilter *)scopeFilter;
-(void)setScopeFilter:(CPLScopeFilter *)arg1 ;
-(id)phaseDescriptionLastChangeDate:(id*)arg1 ;
-(void)setForceSync:(BOOL)arg1 ;
-(void)task:(id)arg1 didProgress:(float)arg2 userInfo:(id)arg3 ;
-(void)_setCurrentTask:(id)arg1 ;
-(id)_currentScope;
-(void)dispatchAsyncWithCurrentSubtask:(/*^block*/id)arg1 ;
-(BOOL)shouldStartTaskInTransaction:(id)arg1 ;
-(BOOL)shouldProcessScope:(id)arg1 inTransaction:(id)arg2 ;
-(BOOL)shouldContinueAfterError:(id)arg1 fromTask:(id)arg2 ;
-(void)_launchTaskForNextScope;
@end

