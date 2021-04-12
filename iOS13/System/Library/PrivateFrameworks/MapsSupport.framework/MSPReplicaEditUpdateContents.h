/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MSPReplicaEdit.h>

@class NSData, MSPVectorTimestamp;

@interface MSPReplicaEditUpdateContents : MSPReplicaEdit {

	NSData* _contents;
	MSPVectorTimestamp* _contentsTimestamp;

}

@property (nonatomic,readonly) NSData * contents;                                   //@synthesize contents=_contents - In the implementation block
@property (nonatomic,readonly) MSPVectorTimestamp * contentsTimestamp;              //@synthesize contentsTimestamp=_contentsTimestamp - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSData *)contents;
-(MSPVectorTimestamp *)contentsTimestamp;
-(id)_initWithIdentifierOfAffectedRecord:(id)arg1 ;
-(id)_initToTurnIntoTombstoneRecordWithIdentifier:(id)arg1 ;
-(id)_initToMoveRecordWithIdentifier:(id)arg1 toContents:(id)arg2 contentsTimestamp:(id)arg3 ;
@end

