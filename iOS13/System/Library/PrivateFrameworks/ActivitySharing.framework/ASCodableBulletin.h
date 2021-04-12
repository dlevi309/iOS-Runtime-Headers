/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
*/

#import <ActivitySharing/ActivitySharing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface ASCodableBulletin : PBCodable <NSCopying> {

	long long _competitionStage;
	double _timestamp;
	long long _type;
	NSData* _achievementData;
	NSData* _friendListData;
	NSString* _friendUUID;
	NSData* _snapshotData;
	NSString* _title;
	NSData* _workoutData;
	SCD_Struct_AS7 _has;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) long long type;                          //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasFriendUUID; 
@property (nonatomic,retain) NSString * friendUUID;                   //@synthesize friendUUID=_friendUUID - In the implementation block
@property (nonatomic,readonly) BOOL hasFriendListData; 
@property (nonatomic,retain) NSData * friendListData;                 //@synthesize friendListData=_friendListData - In the implementation block
@property (nonatomic,readonly) BOOL hasAchievementData; 
@property (nonatomic,retain) NSData * achievementData;                //@synthesize achievementData=_achievementData - In the implementation block
@property (nonatomic,readonly) BOOL hasWorkoutData; 
@property (nonatomic,retain) NSData * workoutData;                    //@synthesize workoutData=_workoutData - In the implementation block
@property (nonatomic,readonly) BOOL hasSnapshotData; 
@property (nonatomic,retain) NSData * snapshotData;                   //@synthesize snapshotData=_snapshotData - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                        //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasCompetitionStage; 
@property (assign,nonatomic) long long competitionStage;              //@synthesize competitionStage=_competitionStage - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(id)dictionaryRepresentation;
-(double)timestamp;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(double)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasTitle;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(NSString *)friendUUID;
-(void)setFriendUUID:(NSString *)arg1 ;
-(void)setSnapshotData:(NSData *)arg1 ;
-(NSData *)snapshotData;
-(BOOL)hasFriendUUID;
-(void)setFriendListData:(NSData *)arg1 ;
-(void)setAchievementData:(NSData *)arg1 ;
-(void)setWorkoutData:(NSData *)arg1 ;
-(BOOL)hasFriendListData;
-(BOOL)hasAchievementData;
-(BOOL)hasWorkoutData;
-(BOOL)hasSnapshotData;
-(void)setCompetitionStage:(long long)arg1 ;
-(void)setHasCompetitionStage:(BOOL)arg1 ;
-(BOOL)hasCompetitionStage;
-(NSData *)friendListData;
-(NSData *)achievementData;
-(NSData *)workoutData;
-(long long)competitionStage;
@end

