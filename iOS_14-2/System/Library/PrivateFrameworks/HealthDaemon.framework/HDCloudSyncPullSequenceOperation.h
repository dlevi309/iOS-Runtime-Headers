/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDCloudSyncOperation.h>

@class NSArray, HDCloudSyncTarget, HDCloudSyncSequenceRecord;

@interface HDCloudSyncPullSequenceOperation : HDCloudSyncOperation {

	NSArray* _changeRecords;
	BOOL _hasAppliedChange;
	HDCloudSyncTarget* _target;
	HDCloudSyncSequenceRecord* _sequenceRecord;

}

@property (nonatomic,readonly) HDCloudSyncTarget * target;                              //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) HDCloudSyncSequenceRecord * sequenceRecord;              //@synthesize sequenceRecord=_sequenceRecord - In the implementation block
@property (nonatomic,readonly) BOOL hasAppliedChange;                                   //@synthesize hasAppliedChange=_hasAppliedChange - In the implementation block
-(void)main;
-(HDCloudSyncTarget *)target;
-(id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 ;
-(HDCloudSyncSequenceRecord *)sequenceRecord;
-(id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 target:(id)arg3 sequence:(id)arg4 changes:(id)arg5 ;
-(BOOL)hasAppliedChange;
@end

