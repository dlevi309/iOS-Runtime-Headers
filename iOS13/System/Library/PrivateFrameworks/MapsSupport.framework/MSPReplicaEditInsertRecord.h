/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MSPReplicaEdit.h>

@protocol MSPReplicaRecord;
@interface MSPReplicaEditInsertRecord : MSPReplicaEdit {

	id<MSPReplicaRecord> _recordWithInformationToInsert;

}

@property (nonatomic,readonly) id<MSPReplicaRecord> recordWithInformationToInsert;              //@synthesize recordWithInformationToInsert=_recordWithInformationToInsert - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)_initWithIdentifierOfAffectedRecord:(id)arg1 ;
-(id<MSPReplicaRecord>)recordWithInformationToInsert;
-(id)_initWithRecordToInsert:(id)arg1 identifier:(id)arg2 ;
@end

