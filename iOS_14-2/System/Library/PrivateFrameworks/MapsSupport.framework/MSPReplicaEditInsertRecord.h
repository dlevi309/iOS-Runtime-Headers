/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MSPReplicaEdit.h>

@protocol MSPReplicaRecord;
@interface MSPReplicaEditInsertRecord : MSPReplicaEdit {

	id<MSPReplicaRecord> _recordWithInformationToInsert;

}

@property (nonatomic,readonly) id<MSPReplicaRecord> recordWithInformationToInsert;              //@synthesize recordWithInformationToInsert=_recordWithInformationToInsert - In the implementation block
-(id)description;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)_initWithIdentifierOfAffectedRecord:(id)arg1 ;
-(id<MSPReplicaRecord>)recordWithInformationToInsert;
-(id)_initWithRecordToInsert:(id)arg1 identifier:(id)arg2 ;
@end

