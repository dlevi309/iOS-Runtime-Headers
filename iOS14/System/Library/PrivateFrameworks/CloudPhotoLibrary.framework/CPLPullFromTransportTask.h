/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CPLEngineMultiscopeSyncTask.h>

@class CPLScopeFilter;

@interface CPLPullFromTransportTask : CPLEngineMultiscopeSyncTask {

	CPLScopeFilter* _additionalScopeFilter;

}
-(id)taskIdentifier;
-(id)enumerateScopesForTaskInTransaction:(id)arg1 ;
-(id)newScopedTaskWithScope:(id)arg1 session:(id)arg2 transportScope:(id)arg3 clientCacheIdentifier:(id)arg4 ;
-(BOOL)shouldProcessScope:(id)arg1 inTransaction:(id)arg2 ;
@end

