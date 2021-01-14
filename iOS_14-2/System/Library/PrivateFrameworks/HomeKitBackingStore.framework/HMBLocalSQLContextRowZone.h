/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HMFoundation/HMFObject.h>

@protocol HMBLocalZoneID;
@class NSUUID;

@interface HMBLocalSQLContextRowZone : HMFObject {

	id<HMBLocalZoneID> _identifier;
	unsigned long long _zoneRow;
	NSUUID* _replication;

}

@property (assign,nonatomic) unsigned long long zoneRow;                 //@synthesize zoneRow=_zoneRow - In the implementation block
@property (nonatomic,retain) id<HMBLocalZoneID> identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSUUID * replication;                       //@synthesize replication=_replication - In the implementation block
-(id)init;
-(void)setReplication:(NSUUID *)arg1 ;
-(void)setZoneRow:(unsigned long long)arg1 ;
-(id)debugDescription;
-(unsigned long long)zoneRow;
-(id)description;
-(NSUUID *)replication;
-(id)initWithZoneRow:(unsigned long long)arg1 name:(id)arg2 token:(id)arg3 ;
-(void)setIdentifier:(id<HMBLocalZoneID>)arg1 ;
-(id<HMBLocalZoneID>)identifier;
-(id)initWithZoneRow:(unsigned long long)arg1 ;
@end

