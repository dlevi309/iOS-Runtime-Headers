/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(unsigned long long)workoutsCount;
-(NSMutableArray *)workouts;
-(void)addWorkouts:(id)arg1 ;
-(void)clearWorkouts;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setWorkouts:(NSMutableArray *)arg1 ;
-(id)workoutsAtIndex:(unsigned long long)arg1 ;
@end

