/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GKBehavior : NSObject <NSFastEnumeration, NSCopying> {

	NSMutableArray* _goals;
	NSMutableArray* _weights;

}

@property (readonly) long long goalCount; 
+(id)behaviorWithGoal:(id)arg1 weight:(float)arg2 ;
+(id)behaviorWithGoals:(id)arg1 ;
+(id)behaviorWithGoals:(id)arg1 andWeights:(id)arg2 ;
+(id)behaviorWithWeightedGoals:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_GK6*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id)weights;
-(3)getTotalForce:(double)arg1 agent:(id)arg2 ;
-(long long)goalCount;
-(float)weightForGoal:(id)arg1 ;
-(id)initWithGoal:(id)arg1 weight:(float)arg2 ;
-(void)setWeight:(float)arg1 forGoal:(id)arg2 ;
-(id)initWithGoals:(id)arg1 ;
-(id)initWithGoals:(id)arg1 andWeights:(id)arg2 ;
-(id)initWithWeightedGoals:(id)arg1 ;
-(id)goals;
-(void)removeGoal:(id)arg1 ;
-(void)removeAllGoals;
@end

