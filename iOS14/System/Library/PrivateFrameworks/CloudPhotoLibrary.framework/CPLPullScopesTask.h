/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CPLEngineSyncTask.h>

@protocol CPLEngineTransportFetchScopeListChangesTask;
@class CPLEngineStore, CPLEngineScopeStorage, NSString, NSError;

@interface CPLPullScopesTask : CPLEngineSyncTask {

	BOOL _ignoreNewChanges;
	CPLEngineStore* _store;
	CPLEngineScopeStorage* _scopes;
	NSString* _clientCacheIdentifier;
	id<CPLEngineTransportFetchScopeListChangesTask> _fetchChangesTask;
	NSError* _badError;
	unsigned long long _deletedScopeCount;
	unsigned long long _newScopeCount;
	unsigned long long _modifiedScopeCount;

}
-(void)launch;
-(id)taskIdentifier;
-(void)cancel;
-(id)initWithEngineLibrary:(id)arg1 session:(id)arg2 ;
-(BOOL)_checkShouldHandleBatchInTransaction:(id)arg1 ;
-(void)_handleChangedOrNewScopes:(id)arg1 deletedScopeIdentifiers:(id)arg2 newScopeListSyncAnchor:(id)arg3 ;
-(void)_handleFinalScopeListSyncAnchor:(id)arg1 error:(id)arg2 ;
@end

