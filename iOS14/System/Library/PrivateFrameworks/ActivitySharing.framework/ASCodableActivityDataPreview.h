/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(BOOL)hasDate;
-(unsigned long long)workoutsCount;
-(NSMutableArray *)workouts;
-(void)addWorkouts:(id)arg1 ;
-(void)clearWorkouts;
-(void)setAchievements:(NSMutableArray *)arg1 ;
-(NSMutableArray *)achievements;
-(void)mergeFrom:(id)arg1 ;
-(void)setDate:(double)arg1 ;
-(id)description;
-(void)setHasDate:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(double)date;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setWorkouts:(NSMutableArray *)arg1 ;
-(id)workoutsAtIndex:(unsigned long long)arg1 ;
-(void)addAchievements:(id)arg1 ;
-(void)setActivitySnapshot:(ASCodableCloudKitActivitySnapshot *)arg1 ;
-(unsigned long long)achievementsCount;
-(void)clearAchievements;
-(id)achievementsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasActivitySnapshot;
-(ASCodableCloudKitActivitySnapshot *)activitySnapshot;
@end

