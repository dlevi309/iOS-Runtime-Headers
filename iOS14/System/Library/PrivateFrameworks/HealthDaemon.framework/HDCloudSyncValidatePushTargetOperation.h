/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDCloudSyncOperation.h>

@class HDCloudSyncTarget;

@interface HDCloudSyncValidatePushTargetOperation : HDCloudSyncOperation {

	os_unfair_lock_s _lock;
	BOOL _shouldValidateCurrentSequence;
	HDCloudSyncTarget* _target;
	long long _result;

}

@property (assign,nonatomic) BOOL shouldValidateCurrentSequence;              //@synthesize shouldValidateCurrentSequence=_shouldValidateCurrentSequence - In the implementation block
@property (nonatomic,copy) HDCloudSyncTarget * target;                        //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) long long result;                              //@synthesize result=_result - In the implementation block
-(void)setTarget:(HDCloudSyncTarget *)arg1 ;
-(void)main;
-(long long)result;
-(HDCloudSyncTarget *)target;
-(id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 ;
-(void)_validateSequenceOrdering;
-(id)analyticsDictionary;
-(void)_validateCurrentSequence;
-(BOOL)_validateAnchorRangesForSequenceRecord:(id)arg1 ;
-(void)_requireRebaseForTarget;
-(BOOL)_validateCurrentSequenceChildCount;
-(BOOL)_validateAnchorRanges;
-(BOOL)_validatePersistedStoreState;
-(void)_validateCurrentSequenceChanges;
-(BOOL)_orderedChangeRecordSequenceRequiresRebase:(id)arg1 ;
-(BOOL)_isRelevantChangeRecord:(id)arg1 forStoreRecord:(id)arg2 ;
-(BOOL)shouldValidateCurrentSequence;
-(void)setShouldValidateCurrentSequence:(BOOL)arg1 ;
@end

