/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)encodedClassName;
-(double)goalValue;
-(void)setGoalValue:(double)arg1 ;
-(NSString *)workoutGoalUnitType;
-(void)setWorkoutGoalUnitType:(NSString *)arg1 ;
@end

