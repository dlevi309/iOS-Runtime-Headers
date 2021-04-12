/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MSPReplicaRecordFromCloudKit.h>
#import <libobjc.A.dylib/MSPHistoryReplicaRecord.h>
#import <libobjc.A.dylib/MSPHistoryReplicaRecordFromCloud.h>

@class NSDate, NSData, MSPVectorTimestamp, NSString, CKRecord, NSUUID;

@interface MSPHistoryReplicaRecordFromCloudKit : MSPReplicaRecordFromCloudKit <MSPHistoryReplicaRecord, MSPHistoryReplicaRecordFromCloud> {

	NSDate* _modificationDate;

}

@property (nonatomic,copy,readonly) NSDate * modificationDate;                                                                 //@synthesize modificationDate=_modificationDate - In the implementation block
@property (nonatomic,copy,readonly) NSData * contents; 
@property (nonatomic,copy,readonly) MSPVectorTimestamp * contentsTimestamp; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) CKRecord * record; 
@property (getter=isTombstoneRepresentedByCloudRecord,nonatomic,readonly) BOOL tombstoneRepresentedByCloudRecord; 
@property (getter=recordIdentifier,nonatomic,readonly) NSUUID * recordIdentifier; 
+(id)tombstoneWithRecordIdentifier:(id)arg1 ;
+(id)recordFromInsertEdit:(id)arg1 ;
-(NSDate *)modificationDate;
-(NSString *)description;
-(id)initWithCKRecord:(id)arg1 ;
-(id)initWithReplicaRecord:(id)arg1 recordID:(id)arg2 ;
-(void)applyUpdateEdit:(id)arg1 ;
-(void)applyUpdateModificationDateEdit:(id)arg1 ;
-(void)applyDeleteTombstoneEdit:(id)arg1 ;
@end

