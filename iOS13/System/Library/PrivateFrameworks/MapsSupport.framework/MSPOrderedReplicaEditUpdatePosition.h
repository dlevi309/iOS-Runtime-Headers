/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MSPReplicaEdit.h>

@class MSPPosition, MSPVectorTimestamp;

@interface MSPOrderedReplicaEditUpdatePosition : MSPReplicaEdit {

	MSPPosition* _position;
	MSPVectorTimestamp* _positionTimestamp;

}

@property (nonatomic,readonly) MSPPosition * position;                              //@synthesize position=_position - In the implementation block
@property (nonatomic,readonly) MSPVectorTimestamp * positionTimestamp;              //@synthesize positionTimestamp=_positionTimestamp - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(MSPPosition *)position;
-(MSPVectorTimestamp *)positionTimestamp;
-(id)_initToMoveRecordWithIdentifier:(id)arg1 toPosition:(id)arg2 positionTimestamp:(id)arg3 ;
-(id)_initWithIdentifierOfAffectedRecord:(id)arg1 ;
@end

