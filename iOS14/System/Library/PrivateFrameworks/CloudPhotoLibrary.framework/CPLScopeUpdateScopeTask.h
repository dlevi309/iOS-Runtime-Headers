/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CPLEngineScopedTask.h>

@protocol OS_dispatch_queue, CPLEngineTransportGetScopeInfoTask, CPLEngineTransportFetchTransportScopeTask;
@class NSObject, NSData;

@interface CPLScopeUpdateScopeTask : CPLEngineScopedTask {

	NSObject*<OS_dispatch_queue> _queue;
	id<CPLEngineTransportGetScopeInfoTask> _getLibraryInfo;
	id<CPLEngineTransportFetchTransportScopeTask> _fetchTransportScope;
	NSData* _fetchedTransportScope;
	BOOL _retryingFetchingTransportScope;

}
-(void)launch;
-(id)taskIdentifier;
-(void)cancel;
-(BOOL)checkScopeIsValidInTransaction:(id)arg1 ;
-(id)initWithEngineLibrary:(id)arg1 session:(id)arg2 clientCacheIdentifier:(id)arg3 scope:(id)arg4 transportScope:(id)arg5 ;
-(void)_getLibraryInfo;
-(void)_fetchTransportScope;
-(void)_markScopeAsDeletedAndSucceedTaskWithFlags:(id)arg1 ;
-(void)_markScopeAsFeatureDisabledWithFlags:(id)arg1 ;
-(void)_markScopeHasBadTransportScopeWithError:(id)arg1 ;
@end

