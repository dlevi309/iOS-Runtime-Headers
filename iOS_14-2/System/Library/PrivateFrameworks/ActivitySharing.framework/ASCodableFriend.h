/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(ASCodableContact *)contact;
-(void)setContact:(ASCodableContact *)arg1 ;
-(unsigned long long)workoutsCount;
-(NSMutableArray *)workouts;
-(void)addWorkouts:(id)arg1 ;
-(void)clearWorkouts;
-(void)setAchievements:(NSMutableArray *)arg1 ;
-(NSMutableArray *)achievements;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasContact;
-(NSMutableArray *)snapshots;
-(BOOL)isEqual:(id)arg1 ;
-(void)setWorkouts:(NSMutableArray *)arg1 ;
-(id)workoutsAtIndex:(unsigned long long)arg1 ;
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

