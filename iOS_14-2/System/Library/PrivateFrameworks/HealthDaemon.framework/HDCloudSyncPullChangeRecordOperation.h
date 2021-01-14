/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDCloudSyncOperation.h>

@class NSFileHandle, HDCloudSyncTarget, HDCloudSyncSequenceRecord, HDCloudSyncChangeRecord;

@interface HDCloudSyncPullChangeRecordOperation : HDCloudSyncOperation {

	NSFileHandle* _fileHandle;
	HDCloudSyncTarget* _target;
	HDCloudSyncSequenceRecord* _sequenceRecord;
	HDCloudSyncChangeRecord* _changeRecord;

}

@property (nonatomic,readonly) HDCloudSyncTarget * target;                              //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) HDCloudSyncSequenceRecord * sequenceRecord;              //@synthesize sequenceRecord=_sequenceRecord - In the implementation block
@property (nonatomic,readonly) HDCloudSyncChangeRecord * changeRecord;                  //@synthesize changeRecord=_changeRecord - In the implementation block
+(long long)progressCount;
+(id)_assetFileHandleWithName:(id)arg1 error:(id*)arg2 ;
-(void)main;
-(HDCloudSyncTarget *)target;
-(id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 ;
-(HDCloudSyncSequenceRecord *)sequenceRecord;
-(void)_fetchedRecord:(id)arg1 recordID:(id)arg2 inMemoryAsset:(BOOL)arg3 error:(id)arg4 ;
-(id)_zipArchiveExtractorForChangeRecord:(id)arg1 assetContentInMemory:(BOOL)arg2 error:(id*)arg3 ;
-(void)_finishWithAssetExtractionError:(id)arg1 ;
-(BOOL)_persistFetchedArchiveAsset:(id)arg1 changeRecord:(id)arg2 error:(id*)arg3 ;
-(void)_setAssetExtractionFailureCount:(long long)arg1 ;
-(void)_recordAppliedChange;
-(BOOL)_applySyncChanges:(id)arg1 store:(id)arg2 error:(id*)arg3 ;
-(id)_assetExtractionFailureCountKey;
-(long long)_assetExtractionFailureCount;
-(id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 target:(id)arg3 sequenceRecord:(id)arg4 changeRecord:(id)arg5 ;
-(HDCloudSyncChangeRecord *)changeRecord;
@end

