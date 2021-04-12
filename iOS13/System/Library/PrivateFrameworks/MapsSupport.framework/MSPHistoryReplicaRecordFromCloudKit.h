/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MSPReplicaRecordFromCloudKit.h>
#import <libobjc.A.dylib/MSPHistoryReplicaRecord.h>
#import <libobjc.A.dylib/MSPHistoryReplicaRecordFromCloud.h>

@class NSDate, NSString, NSData, MSPVectorTimestamp, CKRecord, NSUUID;

@interface MSPHistoryReplicaRecordFromCloudKit : MSPReplicaRecordFromCloudKit <MSPHistoryReplicaRecord, MSPHistoryReplicaRecordFromCloud> {

	NSDate* _modificationDate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSData * contents; 
@property (nonatomic,copy,readonly) MSPVectorTimestamp * contentsTimestamp; 
@property (nonatomic,copy,readonly) NSDate * modificationDate;                                                                 //@synthesize modificationDate=_modificationDate - In the implementation block
@property (nonatomic,retain) CKRecord * record; 
@property (getter=isTombstoneRepresentedByCloudRecord,nonatomic,readonly) BOOL tombstoneRepresentedByCloudRecord; 
@property (getter=recordIdentifier,nonatomic,readonly) NSUUID * recordIdentifier; 
+(id)tombstoneWithRecordIdentifier:(id)arg1 ;
+(id)recordFromInsertEdit:(id)arg1 ;
-(NSString *)description;
-(NSDate *)modificationDate;
-(id)initWithCKRecord:(id)arg1 ;
-(id)initWithReplicaRecord:(id)arg1 recordID:(id)arg2 ;
-(void)applyUpdateEdit:(id)arg1 ;
-(void)applyUpdateModificationDateEdit:(id)arg1 ;
-(void)applyDeleteTombstoneEdit:(id)arg1 ;
@end

