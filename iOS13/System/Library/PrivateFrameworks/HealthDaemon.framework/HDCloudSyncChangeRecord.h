/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDCloudSyncRecord.h>

@class NSNumber, NSURL, HDSyncAnchorRangeMap, CKRecordID;

@interface HDCloudSyncChangeRecord : HDCloudSyncRecord {

	NSNumber* _options;
	int _protocolVersion;
	NSURL* _changesetArchiveFileURL;
	unsigned long long _changeIndex;
	HDSyncAnchorRangeMap* _decodedSyncAnchorRangeMap;

}

@property (nonatomic,copy,readonly) NSURL * changesetArchiveFileURL;                          //@synthesize changesetArchiveFileURL=_changesetArchiveFileURL - In the implementation block
@property (nonatomic,readonly) unsigned long long changeIndex;                                //@synthesize changeIndex=_changeIndex - In the implementation block
@property (nonatomic,readonly) int protocolVersion;                                           //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (nonatomic,readonly) BOOL finalForSequence; 
@property (nonatomic,readonly) HDSyncAnchorRangeMap * decodedSyncAnchorRangeMap;              //@synthesize decodedSyncAnchorRangeMap=_decodedSyncAnchorRangeMap - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * changeSize; 
@property (nonatomic,copy,readonly) CKRecordID * sequenceRecordID; 
+(id)assetKeys;
+(id)recordWithCKRecord:(id)arg1 error:(id*)arg2 ;
+(BOOL)hasFutureSchema:(id)arg1 ;
+(id)_assetForCKRecord:(id)arg1 error:(id*)arg2 ;
+(BOOL)isChangeRecord:(id)arg1 ;
+(BOOL)isChangeRecord:(id)arg1 inSequence:(id)arg2 ;
+(long long)bytesPerChangeRecordAssetThreshold;
+(long long)bytesPerChangeRecordAssetThresholdHardLimit;
+(id)nonAssetKeys;
+(id)changesetArchiveContentDataForCKRecord:(id)arg1 error:(id*)arg2 ;
+(id)changesetArchiveURLForCKRecord:(id)arg1 error:(id*)arg2 ;
-(id)description;
-(long long)compare:(id)arg1 ;
-(BOOL)shouldFetchAssetContentInMemory;
-(int)protocolVersion;
-(unsigned long long)changeIndex;
-(id)initWithSyncAnchorRangeMap:(id)arg1 finalForSequence:(BOOL)arg2 changesetArchiveFileHandle:(id)arg3 sequenceRecord:(id)arg4 protocolVersion:(int)arg5 ;
-(id)initWithSyncAnchorRangeMapData:(id)arg1 changeIndex:(unsigned long long)arg2 changesetAsset:(id)arg3 changeSize:(id)arg4 protocolVersion:(int)arg5 options:(id)arg6 sequenceRecordID:(id)arg7 record:(id)arg8 schemaVersion:(long long)arg9 ;
-(id)_decodedSyncAnchorRangeMapForAnchorRangeData:(id)arg1 ;
-(id)initWithSyncAnchorRangeMap:(id)arg1 finalForSequence:(BOOL)arg2 changesetArchiveFileHandle:(id)arg3 sequenceRecord:(id)arg4 ;
-(CKRecordID *)sequenceRecordID;
-(NSNumber *)changeSize;
-(BOOL)finalForSequence;
-(NSURL *)changesetArchiveFileURL;
-(HDSyncAnchorRangeMap *)decodedSyncAnchorRangeMap;
@end

