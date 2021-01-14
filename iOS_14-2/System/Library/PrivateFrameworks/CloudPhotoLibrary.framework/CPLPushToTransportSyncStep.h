/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CPLSimpleTaskSyncStep.h>

@interface CPLPushToTransportSyncStep : CPLSimpleTaskSyncStep {

	BOOL _highPriority;

}

@property (nonatomic,readonly) BOOL highPriority;              //@synthesize highPriority=_highPriority - In the implementation block
-(id)newTask;
-(BOOL)highPriority;
-(void)cancelAllTasks:(BOOL)arg1 ;
-(id)initWithSyncManager:(id)arg1 syncSession:(id)arg2 highPriority:(BOOL)arg3 ;
@end

