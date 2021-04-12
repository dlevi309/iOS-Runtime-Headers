/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SAHLWorkoutType *)workoutType;
-(BOOL)isOpenGoal;
-(void)setIsOpenGoal:(BOOL)arg1 ;
-(BOOL)skipActivitySetup;
-(void)setSkipActivitySetup:(BOOL)arg1 ;
-(void)setWorkoutGoal:(SAHLWorkoutGoal *)arg1 ;
-(NSString *)workoutUserMode;
-(void)setWorkoutUserMode:(NSString *)arg1 ;
-(SAHLWorkoutGoal *)workoutGoal;
-(void)setWorkoutType:(SAHLWorkoutType *)arg1 ;
@end

