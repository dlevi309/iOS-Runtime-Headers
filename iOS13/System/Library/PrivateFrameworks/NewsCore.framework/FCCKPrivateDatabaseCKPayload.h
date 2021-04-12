/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSArray;

@interface FCCKPrivateDatabaseCKPayload : NSObject {

	NSArray* _recordIDs;
	NSArray* _records;
	NSArray* _zoneIDs;
	NSArray* _zones;
	long long _destination;

}

@property (nonatomic,retain) NSArray * recordIDs;                //@synthesize recordIDs=_recordIDs - In the implementation block
@property (nonatomic,retain) NSArray * records;                  //@synthesize records=_records - In the implementation block
@property (nonatomic,retain) NSArray * zoneIDs;                  //@synthesize zoneIDs=_zoneIDs - In the implementation block
@property (nonatomic,retain) NSArray * zones;                    //@synthesize zones=_zones - In the implementation block
@property (assign,nonatomic) long long destination;              //@synthesize destination=_destination - In the implementation block
-(long long)destination;
-(void)setDestination:(long long)arg1 ;
-(NSArray *)records;
-(void)setRecordIDs:(NSArray *)arg1 ;
-(NSArray *)recordIDs;
-(NSArray *)zoneIDs;
-(void)setZoneIDs:(NSArray *)arg1 ;
-(NSArray *)zones;
-(void)setRecords:(NSArray *)arg1 ;
-(void)setZones:(NSArray *)arg1 ;
@end

