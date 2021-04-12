/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INSpeakableString, NSNumber;


@protocol INStartWorkoutIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INSpeakableString * workoutName; 
@property (nonatomic,copy) NSNumber * goalValue; 
@property (assign,nonatomic) long long workoutGoalUnitType; 
@property (assign,nonatomic) long long workoutLocationType; 
@property (nonatomic,copy) NSNumber * isOpenEnded; 
@required
-(id)init;
-(INSpeakableString *)workoutName;
-(void)setWorkoutName:(id)arg1;
-(NSNumber *)goalValue;
-(void)setGoalValue:(id)arg1;
-(NSNumber *)isOpenEnded;
-(void)setIsOpenEnded:(id)arg1;
-(long long)workoutGoalUnitType;
-(void)setWorkoutGoalUnitType:(long long)arg1;
-(long long)workoutLocationType;
-(void)setWorkoutLocationType:(long long)arg1;

@end

