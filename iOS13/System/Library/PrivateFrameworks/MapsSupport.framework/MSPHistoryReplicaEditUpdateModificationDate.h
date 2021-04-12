/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MSPReplicaEditRemoveTombstone.h>

@class NSDate;

@interface MSPHistoryReplicaEditUpdateModificationDate : MSPReplicaEditRemoveTombstone {

	NSDate* _modificationDate;

}

@property (nonatomic,readonly) NSDate * modificationDate;              //@synthesize modificationDate=_modificationDate - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSDate *)modificationDate;
-(id)_initWithIdentifierOfAffectedRecord:(id)arg1 ;
-(id)_initToMoveRecordWithIdentifier:(id)arg1 toModificationDate:(id)arg2 ;
@end

