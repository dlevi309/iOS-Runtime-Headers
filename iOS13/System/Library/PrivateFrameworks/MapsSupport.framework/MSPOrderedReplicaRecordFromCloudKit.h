/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MSPReplicaRecordFromCloudKit.h>
#import <libobjc.A.dylib/MSPOrderedReplicaRecord.h>
#import <libobjc.A.dylib/MSPOrderedReplicaRecordFromCloud.h>

@class MSPPosition, MSPVectorTimestamp, NSString, NSData, CKRecord, NSUUID;

@interface MSPOrderedReplicaRecordFromCloudKit : MSPReplicaRecordFromCloudKit <MSPOrderedReplicaRecord, MSPOrderedReplicaRecordFromCloud> {

	MSPPosition* _position;
	MSPVectorTimestamp* _positionTimestamp;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSData * contents; 
@property (nonatomic,copy,readonly) MSPVectorTimestamp * contentsTimestamp; 
@property (nonatomic,readonly) MSPPosition * position;                                                                         //@synthesize position=_position - In the implementation block
@property (nonatomic,readonly) MSPVectorTimestamp * positionTimestamp;                                                         //@synthesize positionTimestamp=_positionTimestamp - In the implementation block
@property (nonatomic,retain) CKRecord * record; 
@property (getter=isTombstoneRepresentedByCloudRecord,nonatomic,readonly) BOOL tombstoneRepresentedByCloudRecord; 
@property (getter=recordIdentifier,nonatomic,readonly) NSUUID * recordIdentifier; 
+(id)recordType;
+(id)recordFromInsertEdit:(id)arg1 ;
-(NSString *)description;
-(MSPPosition *)position;
-(id)initWithCKRecord:(id)arg1 ;
-(id)recordRepresentation;
-(id)initWithReplicaRecord:(id)arg1 recordID:(id)arg2 ;
-(MSPVectorTimestamp *)positionTimestamp;
-(void)applyUpdatePositionEdit:(id)arg1 ;
-(id)recordZoneName;
-(id)initWithContents:(id)arg1 contentsTimestamp:(id)arg2 position:(id)arg3 positionTimestamp:(id)arg4 identifier:(id)arg5 ;
@end

