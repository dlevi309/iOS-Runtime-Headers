/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RERelevanceProvider.h>

@interface REActivityRelevanceProvider : RERelevanceProvider {

	BOOL _closedActiveEngergy;
	BOOL _closedExerciseTime;
	BOOL _closedStandHour;

}

@property (nonatomic,readonly) BOOL closedActiveEngergy;              //@synthesize closedActiveEngergy=_closedActiveEngergy - In the implementation block
@property (nonatomic,readonly) BOOL closedExerciseTime;               //@synthesize closedExerciseTime=_closedExerciseTime - In the implementation block
@property (nonatomic,readonly) BOOL closedStandHour;                  //@synthesize closedStandHour=_closedStandHour - In the implementation block
+(id)relevanceSimulatorID;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)_hash;
-(id)dictionaryEncoding;
-(id)initWithActiveEnergyState:(BOOL)arg1 exerciseTimeState:(BOOL)arg2 standHourState:(BOOL)arg3 ;
-(BOOL)closedActiveEngergy;
-(BOOL)closedExerciseTime;
-(BOOL)closedStandHour;
@end

