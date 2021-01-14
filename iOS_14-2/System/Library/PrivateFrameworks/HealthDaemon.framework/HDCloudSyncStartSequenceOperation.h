/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDCloudSyncOperation.h>

@class HDCloudSyncTarget, HDCloudSyncSequenceRecord;

@interface HDCloudSyncStartSequenceOperation : HDCloudSyncOperation {

	HDCloudSyncTarget* _target;
	HDCloudSyncSequenceRecord* _sequenceRecord;
	HDCloudSyncSequenceRecord* _replacedSequenceRecord;
	AB _shouldClearRebaselineDeadline;

}

@property (assign) BOOL shouldClearRebaselineDeadline; 
-(void)main;
-(id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 ;
-(id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 target:(id)arg3 sequence:(id)arg4 replacingSequence:(id)arg5 ;
-(void)setShouldClearRebaselineDeadline:(BOOL)arg1 ;
-(void)_deleteReplacedSequence;
-(void)_pushNewSequence;
-(BOOL)_updateDisplayNameForRegistryRecord:(id)arg1 error:(id*)arg2 ;
-(BOOL)shouldClearRebaselineDeadline;
@end

