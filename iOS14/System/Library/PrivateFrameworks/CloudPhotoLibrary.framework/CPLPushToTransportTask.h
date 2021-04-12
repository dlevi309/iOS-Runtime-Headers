/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CPLEngineMultiscopeSyncTask.h>

@interface CPLPushToTransportTask : CPLEngineMultiscopeSyncTask {

	BOOL _deferredCancel;
	BOOL _highPriority;

}

@property (assign,nonatomic) BOOL highPriority;              //@synthesize highPriority=_highPriority - In the implementation block
-(void)cancel:(BOOL)arg1 ;
-(id)taskIdentifier;
-(BOOL)highPriority;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)setHighPriority:(BOOL)arg1 ;
-(id)enumerateScopesForTaskInTransaction:(id)arg1 ;
-(id)newScopedTaskWithScope:(id)arg1 session:(id)arg2 transportScope:(id)arg3 clientCacheIdentifier:(id)arg4 ;
-(BOOL)shouldSkipScopesWithMissingTransportScope;
-(void)taskDidFinishWithError:(id)arg1 ;
@end

