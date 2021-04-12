/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@class SAHLWorkoutGoal, SAHLWorkoutType, NSString;

@interface SAHLStartWorkout : SADomainCommand

@property (assign,nonatomic) BOOL isOpenGoal; 
@property (assign,nonatomic) BOOL skipActivitySetup; 
@property (nonatomic,retain) SAHLWorkoutGoal * workoutGoal; 
@property (nonatomic,retain) SAHLWorkoutType * workoutType; 
@property (nonatomic,copy) NSString * workoutUserMode; 
+(id)startWorkout;
+(id)startWorkoutWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setWorkoutType:(SAHLWorkoutType *)arg1 ;
-(SAHLWorkoutType *)workoutType;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SAHLWorkoutGoal *)workoutGoal;
-(BOOL)isOpenGoal;
-(void)setIsOpenGoal:(BOOL)arg1 ;
-(BOOL)skipActivitySetup;
-(void)setSkipActivitySetup:(BOOL)arg1 ;
-(void)setWorkoutGoal:(SAHLWorkoutGoal *)arg1 ;
-(NSString *)workoutUserMode;
-(void)setWorkoutUserMode:(NSString *)arg1 ;
@end

