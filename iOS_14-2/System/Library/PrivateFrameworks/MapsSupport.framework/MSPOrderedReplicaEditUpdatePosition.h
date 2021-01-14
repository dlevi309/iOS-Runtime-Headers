/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(MSPPosition *)position;
-(MSPVectorTimestamp *)positionTimestamp;
-(id)description;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)_initToMoveRecordWithIdentifier:(id)arg1 toPosition:(id)arg2 positionTimestamp:(id)arg3 ;
-(id)_initWithIdentifierOfAffectedRecord:(id)arg1 ;
@end

