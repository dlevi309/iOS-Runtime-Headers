/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CPLEngineSyncTask.h>
#import <libobjc.A.dylib/CPLEngineSyncTaskDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, CPLEngineScopedTask, NSMutableArray, NSMutableDictionary, NSString, CPLEngineScopeStorage;

@interface CPLEngineMultiscopeSyncTask : CPLEngineSyncTask <CPLEngineSyncTaskDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _currentTaskQueue;
	CPLEngineScopedTask* _currentTask;
	NSMutableArray* _coveredScopes;
	NSMutableArray* _excludedScopes;
	NSMutableDictionary* _transportScopes;
	NSString* _clientCacheIdentifier;
	CPLEngineScopeStorage* _scopes;

}

@property (nonatomic,readonly) CPLEngineScopeStorage * scopes;                              //@synthesize scopes=_scopes - In the implementation block
@property (nonatomic,readonly) BOOL shouldSkipScopesWithMissingTransportScope; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(void)launch;
-(void)setForceSync:(BOOL)arg1 ;
-(id)_currentTask;
-(void)setForeground:(BOOL)arg1 ;
-(CPLEngineScopeStorage *)scopes;
-(id)phaseDescription;
-(id)enumerateScopesForTaskInTransaction:(id)arg1 ;
-(id)newScopedTaskWithScope:(id)arg1 session:(id)arg2 transportScope:(id)arg3 clientCacheIdentifier:(id)arg4 ;
-(BOOL)shouldSkipScopesWithMissingTransportScope;
-(id)initWithEngineLibrary:(id)arg1 session:(id)arg2 ;
-(BOOL)shouldProcessScope:(id)arg1 inTransaction:(id)arg2 ;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)task:(id)arg1 didProgress:(float)arg2 userInfo:(id)arg3 ;
-(void)_setCurrentTask:(id)arg1 ;
-(id)_currentScope;
-(void)dispatchAsyncWithCurrentSubtask:(/*^block*/id)arg1 ;
-(BOOL)shouldStartTaskInTransaction:(id)arg1 ;
-(BOOL)shouldContinueAfterError:(id)arg1 fromTask:(id)arg2 ;
-(void)_launchTaskForNextScope;
@end

