/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
*/

#import <ActivitySharing/ActivitySharing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, ASCodableCloudKitActivitySnapshot;

@interface ASCodableActivityDataPreview : PBCodable <NSCopying> {

	double _date;
	NSMutableArray* _achievements;
	ASCodableCloudKitActivitySnapshot* _activitySnapshot;
	NSMutableArray* _workouts;
	SCD_Struct_AS1 _has;

}

@property (nonatomic,readonly) BOOL hasActivitySnapshot; 
@property (nonatomic,retain) ASCodableCloudKitActivitySnapshot * activitySnapshot;              //@synthesize activitySnapshot=_activitySnapshot - In the implementation block
@property (nonatomic,retain) NSMutableArray * workouts;                                         //@synthesize workouts=_workouts - In the implementation block
@property (nonatomic,retain) NSMutableArray * achievements;                                     //@synthesize achievements=_achievements - In the implementation block
@property (assign,nonatomic) BOOL hasDate; 
@property (assign,nonatomic) double date;                                                       //@synthesize date=_date - In the implementation block
+(Class)workoutsType;
+(Class)achievementsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)date;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasDate;
-(void)setDate:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)addWorkouts:(id)arg1 ;
-(unsigned long long)workoutsCount;
-(void)clearWorkouts;
-(id)workoutsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)workouts;
-(void)setWorkouts:(NSMutableArray *)arg1 ;
-(void)setHasDate:(BOOL)arg1 ;
-(void)setAchievements:(NSMutableArray *)arg1 ;
-(NSMutableArray *)achievements;
-(void)addAchievements:(id)arg1 ;
-(void)setActivitySnapshot:(ASCodableCloudKitActivitySnapshot *)arg1 ;
-(unsigned long long)achievementsCount;
-(void)clearAchievements;
-(id)achievementsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasActivitySnapshot;
-(ASCodableCloudKitActivitySnapshot *)activitySnapshot;
@end

