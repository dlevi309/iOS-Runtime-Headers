/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDCloudSyncOperation.h>

@class HDCloudSyncTarget, HDCloudSyncSequenceRecord;

@interface HDCloudSyncDeleteSequenceOperation : HDCloudSyncOperation {

	HDCloudSyncTarget* _target;
	HDCloudSyncSequenceRecord* _sequenceRecord;

}
-(void)main;
-(id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 ;
-(id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 target:(id)arg3 sequence:(id)arg4 ;
@end

