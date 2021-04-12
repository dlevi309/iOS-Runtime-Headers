/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDCloudSyncRecord.h>

@class HDCloudSyncCodableChange, NSURL, HDSyncAnchorRangeMap, NSNumber, CKRecordID;

@interface HDCloudSyncChangeRecord : HDCloudSyncRecord {

	HDCloudSyncCodableChange* _underlyingChange;

}

@property (nonatomic,copy,readonly) NSURL * changesetArchiveFileURL; 
@property (nonatomic,readonly) long long changeIndex; 
@property (nonatomic,readonly) int protocolVersion; 
@property (nonatomic,readonly) BOOL finalForSequence; 
@property (nonatomic,readonly) HDSyncAnchorRangeMap * decodedSyncAnchorRangeMap; 
@property (nonatomic,copy,readonly) NSNumber * changeSize; 
@property (nonatomic,copy,readonly) CKRecordID * sequenceRecordID; 
+(long long)bytesPerChangeRecordAssetThreshold;
+(id)recordType;
+(long long)bytesPerChangeRecordAssetThresholdHardLimit;
+(id)recordWithCKRecord:(id)arg1 error:(id*)arg2 ;
+(BOOL)requiresUnderlyingMessage;
+(BOOL)hasFutureSchema:(id)arg1 ;
+(id)recordIDForNextChangeInSequence:(id)arg1 ;
+(id)_decodedSyncAnchorRangeMapForAnchorRangeData:(id)arg1 ;
+(id)_assetForCKRecord:(id)arg1 error:(id*)arg2 ;
+(BOOL)isChangeRecord:(id)arg1 ;
+(BOOL)isChangeRecordID:(id)arg1 ;
+(BOOL)isChangeRecord:(id)arg1 inSequence:(id)arg2 ;
+(id)nonAssetKeys;
+(id)assetKeys;
+(id)changesetArchiveContentDataForCKRecord:(id)arg1 error:(id*)arg2 ;
+(id)changesetArchiveURLForCKRecord:(id)arg1 error:(id*)arg2 ;
-(long long)compare:(id)arg1 ;
-(int)protocolVersion;
-(id)description;
-(BOOL)shouldFetchAssetContentInMemory;
-(id)serializeUnderlyingMessage;
-(id)initWithCKRecord:(id)arg1 schemaVersion:(long long)arg2 ;
-(long long)changeIndex;
-(id)initWithSyncAnchorRangeMap:(id)arg1 changeIndex:(long long)arg2 changesetAsset:(id)arg3 changeSize:(long long)arg4 protocolVersion:(int)arg5 finalForSequence:(BOOL)arg6 sequenceRecordID:(id)arg7 record:(id)arg8 schemaVersion:(long long)arg9 ;
-(id)initWithCKRecord:(id)arg1 schemaVersion:(long long)arg2 underlyingChange:(id)arg3 ;
-(void)_populateRecordFromUnderlyingMessage;
-(NSNumber *)changeSize;
-(BOOL)finalForSequence;
-(HDSyncAnchorRangeMap *)decodedSyncAnchorRangeMap;
-(id)initWithSyncAnchorRangeMap:(id)arg1 finalForSequence:(BOOL)arg2 changesetArchiveFileHandle:(id)arg3 sequenceRecord:(id)arg4 protocolVersion:(int)arg5 ;
-(NSURL *)changesetArchiveFileURL;
-(CKRecordID *)sequenceRecordID;
@end

