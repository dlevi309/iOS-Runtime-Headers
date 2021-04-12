/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)zoneIDs;
-(void)setDestination:(long long)arg1 ;
-(void)setRecords:(NSArray *)arg1 ;
-(NSArray *)zones;
-(NSArray *)records;
-(NSArray *)recordIDs;
-(void)setZones:(NSArray *)arg1 ;
-(void)setZoneIDs:(NSArray *)arg1 ;
-(void)setRecordIDs:(NSArray *)arg1 ;
-(long long)destination;
@end

