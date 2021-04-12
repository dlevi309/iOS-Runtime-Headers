/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSArray, HKUnit;


@protocol INQueryHealthSampleIntentExport <NSObject,JSExport>
@property (assign,nonatomic) long long objectType; 
@property (nonatomic,copy) NSArray * recordDates; 
@property (nonatomic,copy) HKUnit * unit; 
@property (assign,nonatomic) long long questionType; 
@property (nonatomic,copy) NSArray * thresholdValues; 
@property (assign,nonatomic) long long expectedResultType; 
@required
-(id)init;
-(HKUnit *)unit;
-(long long)objectType;
-(void)setObjectType:(long long)arg1;
-(void)setUnit:(id)arg1;
-(long long)questionType;
-(void)setQuestionType:(long long)arg1;
-(long long)expectedResultType;
-(void)setExpectedResultType:(long long)arg1;
-(NSArray *)recordDates;
-(void)setRecordDates:(id)arg1;
-(NSArray *)thresholdValues;
-(void)setThresholdValues:(id)arg1;

@end

