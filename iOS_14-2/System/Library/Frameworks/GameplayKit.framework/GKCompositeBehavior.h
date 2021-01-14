/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)init;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)removeAllBehaviors;
-(void)removeBehavior:(id)arg1 ;
-(3)getTotalForce:(double)arg1 agent:(id)arg2 ;
-(long long)behaviorCount;
-(id)initWithBehaviors:(id)arg1 ;
-(id)initWithBehaviors:(id)arg1 andWeights:(id)arg2 ;
-(void)setWeight:(float)arg1 forBehavior:(id)arg2 ;
-(float)weightForBehavior:(id)arg1 ;
@end

