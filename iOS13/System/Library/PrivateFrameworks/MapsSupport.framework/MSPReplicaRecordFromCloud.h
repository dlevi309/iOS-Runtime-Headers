/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSUUID *)recordIdentifier;
-(CKRecord *)record;
-(void)setRecord:(id)arg1;
-(id)tombstoneRecordRepresentation;
-(id)recordRepresentation;
-(void)applyUpdateEdit:(id)arg1;
-(BOOL)isTombstoneRepresentedByCloudRecord;

@end

