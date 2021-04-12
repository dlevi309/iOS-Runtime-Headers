/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSData *)contents;
-(id)description;
-(unsigned long long)hash;
-(MSPVectorTimestamp *)contentsTimestamp;
-(BOOL)isEqual:(id)arg1 ;
-(id)_initWithIdentifierOfAffectedRecord:(id)arg1 ;
-(id)_initToTurnIntoTombstoneRecordWithIdentifier:(id)arg1 ;
-(id)_initToMoveRecordWithIdentifier:(id)arg1 toContents:(id)arg2 contentsTimestamp:(id)arg3 ;
@end

