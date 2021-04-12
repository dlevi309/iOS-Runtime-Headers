/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CPLEngineMultiscopeSyncTask.h>

@class CPLScopeFilter;

@interface CPLPushToTransportTask : CPLEngineMultiscopeSyncTask {

	BOOL _deferredCancel;
	BOOL _highPriority;
	CPLScopeFilter* _scopeFilter;

}

@property (assign,nonatomic) BOOL highPriority;                         //@synthesize highPriority=_highPriority - In the implementation block
@property (nonatomic,retain) CPLScopeFilter * scopeFilter;              //@synthesize scopeFilter=_scopeFilter - In the implementation block
-(id)taskIdentifier;
-(void)setHighPriority:(BOOL)arg1 ;
-(BOOL)highPriority;
-(void)cancel:(BOOL)arg1 ;
-(id)enumerateScopesForTaskInTransaction:(id)arg1 ;
-(id)newScopedTaskWithScope:(id)arg1 session:(id)arg2 transportScope:(id)arg3 clientCacheIdentifier:(id)arg4 ;
-(BOOL)shouldSkipScopesWithMissingTransportScope;
-(void)taskDidFinishWithError:(id)arg1 ;
-(CPLScopeFilter *)scopeFilter;
-(void)setScopeFilter:(CPLScopeFilter *)arg1 ;
-(BOOL)shouldProcessScope:(id)arg1 inTransaction:(id)arg2 ;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
@end

