/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
*/

#import <ActivitySharing/ActivitySharing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, ASCodableContact;

@interface ASCodableFriend : PBCodable <NSCopying> {

	NSMutableArray* _achievements;
	NSMutableArray* _competitions;
	ASCodableContact* _contact;
	NSMutableArray* _snapshots;
	NSMutableArray* _workouts;

}

@property (nonatomic,readonly) BOOL hasContact; 
@property (nonatomic,retain) ASCodableContact * contact;                 //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) NSMutableArray * snapshots;                 //@synthesize snapshots=_snapshots - In the implementation block
@property (nonatomic,retain) NSMutableArray * workouts;                  //@synthesize workouts=_workouts - In the implementation block
@property (nonatomic,retain) NSMutableArray * achievements;              //@synthesize achievements=_achievements - In the implementation block
@property (nonatomic,retain) NSMutableArray * competitions;              //@synthesize competitions=_competitions - In the implementation block
+(Class)workoutsType;
+(Class)achievementsType;
+(Class)snapshotsType;
+(Class)competitionsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(ASCodableContact *)contact;
-(void)setContact:(ASCodableContact *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)snapshots;
-(BOOL)hasContact;
-(void)addWorkouts:(id)arg1 ;
-(unsigned long long)workoutsCount;
-(void)clearWorkouts;
-(id)workoutsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)workouts;
-(void)setWorkouts:(NSMutableArray *)arg1 ;
-(void)setAchievements:(NSMutableArray *)arg1 ;
-(NSMutableArray *)achievements;
-(void)addAchievements:(id)arg1 ;
-(unsigned long long)achievementsCount;
-(void)clearAchievements;
-(id)achievementsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)competitions;
-(void)setCompetitions:(NSMutableArray *)arg1 ;
-(void)setSnapshots:(NSMutableArray *)arg1 ;
-(void)addSnapshots:(id)arg1 ;
-(void)addCompetitions:(id)arg1 ;
-(unsigned long long)snapshotsCount;
-(void)clearSnapshots;
-(id)snapshotsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)competitionsCount;
-(void)clearCompetitions;
-(id)competitionsAtIndex:(unsigned long long)arg1 ;
@end

