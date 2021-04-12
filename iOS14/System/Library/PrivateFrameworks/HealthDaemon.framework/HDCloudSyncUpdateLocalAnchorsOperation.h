/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDCloudSyncOperation.h>

@interface HDCloudSyncUpdateLocalAnchorsOperation : HDCloudSyncOperation
+(BOOL)shouldLogAtOperationStart;
-(void)main;
-(BOOL)_updateExpectedSyncAnchorsForTarget:(id)arg1 error:(id*)arg2 ;
-(BOOL)_updateFrozenAnchorsForTarget:(id)arg1 error:(id*)arg2 ;
-(BOOL)_queue_updateExpectedSyncAnchorsForTarget:(id)arg1 sequenceHeader:(id)arg2 error:(id*)arg3 ;
@end

