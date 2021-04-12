/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
*/

#import <GameplayKit/GKBehavior.h>

@class NSMutableArray;

@interface GKCompositeBehavior : GKBehavior {

	NSMutableArray* _subBehaviors;
	NSMutableArray* _subBehaviorWeights;

}

@property (readonly) long long behaviorCount; 
+(id)behaviorWithBehaviors:(id)arg1 ;
+(id)behaviorWithBehaviors:(id)arg1 andWeights:(id)arg2 ;
-(id)init;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)removeBehavior:(id)arg1 ;
-(void)removeAllBehaviors;
-(3)getTotalForce:(double)arg1 agent:(id)arg2 ;
-(long long)behaviorCount;
-(id)initWithBehaviors:(id)arg1 ;
-(id)initWithBehaviors:(id)arg1 andWeights:(id)arg2 ;
-(void)setWeight:(float)arg1 forBehavior:(id)arg2 ;
-(float)weightForBehavior:(id)arg1 ;
@end

