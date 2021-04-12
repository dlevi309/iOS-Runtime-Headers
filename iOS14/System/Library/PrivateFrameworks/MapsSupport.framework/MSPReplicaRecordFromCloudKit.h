/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <libobjc.A.dylib/MSPReplicaRecordFromCloud.h>

@class CKRecord, NSUUID, NSData, MSPVectorTimestamp, NSString;

@interface MSPReplicaRecordFromCloudKit : NSObject <MSPReplicaRecordFromCloud> {

	CKRecord* _record;
	NSData* _contents;
	MSPVectorTimestamp* _contentsTimestamp;
	NSUUID* _recordIdentifier;

}

@property (nonatomic,retain) CKRecord * record;                                                                                //@synthesize record=_record - In the implementation block
@property (getter=isTombstoneRepresentedByCloudRecord,nonatomic,readonly) BOOL tombstoneRepresentedByCloudRecord; 
@property (getter=recordIdentifier,nonatomic,readonly) NSUUID * recordIdentifier;                                              //@synthesize recordIdentifier=_recordIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSData * contents;                                                                         //@synthesize contents=_contents - In the implementation block
@property (nonatomic,copy,readonly) MSPVectorTimestamp * contentsTimestamp;                                                    //@synthesize contentsTimestamp=_contentsTimestamp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)recordType;
+(id)tombstoneWithRecordIdentifier:(id)arg1 ;
+(id)recordFromInsertEdit:(id)arg1 ;
-(CKRecord *)record;
-(NSData *)contents;
-(NSUUID *)recordIdentifier;
-(void)setRecord:(CKRecord *)arg1 ;
-(id)recordZoneName;
-(NSString *)description;
-(id)initWithCKRecord:(id)arg1 ;
-(MSPVectorTimestamp *)contentsTimestamp;
-(id)tombstoneRecordRepresentation;
-(id)recordRepresentation;
-(id)initWithReplicaRecord:(id)arg1 recordID:(id)arg2 ;
-(void)applyUpdateEdit:(id)arg1 ;
-(BOOL)isTombstoneRepresentedByCloudRecord;
-(id)recordRepresentationWithType:(id)arg1 recordZoneID:(id)arg2 ;
-(id)initWithContents:(id)arg1 contentsTimestamp:(id)arg2 identifier:(id)arg3 ;
@end

