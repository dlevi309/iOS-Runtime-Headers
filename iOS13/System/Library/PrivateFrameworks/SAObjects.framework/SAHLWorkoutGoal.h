/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAHLWorkoutGoal : AceObject <SAAceSerializable>

@property (assign,nonatomic) double goalValue; 
@property (nonatomic,copy) NSString * workoutGoalUnitType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)workoutGoal;
+(id)workoutGoalWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(double)goalValue;
-(void)setGoalValue:(double)arg1 ;
-(NSString *)workoutGoalUnitType;
-(void)setWorkoutGoalUnitType:(NSString *)arg1 ;
-(id)encodedClassName;
@end

