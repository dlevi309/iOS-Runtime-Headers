/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface HKCodableCondensedWorkoutCollection : PBCodable <NSCopying> {

	NSMutableArray* _workouts;

}

@property (nonatomic,retain) NSMutableArray * workouts;              //@synthesize workouts=_workouts - In the implementation block
+(Class)workoutsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)addWorkouts:(id)arg1 ;
-(unsigned long long)workoutsCount;
-(void)clearWorkouts;
-(id)workoutsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)workouts;
-(void)setWorkouts:(NSMutableArray *)arg1 ;
@end

