/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CPLEngineScopedTask.h>

@protocol CPLEngineTransportDeleteTransportScopeTask, CPLEngineTransportUpdateTransportScopeTask;
@interface CPLTransportUpdateScopeTask : CPLEngineScopedTask {

	id<CPLEngineTransportDeleteTransportScopeTask> _deleteTask;
	id<CPLEngineTransportUpdateTransportScopeTask> _updateTask;

}
-(void)launch;
-(id)taskIdentifier;
-(void)cancel;
-(BOOL)checkScopeIsValidInTransaction:(id)arg1 ;
@end

