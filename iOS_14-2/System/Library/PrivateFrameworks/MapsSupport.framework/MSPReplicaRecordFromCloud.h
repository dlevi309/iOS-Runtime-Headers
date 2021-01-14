/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

@class CKRecord, NSUUID;


@protocol MSPReplicaRecordFromCloud <MSPReplicaRecord>
@property (nonatomic,retain) CKRecord * record; 
@property (getter=isTombstoneRepresentedByCloudRecord,nonatomic,readonly) BOOL tombstoneRepresentedByCloudRecord; 
@property (getter=recordIdentifier,nonatomic,readonly) NSUUID * recordIdentifier; 
@required
+(id)tombstoneWithRecordIdentifier:(id)arg1;
+(id)recordFromInsertEdit:(id)arg1;
-(CKRecord *)record;
-(NSUUID *)recordIdentifier;
-(void)setRecord:(id)arg1;
-(id)tombstoneRecordRepresentation;
-(id)recordRepresentation;
-(void)applyUpdateEdit:(id)arg1;
-(BOOL)isTombstoneRepresentedByCloudRecord;

@end

