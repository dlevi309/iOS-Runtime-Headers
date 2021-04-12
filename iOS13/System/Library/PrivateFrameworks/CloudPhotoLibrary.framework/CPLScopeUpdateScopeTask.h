/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CPLEngineScopedTask.h>

@protocol OS_dispatch_queue, CPLEngineTransportGetLibraryInfoTask, CPLEngineTransportFetchTransportScopeTask;
@class NSObject, NSData;

@interface CPLScopeUpdateScopeTask : CPLEngineScopedTask {

	NSObject*<OS_dispatch_queue> _queue;
	id<CPLEngineTransportGetLibraryInfoTask> _getLibraryInfo;
	id<CPLEngineTransportFetchTransportScopeTask> _fetchTransportScope;
	NSData* _fetchedTransportScope;
	BOOL _retryingFetchingTransportScope;

}
-(void)cancel;
-(void)launch;
-(id)taskIdentifier;
-(BOOL)checkScopeIsValidInTransaction:(id)arg1 ;
-(id)initWithEngineLibrary:(id)arg1 session:(id)arg2 clientCacheIdentifier:(id)arg3 scope:(id)arg4 transportScope:(id)arg5 ;
-(void)_getLibraryInfo;
-(void)_fetchTransportScope;
-(void)_markScopeAsDeletedAndSucceedTaskWithFlags:(id)arg1 ;
-(void)_markScopeAsFeatureDisabledWithFlags:(id)arg1 ;
-(void)_markScopeHasBadTransportScopeWithError:(id)arg1 ;
@end

