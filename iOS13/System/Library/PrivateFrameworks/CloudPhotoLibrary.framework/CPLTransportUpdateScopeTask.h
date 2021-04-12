/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CPLEngineScopedTask.h>

@protocol CPLEngineTransportDeleteTransportScopeTask, CPLEngineTransportUpdateTransportScopeTask;
@interface CPLTransportUpdateScopeTask : CPLEngineScopedTask {

	id<CPLEngineTransportDeleteTransportScopeTask> _deleteTask;
	id<CPLEngineTransportUpdateTransportScopeTask> _updateTask;

}
-(void)cancel;
-(void)launch;
-(id)taskIdentifier;
-(BOOL)checkScopeIsValidInTransaction:(id)arg1 ;
@end

