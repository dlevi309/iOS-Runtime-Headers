/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MSPReplicaEditRemoveTombstone.h>

@class NSDate;

@interface MSPHistoryReplicaEditUpdateModificationDate : MSPReplicaEditRemoveTombstone {

	NSDate* _modificationDate;

}

@property (nonatomic,readonly) NSDate * modificationDate;              //@synthesize modificationDate=_modificationDate - In the implementation block
-(NSDate *)modificationDate;
-(id)description;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)_initWithIdentifierOfAffectedRecord:(id)arg1 ;
-(id)_initToMoveRecordWithIdentifier:(id)arg1 toModificationDate:(id)arg2 ;
@end

