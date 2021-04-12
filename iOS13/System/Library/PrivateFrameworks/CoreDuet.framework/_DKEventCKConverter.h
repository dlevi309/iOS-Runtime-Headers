/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@class CKRecordZoneID;

@interface _DKEventCKConverter : NSObject {

	CKRecordZoneID* _zoneID;

}

@property (retain) CKRecordZoneID * zoneID;              //@synthesize zoneID=_zoneID - In the implementation block
-(CKRecordZoneID *)zoneID;
-(id)initWithZoneID:(id)arg1 ;
-(void)setZoneID:(CKRecordZoneID *)arg1 ;
-(id)eventsFromRecords:(id)arg1 ;
-(id)eventIDsFromRecordIDsAndTypes:(id)arg1 ;
-(id)recordsFromEvents:(id)arg1 ;
-(id)recordIDsFromEventIDs:(id)arg1 ;
-(id)eventDataFromRecord:(id)arg1 ;
-(id)recordFromEventData:(id)arg1 event:(id)arg2 ;
@end

